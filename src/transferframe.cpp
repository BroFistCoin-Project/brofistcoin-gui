// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#include <QClipboard>
#include <QCompleter>
#include <QWheelEvent>

#include "transferframe.h"
//#include "Settings/Settings.h"
//#include "Common/AddressBookDialog.h"
//#include "ICryptoNoteAdapter.h"
//#include "Models/AddressBookModel.h"
//#include "Style/Style.h"
#include "addressbookmodel.h"
#include "addressbookdialog.h"
#include "addressbookmanager.h"
#include "common.h"

#include "ui_transferframe.h"

namespace WalletGUI {

namespace {

const char TRANSFER_FRAME_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--TransferFrame {"
    "background-color: %backgroundColorGray%;"
    "border: none;"
    "border-top: 1px solid %borderColor%;"
  "}"

  "WalletGui--TransferFrame[hideTopBorder=\"true\"] {"
    "border-top: none"
  "}"

  "WalletGui--TransferFrame #m_addressBookButton {"
    "margin-top: 1px;"
  "}"

  "WalletGui--TransferFrame #m_sendAmountSpin {"
    "min-width: 230px;"
    "max-width: 230px;"
  "}";

}

bool parseAmount(const QString& str, qint64& amount)
{
    static const int numberOfDecimalPlaces = 8;
    static const QChar separator = '.';
    static const QChar minus = '-';
    static const QChar plus = '+';
    static const QChar zero = '0';

    QString trimmedStr = str.trimmed();
    if (trimmedStr.isEmpty())
        return false;
    const QChar first = trimmedStr[0];
    const bool negative = (first == minus);
    if (first == minus || first == plus)
        trimmedStr.remove(0, 1);

    const int fracPos = trimmedStr.indexOf(separator);
    if (fracPos != trimmedStr.lastIndexOf(separator))
        return false;
    if (fracPos == -1)
        trimmedStr.append(separator);
    const QStringList splitted = trimmedStr.split(separator, QString::KeepEmptyParts);
    Q_ASSERT(splitted.size() == 2);
    const QString& integerPart = splitted.first();
    const QString& fractionalPart = splitted.last();
    const QString justifiedFrac = fractionalPart.leftJustified(numberOfDecimalPlaces, zero, true /*truncate*/);

    bool ok = true;
    const qint64 integer = integerPart.isEmpty() ? 0 : integerPart.toLongLong(&ok);
    if (!ok)
        return false;
    const qint64 frac = justifiedFrac.isEmpty() ? 0 : justifiedFrac.toLongLong(&ok);
    if (!ok)
        return false;
    const qint64 value = integer * COIN + frac;
    amount = negative ? -value : value;
    return true;
}

TransferFrame::TransferFrame(QWidget* parent)
    : QFrame(parent)
    , m_ui(new Ui::TransferFrame)
    , m_mainWindow(nullptr)
    , m_addressBookModel(nullptr)
    , m_addressBookManager(nullptr)
    , m_addressCompleter(new QCompleter(this))
{
    m_ui->setupUi(this);
    m_ui->m_sendAmountSpin->installEventFilter(this);
//    setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(TRANSFER_FRAME_STYLE_SHEET_TEMPLATE));
}

TransferFrame::~TransferFrame()
{}

bool TransferFrame::readyToSend() const
{
    QString address = getAddress();
    double amount = m_ui->m_sendAmountSpin->value();
    return !address.isEmpty() && amount > 0/* && m_cryptoNoteAdapter->isValidAddress(address)*/;
}

QString TransferFrame::getAddress() const
{
    return m_ui->m_sendAddressEdit->text().trimmed();
}

QString TransferFrame::getAmountString() const
{
    return m_ui->m_sendAmountSpin->cleanText();
}

quint64 TransferFrame::getAmount() const
{
    qint64 amount  = 0;
    const bool ok = parseAmount(getAmountString(), amount);
    Q_ASSERT(ok);
    Q_ASSERT(amount >= 0);
    return static_cast<quint64>(amount);
}

QString TransferFrame::getLabel() const
{
    return m_ui->m_sendLabelEdit->text().trimmed();
}

void TransferFrame::setAddress(const QString& address)
{
    m_ui->m_sendAddressEdit->setText(address);
}

void TransferFrame::setAmount(qreal amount)
{
    m_ui->m_sendAmountSpin->setValue(amount);
}

void TransferFrame::setLabel(const QString& label)
{
    m_ui->m_sendLabelEdit->setText(label);
}

void TransferFrame::disableRemoveButton(bool disable)
{
    m_ui->m_removeButton->setHidden(disable);
}

void TransferFrame::hideBorder()
{
    setProperty("hideTopBorder", true);
    style()->unpolish(this);
    style()->polish(this);
}

void TransferFrame::setAddressError(bool error)
{
    m_ui->m_payToTextLabel->setProperty("errorState", error);
    m_ui->m_sendAddressEdit->setProperty("errorState", error);
    if (error)
        m_ui->m_payToTextLabel->setText(tr("INVALID ADDRESS"));
    else
        m_ui->m_payToTextLabel->setText(tr("Pay to"));

    m_ui->m_sendAddressEdit->style()->unpolish(m_ui->m_sendAddressEdit);
    m_ui->m_sendAddressEdit->style()->polish(m_ui->m_sendAddressEdit);
    m_ui->m_sendAddressEdit->update();

    m_ui->m_payToTextLabel->style()->unpolish(m_ui->m_payToTextLabel);
    m_ui->m_payToTextLabel->style()->polish(m_ui->m_payToTextLabel);
    m_ui->m_payToTextLabel->update();
}

void TransferFrame::setDuplicationError(bool error)
{
    m_ui->m_sendLabelEdit->setProperty("errorState", error);
    m_ui->m_labelTextLabel->setProperty("errorState", error);
    m_ui->m_labelTextLabel->setText(error ?
            tr("ADDRESS OR LABEL ALREADY EXISTS IN THE ADDRESS BOOK AND WILL NOT BE ADDED") :
            tr("Label"));

    m_ui->m_sendLabelEdit->style()->unpolish(m_ui->m_sendLabelEdit);
    m_ui->m_sendLabelEdit->style()->polish(m_ui->m_sendLabelEdit);
    m_ui->m_sendLabelEdit->update();

    m_ui->m_labelTextLabel->style()->unpolish(m_ui->m_labelTextLabel);
    m_ui->m_labelTextLabel->style()->polish(m_ui->m_labelTextLabel);
    m_ui->m_labelTextLabel->update();
}

void TransferFrame::setAmountFormatError(bool error)
{
    m_ui->m_amountTextLabel->setProperty("errorState", error);
    m_ui->m_sendAmountSpin->setProperty("errorState", error);
    if (error)
    {
        m_ui->m_amountTextLabel->setText(tr("WRONG AMOUNT"));
        connect(m_ui->m_sendAmountSpin, static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), this,
                &TransferFrame::validateAmount, Qt::UniqueConnection);
    }
    else
        m_ui->m_amountTextLabel->setText(tr("Amount (BCN)"));

    m_ui->m_sendAmountSpin->style()->unpolish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->style()->polish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->update();

    m_ui->m_amountTextLabel->style()->unpolish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->style()->polish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->update();
}

void TransferFrame::setInsufficientFundsError(bool error)
{
    m_ui->m_amountTextLabel->setProperty("errorState", error);
    m_ui->m_sendAmountSpin->setProperty("errorState", error);
    if (error)
    {
        m_ui->m_amountTextLabel->setText(tr("INSUFFICIENT FUNDS"));
        connect(m_ui->m_sendAmountSpin, static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), this,
                &TransferFrame::validateAmount, Qt::UniqueConnection);
    }
    else
        m_ui->m_amountTextLabel->setText(tr("Amount (BCN)"));

    m_ui->m_sendAmountSpin->style()->unpolish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->style()->polish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->update();

    m_ui->m_amountTextLabel->style()->unpolish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->style()->polish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->update();
}

void TransferFrame::setBigTransactionError(bool error)
{
    m_ui->m_amountTextLabel->setProperty("errorState", error);
    m_ui->m_sendAmountSpin->setProperty("errorState", error);
    if (error)
    {
        m_ui->m_amountTextLabel->setText(tr("TRANSACTION IS TOO BIG"));
        connect(m_ui->m_sendAmountSpin, static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), this,
                &TransferFrame::validateAmount, Qt::UniqueConnection);
    }
    else
        m_ui->m_amountTextLabel->setText(tr("Amount (BCN)"));

    m_ui->m_sendAmountSpin->style()->unpolish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->style()->polish(m_ui->m_sendAmountSpin);
    m_ui->m_sendAmountSpin->update();

    m_ui->m_amountTextLabel->style()->unpolish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->style()->polish(m_ui->m_amountTextLabel);
    m_ui->m_amountTextLabel->update();
}

void TransferFrame::setLabelLikePaymentIdError(bool error)
{
    m_ui->m_sendLabelEdit->setProperty("errorState", error);
    m_ui->m_labelTextLabel->setProperty("errorState", error);
    m_ui->m_labelTextLabel->setText(error ? tr("NOTE: THIS IS NOT A PAYMENT ID FIELD") : tr("Label"));

    m_ui->m_sendLabelEdit->style()->unpolish(m_ui->m_sendLabelEdit);
    m_ui->m_sendLabelEdit->style()->polish(m_ui->m_sendLabelEdit);
    m_ui->m_sendLabelEdit->update();

    m_ui->m_labelTextLabel->style()->unpolish(m_ui->m_labelTextLabel);
    m_ui->m_labelTextLabel->style()->polish(m_ui->m_labelTextLabel);
    m_ui->m_labelTextLabel->update();
}

bool TransferFrame::eventFilter(QObject* object, QEvent* event) {
  if (object == m_ui->m_sendAmountSpin) {
    if (event->type() == QEvent::Wheel && !m_ui->m_sendAmountSpin->hasFocus()) {
      wheelEvent(static_cast<QWheelEvent*>(event));
      return true;
    }
  }

  return false;
}

void TransferFrame::setMainWindow(QWidget* mainWindow)
{
    m_mainWindow = mainWindow;
}

void TransferFrame::setAddressBookManager(AddressBookManager *manager)
{
    m_addressBookManager = manager;
}

void TransferFrame::setAddressBookModel(QAbstractItemModel* model)
{
    m_addressBookModel = model;
    m_addressCompleter->setModel(m_addressBookModel);
    m_addressCompleter->setCompletionColumn(AddressBookModel::COLUMN_LABEL);
    m_addressCompleter->setCompletionRole(AddressBookModel::ROLE_LABEL);
    m_addressCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    m_ui->m_sendAddressEdit->setCompleter(m_addressCompleter);

    connect(m_addressCompleter, static_cast<void(QCompleter::*)(const QModelIndex&)>(&QCompleter::activated), this,
        [&](const QModelIndex& index)
        {
            m_ui->m_sendAddressEdit->setText(index.data(AddressBookModel::ROLE_ADDRESS).toString());
        }, Qt::QueuedConnection);
}

void TransferFrame::addressBookClicked()
{
    AddressBookDialog dlg(m_addressBookModel, m_mainWindow);
    if (dlg.exec() == QDialog::Accepted)
    {
        m_ui->m_sendAddressEdit->setText(dlg.getAddress());
        m_ui->m_sendLabelEdit->setText(dlg.getLabel());
    }
}

void TransferFrame::pasteClicked()
{
    m_ui->m_sendAddressEdit->setText(QApplication::clipboard()->text());
}

void TransferFrame::addressChanged(const QString& address)
{
//    setAddressError(m_addressCompleter->currentCompletion().isEmpty() && !address.isEmpty() && !m_cryptoNoteAdapter->isValidAddress(address));
    setAddressError(address.isEmpty());
    Q_EMIT addressChangedSignal(address);
}

void TransferFrame::labelOrAddressChanged(const QString& /*text*/)
{
    QString label = getLabel().trimmed();
    QString address = getAddress().trimmed();
    if (!label.isEmpty() && (m_addressBookManager->findAddressByAddress(address) != INVALID_ADDRESS_INDEX ||
                             m_addressBookManager->findAddressByLabel(label) != INVALID_ADDRESS_INDEX))
    {
        setDuplicationError(true);
        return;
    }
//    else if (m_cryptoNoteAdapter->isValidPaymentId(label))
//    {
//        setLabelLikePaymentIdError(true);
//        return;
//    }

    setDuplicationError(false);
}

void TransferFrame::validateAmount(double amount)
{
    if (amount > 0)
        setAmountFormatError(false);
    else
        setAmountFormatError(true);
}

void TransferFrame::amountStringChanged(const QString& /*amountString*/)
{
    Q_EMIT amountStringChangedSignal(m_ui->m_sendAmountSpin->cleanText());
}

}
