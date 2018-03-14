/********************************************************************************
** Form generated from reading UI file 'sendframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resizablescrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *verticalLayout;
    WalletGUI::ResizableScrollArea *m_sendScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_transfersLayout;
    QSpacerItem *verticalSpacer;
    QFrame *m_sendFeeFrame;
    QGridLayout *gridLayout_2;
    QLineEdit *m_paymentIdEdit;
    QLabel *m_paymentIdTextLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_addRecipientButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *minimalLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *fastLabel;
    QSlider *m_feeSlider;
    QLabel *m_feeTextLabel;
    QFrame *m_mixinFrame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_totalAmountLabel;
    QSpinBox *m_mixinSpin;
    QSpacerItem *horizontalSpacer;
    QSlider *m_mixinSlider;
    QPushButton *m_sendButton;
    QLabel *label_2;
    QLabel *m_mixinTextLabel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QStringLiteral("SendFrame"));
        SendFrame->resize(654, 365);
        SendFrame->setFrameShape(QFrame::NoFrame);
        SendFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(SendFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea = new WalletGUI::ResizableScrollArea(SendFrame);
        m_sendScrollarea->setObjectName(QStringLiteral("m_sendScrollarea"));
        m_sendScrollarea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_sendScrollarea->sizePolicy().hasHeightForWidth());
        m_sendScrollarea->setSizePolicy(sizePolicy);
        m_sendScrollarea->setAutoFillBackground(false);
        m_sendScrollarea->setStyleSheet(QStringLiteral(""));
        m_sendScrollarea->setFrameShape(QFrame::NoFrame);
        m_sendScrollarea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_sendScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 654, 68));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral(""));
        m_transfersLayout = new QVBoxLayout(scrollAreaWidgetContents);
        m_transfersLayout->setSpacing(0);
        m_transfersLayout->setObjectName(QStringLiteral("m_transfersLayout"));
        m_transfersLayout->setSizeConstraint(QLayout::SetNoConstraint);
        m_transfersLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(m_sendScrollarea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_sendFeeFrame = new QFrame(SendFrame);
        m_sendFeeFrame->setObjectName(QStringLiteral("m_sendFeeFrame"));
        m_sendFeeFrame->setFrameShape(QFrame::NoFrame);
        m_sendFeeFrame->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(m_sendFeeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(18);
        gridLayout_2->setContentsMargins(25, 5, 25, 10);
        m_paymentIdEdit = new QLineEdit(m_sendFeeFrame);
        m_paymentIdEdit->setObjectName(QStringLiteral("m_paymentIdEdit"));
        m_paymentIdEdit->setStyleSheet(QLatin1String("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));

        gridLayout_2->addWidget(m_paymentIdEdit, 6, 3, 1, 1);

        m_paymentIdTextLabel = new QLabel(m_sendFeeFrame);
        m_paymentIdTextLabel->setObjectName(QStringLiteral("m_paymentIdTextLabel"));

        gridLayout_2->addWidget(m_paymentIdTextLabel, 5, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_addRecipientButton = new QPushButton(m_sendFeeFrame);
        m_addRecipientButton->setObjectName(QStringLiteral("m_addRecipientButton"));
        m_addRecipientButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_addRecipientButton->setFocusPolicy(Qt::StrongFocus);
        m_addRecipientButton->setFlat(false);

        horizontalLayout->addWidget(m_addRecipientButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 3, 1, 1);

        frame = new QFrame(m_sendFeeFrame);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(200, 20));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        minimalLabel = new QLabel(frame);
        minimalLabel->setObjectName(QStringLiteral("minimalLabel"));
        minimalLabel->setEnabled(true);

        horizontalLayout_3->addWidget(minimalLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        fastLabel = new QLabel(frame);
        fastLabel->setObjectName(QStringLiteral("fastLabel"));
        fastLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(fastLabel);


        gridLayout_2->addWidget(frame, 6, 0, 1, 3);

        m_feeSlider = new QSlider(m_sendFeeFrame);
        m_feeSlider->setObjectName(QStringLiteral("m_feeSlider"));
        m_feeSlider->setMinimum(1);
        m_feeSlider->setMaximum(4);
        m_feeSlider->setPageStep(1);
        m_feeSlider->setValue(2);
        m_feeSlider->setOrientation(Qt::Horizontal);
        m_feeSlider->setTickPosition(QSlider::TicksBelow);
        m_feeSlider->setTickInterval(1);

        gridLayout_2->addWidget(m_feeSlider, 5, 0, 1, 3);

        m_feeTextLabel = new QLabel(m_sendFeeFrame);
        m_feeTextLabel->setObjectName(QStringLiteral("m_feeTextLabel"));

        gridLayout_2->addWidget(m_feeTextLabel, 2, 0, 1, 3);


        verticalLayout->addWidget(m_sendFeeFrame);

        m_mixinFrame = new QFrame(SendFrame);
        m_mixinFrame->setObjectName(QStringLiteral("m_mixinFrame"));
        m_mixinFrame->setFrameShape(QFrame::NoFrame);
        m_mixinFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_mixinFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(25, 11, 25, 23);
        label = new QLabel(m_mixinFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 2, 1);

        m_totalAmountLabel = new QLabel(m_mixinFrame);
        m_totalAmountLabel->setObjectName(QStringLiteral("m_totalAmountLabel"));
        m_totalAmountLabel->setIndent(0);

        gridLayout->addWidget(m_totalAmountLabel, 0, 5, 2, 1);

        m_mixinSpin = new QSpinBox(m_mixinFrame);
        m_mixinSpin->setObjectName(QStringLiteral("m_mixinSpin"));
        m_mixinSpin->setMaximum(999999999);

        gridLayout->addWidget(m_mixinSpin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 2, 1);

        m_mixinSlider = new QSlider(m_mixinFrame);
        m_mixinSlider->setObjectName(QStringLiteral("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(16777215, 16777215));
        m_mixinSlider->setMaximum(50);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(6);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_mixinSlider, 1, 0, 1, 2);

        m_sendButton = new QPushButton(m_mixinFrame);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy2);
        m_sendButton->setMinimumSize(QSize(218, 40));
        m_sendButton->setMaximumSize(QSize(218, 40));
        m_sendButton->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(m_sendButton, 0, 7, 2, 1);

        label_2 = new QLabel(m_mixinFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 2, 1);

        m_mixinTextLabel = new QLabel(m_mixinFrame);
        m_mixinTextLabel->setObjectName(QStringLiteral("m_mixinTextLabel"));

        gridLayout->addWidget(m_mixinTextLabel, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 6, 2, 1);


        verticalLayout->addWidget(m_mixinFrame);

        QWidget::setTabOrder(m_sendScrollarea, m_addRecipientButton);
        QWidget::setTabOrder(m_addRecipientButton, m_feeSlider);
        QWidget::setTabOrder(m_feeSlider, m_paymentIdEdit);
        QWidget::setTabOrder(m_paymentIdEdit, m_mixinSpin);
        QWidget::setTabOrder(m_mixinSpin, m_mixinSlider);
        QWidget::setTabOrder(m_mixinSlider, m_sendButton);

        retranslateUi(SendFrame);
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_paymentIdEdit, SIGNAL(textChanged(QString)), SendFrame, SLOT(validatePaymentId(QString)));
        QObject::connect(m_mixinSpin, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_feeSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(feeValueChanged(int)));

        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", 0));
        m_paymentIdEdit->setPlaceholderText(QApplication::translate("SendFrame", "Payment identifier issued by payee (market, exchange or other entity)", 0));
        m_paymentIdTextLabel->setText(QApplication::translate("SendFrame", "Payment ID", 0));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "Add recipient", 0));
        minimalLabel->setText(QApplication::translate("SendFrame", "Slow", 0));
        fastLabel->setText(QApplication::translate("SendFrame", "Fast", 0));
#ifndef QT_NO_TOOLTIP
        m_feeTextLabel->setToolTip(QApplication::translate("SendFrame", "Atomic units per byte", 0));
#endif // QT_NO_TOOLTIP
        m_feeTextLabel->setText(QApplication::translate("SendFrame", "Fee (AU per byte)", 0));
        label->setText(QString());
        m_totalAmountLabel->setText(QApplication::translate("SendFrame", "amount", 0));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", 0));
        label_2->setText(QApplication::translate("SendFrame", "Total amount", 0));
        m_mixinTextLabel->setText(QApplication::translate("SendFrame", "Anonymity level", 0));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
