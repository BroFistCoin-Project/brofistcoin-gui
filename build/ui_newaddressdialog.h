/********************************************************************************
** Form generated from reading UI file 'newaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADDRESSDIALOG_H
#define UI_NEWADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewAddressDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *m_cancelButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_addressEdit;
    QLabel *m_labelTextLabel;
    QPushButton *m_okButton;
    QLineEdit *m_labelEdit;
    QLabel *m_addressTextLabel;

    void setupUi(QDialog *NewAddressDialog)
    {
        if (NewAddressDialog->objectName().isEmpty())
            NewAddressDialog->setObjectName(QStringLiteral("NewAddressDialog"));
        NewAddressDialog->resize(584, 229);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewAddressDialog->sizePolicy().hasHeightForWidth());
        NewAddressDialog->setSizePolicy(sizePolicy);
        NewAddressDialog->setMinimumSize(QSize(584, 229));
        NewAddressDialog->setMaximumSize(QSize(584, 229));
        gridLayout = new QGridLayout(NewAddressDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(30, 30, 30, 30);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 4);

        m_cancelButton = new QPushButton(NewAddressDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 7, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        m_addressEdit = new QLineEdit(NewAddressDialog);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setStyleSheet(QLatin1String("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));
        m_addressEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_addressEdit, 4, 0, 1, 4);

        m_labelTextLabel = new QLabel(NewAddressDialog);
        m_labelTextLabel->setObjectName(QStringLiteral("m_labelTextLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labelTextLabel->sizePolicy().hasHeightForWidth());
        m_labelTextLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_labelTextLabel, 0, 0, 1, 4);

        m_okButton = new QPushButton(NewAddressDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setEnabled(false);

        gridLayout->addWidget(m_okButton, 7, 2, 1, 2);

        m_labelEdit = new QLineEdit(NewAddressDialog);
        m_labelEdit->setObjectName(QStringLiteral("m_labelEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_labelEdit->sizePolicy().hasHeightForWidth());
        m_labelEdit->setSizePolicy(sizePolicy2);
        m_labelEdit->setStyleSheet(QLatin1String("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));
        m_labelEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_labelEdit, 1, 0, 1, 4);

        m_addressTextLabel = new QLabel(NewAddressDialog);
        m_addressTextLabel->setObjectName(QStringLiteral("m_addressTextLabel"));
        sizePolicy1.setHeightForWidth(m_addressTextLabel->sizePolicy().hasHeightForWidth());
        m_addressTextLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_addressTextLabel, 3, 0, 1, 4);

        QWidget::setTabOrder(m_labelEdit, m_addressEdit);
        QWidget::setTabOrder(m_addressEdit, m_okButton);

        retranslateUi(NewAddressDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewAddressDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewAddressDialog, SLOT(reject()));
        QObject::connect(m_addressEdit, SIGNAL(textChanged(QString)), NewAddressDialog, SLOT(validateAddress(QString)));
        QObject::connect(m_labelEdit, SIGNAL(textChanged(QString)), NewAddressDialog, SLOT(validateLabel(QString)));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAddressDialog)
    {
        NewAddressDialog->setWindowTitle(QApplication::translate("NewAddressDialog", "New contact", 0));
        m_cancelButton->setText(QApplication::translate("NewAddressDialog", "Cancel", 0));
        m_labelTextLabel->setText(QApplication::translate("NewAddressDialog", "LABEL", 0));
        m_okButton->setText(QApplication::translate("NewAddressDialog", "OK", 0));
        m_addressTextLabel->setText(QApplication::translate("NewAddressDialog", "ADDRESS", 0));
    } // retranslateUi

};

namespace Ui {
    class NewAddressDialog: public Ui_NewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADDRESSDIALOG_H
