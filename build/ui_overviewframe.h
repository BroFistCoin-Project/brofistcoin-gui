/********************************************************************************
** Form generated from reading UI file 'overviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWFRAME_H
#define UI_OVERVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include "balanceoverviewframe.h"
#include "miningoverviewframe.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    WalletGUI::BalanceOverviewFrame *m_balanceOverviewFrame;
    WalletGUI::MiningOverviewFrame *m_miningOverviewFrame;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *m_recentTransactionsView;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QFrame *OverviewFrame)
    {
        if (OverviewFrame->objectName().isEmpty())
            OverviewFrame->setObjectName(QStringLiteral("OverviewFrame"));
        OverviewFrame->resize(870, 500);
        OverviewFrame->setFrameShape(QFrame::StyledPanel);
        OverviewFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(OverviewFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        m_balanceOverviewFrame = new WalletGUI::BalanceOverviewFrame(OverviewFrame);
        m_balanceOverviewFrame->setObjectName(QStringLiteral("m_balanceOverviewFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_balanceOverviewFrame->sizePolicy().hasHeightForWidth());
        m_balanceOverviewFrame->setSizePolicy(sizePolicy);
        m_balanceOverviewFrame->setMinimumSize(QSize(200, 20));
        m_balanceOverviewFrame->setFrameShape(QFrame::NoFrame);
        m_balanceOverviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(m_balanceOverviewFrame);

        m_miningOverviewFrame = new WalletGUI::MiningOverviewFrame(OverviewFrame);
        m_miningOverviewFrame->setObjectName(QStringLiteral("m_miningOverviewFrame"));
        sizePolicy.setHeightForWidth(m_miningOverviewFrame->sizePolicy().hasHeightForWidth());
        m_miningOverviewFrame->setSizePolicy(sizePolicy);
        m_miningOverviewFrame->setMinimumSize(QSize(200, 20));
        m_miningOverviewFrame->setFrameShape(QFrame::NoFrame);
        m_miningOverviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(m_miningOverviewFrame);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        m_recentTransactionsView = new QTableView(OverviewFrame);
        m_recentTransactionsView->setObjectName(QStringLiteral("m_recentTransactionsView"));
        m_recentTransactionsView->setEnabled(true);
        m_recentTransactionsView->setFocusPolicy(Qt::NoFocus);
        m_recentTransactionsView->setFrameShape(QFrame::NoFrame);
        m_recentTransactionsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_recentTransactionsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_recentTransactionsView->setAlternatingRowColors(true);
        m_recentTransactionsView->setSelectionMode(QAbstractItemView::NoSelection);
        m_recentTransactionsView->setSelectionBehavior(QAbstractItemView::SelectItems);
        m_recentTransactionsView->setTextElideMode(Qt::ElideMiddle);
        m_recentTransactionsView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_recentTransactionsView->setShowGrid(false);
        m_recentTransactionsView->setWordWrap(false);
        m_recentTransactionsView->setCornerButtonEnabled(false);
        m_recentTransactionsView->horizontalHeader()->setHighlightSections(false);
        m_recentTransactionsView->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(m_recentTransactionsView);

        horizontalSpacer_9 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(2, 1);

        retranslateUi(OverviewFrame);

        QMetaObject::connectSlotsByName(OverviewFrame);
    } // setupUi

    void retranslateUi(QFrame *OverviewFrame)
    {
        OverviewFrame->setWindowTitle(QApplication::translate("OverviewFrame", "Frame", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewFrame: public Ui_OverviewFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWFRAME_H
