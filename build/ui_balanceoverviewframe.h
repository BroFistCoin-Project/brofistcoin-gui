/********************************************************************************
** Form generated from reading UI file 'balanceoverviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEOVERVIEWFRAME_H
#define UI_BALANCEOVERVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_BalanceFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *m_overviewLockedOrUnconfirmedBalanceLabel;
    QLabel *m_overviewSpendableDustBalanceLabel;
    QSpacerItem *verticalSpacer;
    QLabel *m_overviewSpendableBalanceTextLabel;
    QLabel *m_overviewSpendableBalanceLabel;
    QLabel *m_overviewTotalBalanceTickerLabel;
    QLabel *m_overviewTotalBalanceTextLabel;
    QLabel *m_overviewLockedOrUnconfirmedBalanceTickerLabel;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *m_overviewLockedOrUnconfirmedBalanceTextLabel;
    QLabel *m_overviewSpendableBalanceTickerLabel;
    QLabel *m_overviewTotalBalanceLabel;
    QLabel *m_overviewSpendableDustBalanceTickerLabel;
    QLabel *m_overviewSpendableDustBalanceTextLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *m_overviewBalanceIconLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *BalanceFrame)
    {
        if (BalanceFrame->objectName().isEmpty())
            BalanceFrame->setObjectName(QStringLiteral("BalanceFrame"));
        BalanceFrame->resize(358, 170);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BalanceFrame->sizePolicy().hasHeightForWidth());
        BalanceFrame->setSizePolicy(sizePolicy);
        BalanceFrame->setFrameShape(QFrame::StyledPanel);
        BalanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(BalanceFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_overviewLockedOrUnconfirmedBalanceLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceLabel->setObjectName(QStringLiteral("m_overviewLockedOrUnconfirmedBalanceLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_overviewLockedOrUnconfirmedBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewLockedOrUnconfirmedBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewLockedOrUnconfirmedBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewLockedOrUnconfirmedBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceLabel, 6, 5, 1, 1);

        m_overviewSpendableDustBalanceLabel = new QLabel(BalanceFrame);
        m_overviewSpendableDustBalanceLabel->setObjectName(QStringLiteral("m_overviewSpendableDustBalanceLabel"));
        sizePolicy1.setHeightForWidth(m_overviewSpendableDustBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewSpendableDustBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewSpendableDustBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewSpendableDustBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewSpendableDustBalanceLabel, 5, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 4, 1, 3);

        m_overviewSpendableBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceTextLabel->setObjectName(QStringLiteral("m_overviewSpendableBalanceTextLabel"));
        m_overviewSpendableBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableBalanceTextLabel, 4, 4, 1, 1);

        m_overviewSpendableBalanceLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceLabel->setObjectName(QStringLiteral("m_overviewSpendableBalanceLabel"));
        sizePolicy1.setHeightForWidth(m_overviewSpendableBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewSpendableBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewSpendableBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewSpendableBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewSpendableBalanceLabel, 4, 5, 1, 1);

        m_overviewTotalBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTickerLabel"));

        gridLayout->addWidget(m_overviewTotalBalanceTickerLabel, 7, 6, 1, 1);

        m_overviewTotalBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceTextLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTextLabel"));
        m_overviewTotalBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTextLabel, 7, 4, 1, 1);

        m_overviewLockedOrUnconfirmedBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewLockedOrUnconfirmedBalanceTickerLabel"));
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceTickerLabel, 6, 6, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 3, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 1);

        m_overviewLockedOrUnconfirmedBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setObjectName(QStringLiteral("m_overviewLockedOrUnconfirmedBalanceTextLabel"));
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceTextLabel, 6, 4, 1, 1);

        m_overviewSpendableBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewSpendableBalanceTickerLabel"));
        m_overviewSpendableBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableBalanceTickerLabel, 4, 6, 1, 1);

        m_overviewTotalBalanceLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceLabel"));
        sizePolicy1.setHeightForWidth(m_overviewTotalBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewTotalBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewTotalBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewTotalBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewTotalBalanceLabel, 7, 5, 1, 1);

        m_overviewSpendableDustBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewSpendableDustBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewSpendableDustBalanceTickerLabel"));
        m_overviewSpendableDustBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableDustBalanceTickerLabel, 5, 6, 1, 1);

        m_overviewSpendableDustBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewSpendableDustBalanceTextLabel->setObjectName(QStringLiteral("m_overviewSpendableDustBalanceTextLabel"));
        m_overviewSpendableDustBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableDustBalanceTextLabel, 5, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 4, 1, 1);

        m_overviewBalanceIconLabel = new QLabel(BalanceFrame);
        m_overviewBalanceIconLabel->setObjectName(QStringLiteral("m_overviewBalanceIconLabel"));
        m_overviewBalanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/actual_balance")));

        gridLayout->addWidget(m_overviewBalanceIconLabel, 2, 2, 6, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 7, 1, 1);


        retranslateUi(BalanceFrame);

        QMetaObject::connectSlotsByName(BalanceFrame);
    } // setupUi

    void retranslateUi(QFrame *BalanceFrame)
    {
        BalanceFrame->setWindowTitle(QApplication::translate("BalanceFrame", "Frame", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewLockedOrUnconfirmedBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewLockedOrUnconfirmedBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewSpendableDustBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewSpendableDustBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", 0));
        m_overviewSpendableBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Spendable", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewSpendableBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewSpendableBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", 0));
        m_overviewTotalBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "BCN", 0));
        m_overviewTotalBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Total balance", 0));
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "BCN", 0));
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Locked or unconfirmed", 0));
        m_overviewSpendableBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "BCN", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", 0));
        m_overviewSpendableDustBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "BCN", 0));
        m_overviewSpendableDustBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Spendable dust", 0));
        m_overviewBalanceIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BalanceFrame: public Ui_BalanceFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEOVERVIEWFRAME_H
