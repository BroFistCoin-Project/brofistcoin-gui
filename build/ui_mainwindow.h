/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MiningFrame.h"
#include "addressbookframe.h"
#include "logframe.h"
#include "overviewframe.h"
#include "progressbar.h"
#include "sendframe.h"
#include "statusbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_exitAction;
    QAction *m_createWalletAction;
    QAction *m_openWalletAction;
    QAction *m_aboutBytecoinAction;
    QAction *m_aboutQtAction;
    QAction *m_remoteWalletAction;
    QAction *m_communityForumAction;
    QAction *m_encryptWalletAction;
    QAction *m_changePasswordAction;
    QAction *m_openDataFolderAction;
    QAction *m_importKeysAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *m_headerFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_logoLabel;
    QSpacerItem *horizontalSpacer_5;
    QFrame *m_walletFrame;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *m_addressLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *m_balanceIconLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_balanceTextLabel;
    QLabel *m_balanceLabel;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QFrame *m_toolFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *m_overviewButton;
    QPushButton *m_sendButton;
    QPushButton *m_addressBookButton;
    QPushButton *m_miningButton;
    QPushButton *m_logButton;
    QSpacerItem *verticalSpacer;
    WalletGUI::OverviewFrame *m_overviewFrame;
    WalletGUI::SendFrame *m_sendFrame;
    WalletGUI::MiningFrame *m_miningFrame;
    WalletGUI::AddressBookFrame *m_addressBookFrame;
    WalletGUI::LogFrame *m_logFrame;
    WalletGUI::WalletProgressBar *m_syncProgress;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    WalletGUI::WalletStatusBar *statusBar;
    QButtonGroup *m_toolButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1273, 824);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 540));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bytecoin"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QStringLiteral("m_exitAction"));
        m_exitAction->setCheckable(false);
        m_exitAction->setEnabled(true);
        m_createWalletAction = new QAction(MainWindow);
        m_createWalletAction->setObjectName(QStringLiteral("m_createWalletAction"));
        m_createWalletAction->setEnabled(true);
        m_openWalletAction = new QAction(MainWindow);
        m_openWalletAction->setObjectName(QStringLiteral("m_openWalletAction"));
        m_openWalletAction->setEnabled(true);
        m_aboutBytecoinAction = new QAction(MainWindow);
        m_aboutBytecoinAction->setObjectName(QStringLiteral("m_aboutBytecoinAction"));
        m_aboutBytecoinAction->setEnabled(true);
        m_aboutQtAction = new QAction(MainWindow);
        m_aboutQtAction->setObjectName(QStringLiteral("m_aboutQtAction"));
        m_aboutQtAction->setEnabled(true);
        m_remoteWalletAction = new QAction(MainWindow);
        m_remoteWalletAction->setObjectName(QStringLiteral("m_remoteWalletAction"));
        m_remoteWalletAction->setEnabled(true);
        m_communityForumAction = new QAction(MainWindow);
        m_communityForumAction->setObjectName(QStringLiteral("m_communityForumAction"));
        m_encryptWalletAction = new QAction(MainWindow);
        m_encryptWalletAction->setObjectName(QStringLiteral("m_encryptWalletAction"));
        m_changePasswordAction = new QAction(MainWindow);
        m_changePasswordAction->setObjectName(QStringLiteral("m_changePasswordAction"));
        m_openDataFolderAction = new QAction(MainWindow);
        m_openDataFolderAction->setObjectName(QStringLiteral("m_openDataFolderAction"));
        m_importKeysAction = new QAction(MainWindow);
        m_importKeysAction->setObjectName(QStringLiteral("m_importKeysAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_headerFrame = new QFrame(centralwidget);
        m_headerFrame->setObjectName(QStringLiteral("m_headerFrame"));
        m_headerFrame->setMinimumSize(QSize(0, 116));
        m_headerFrame->setMaximumSize(QSize(16777215, 116));
        m_headerFrame->setFrameShape(QFrame::NoFrame);
        m_headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(m_headerFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 25, 0);
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        m_logoLabel = new QLabel(m_headerFrame);
        m_logoLabel->setObjectName(QStringLiteral("m_logoLabel"));
        m_logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/light/logo")));

        horizontalLayout_3->addWidget(m_logoLabel);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        m_walletFrame = new QFrame(m_headerFrame);
        m_walletFrame->setObjectName(QStringLiteral("m_walletFrame"));
        m_walletFrame->setFrameShape(QFrame::NoFrame);
        m_walletFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m_walletFrame);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        m_addressLabel = new QLabel(m_walletFrame);
        m_addressLabel->setObjectName(QStringLiteral("m_addressLabel"));
        sizePolicy.setHeightForWidth(m_addressLabel->sizePolicy().hasHeightForWidth());
        m_addressLabel->setSizePolicy(sizePolicy);
        m_addressLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_addressLabel->setIndent(0);

        verticalLayout_5->addWidget(m_addressLabel);

        label = new QLabel(m_walletFrame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(m_walletFrame);

        horizontalSpacer_3 = new QSpacerItem(34, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalSpacer_8 = new QSpacerItem(34, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        m_balanceIconLabel = new QLabel(m_headerFrame);
        m_balanceIconLabel->setObjectName(QStringLiteral("m_balanceIconLabel"));
        m_balanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/total_balance")));

        horizontalLayout_3->addWidget(m_balanceIconLabel);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_balanceTextLabel = new QLabel(m_headerFrame);
        m_balanceTextLabel->setObjectName(QStringLiteral("m_balanceTextLabel"));

        verticalLayout_4->addWidget(m_balanceTextLabel);

        m_balanceLabel = new QLabel(m_headerFrame);
        m_balanceLabel->setObjectName(QStringLiteral("m_balanceLabel"));
        m_balanceLabel->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(m_balanceLabel);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));

        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(m_headerFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_toolFrame = new QFrame(centralwidget);
        m_toolFrame->setObjectName(QStringLiteral("m_toolFrame"));
        m_toolFrame->setFrameShape(QFrame::NoFrame);
        m_toolFrame->setFrameShadow(QFrame::Plain);
        m_toolFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(m_toolFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup = new QButtonGroup(MainWindow);
        m_toolButtonGroup->setObjectName(QStringLiteral("m_toolButtonGroup"));
        m_toolButtonGroup->setExclusive(true);
        m_toolButtonGroup->addButton(m_overviewButton);
        m_overviewButton->setObjectName(QStringLiteral("m_overviewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_overviewButton->sizePolicy().hasHeightForWidth());
        m_overviewButton->setSizePolicy(sizePolicy1);
        m_overviewButton->setMinimumSize(QSize(90, 50));
        m_overviewButton->setMaximumSize(QSize(16777215, 50));
        m_overviewButton->setFocusPolicy(Qt::NoFocus);
        m_overviewButton->setCheckable(true);
        m_overviewButton->setFlat(true);

        verticalLayout->addWidget(m_overviewButton);

        m_sendButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_sendButton);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        sizePolicy1.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy1);
        m_sendButton->setMinimumSize(QSize(90, 50));
        m_sendButton->setMaximumSize(QSize(16777215, 50));
        m_sendButton->setFocusPolicy(Qt::NoFocus);
        m_sendButton->setCheckable(true);
        m_sendButton->setFlat(true);

        verticalLayout->addWidget(m_sendButton);

        m_addressBookButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_addressBookButton);
        m_addressBookButton->setObjectName(QStringLiteral("m_addressBookButton"));
        m_addressBookButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_addressBookButton->sizePolicy().hasHeightForWidth());
        m_addressBookButton->setSizePolicy(sizePolicy1);
        m_addressBookButton->setMinimumSize(QSize(90, 50));
        m_addressBookButton->setMaximumSize(QSize(16777215, 50));
        m_addressBookButton->setFocusPolicy(Qt::NoFocus);
        m_addressBookButton->setCheckable(true);
        m_addressBookButton->setFlat(true);

        verticalLayout->addWidget(m_addressBookButton);

        m_miningButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_miningButton);
        m_miningButton->setObjectName(QStringLiteral("m_miningButton"));
        m_miningButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_miningButton->sizePolicy().hasHeightForWidth());
        m_miningButton->setSizePolicy(sizePolicy1);
        m_miningButton->setMinimumSize(QSize(90, 50));
        m_miningButton->setMaximumSize(QSize(16777215, 50));
        m_miningButton->setFocusPolicy(Qt::NoFocus);
        m_miningButton->setCheckable(true);
        m_miningButton->setFlat(true);

        verticalLayout->addWidget(m_miningButton);

        m_logButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_logButton);
        m_logButton->setObjectName(QStringLiteral("m_logButton"));
        m_logButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_logButton->sizePolicy().hasHeightForWidth());
        m_logButton->setSizePolicy(sizePolicy1);
        m_logButton->setMinimumSize(QSize(90, 50));
        m_logButton->setMaximumSize(QSize(16777215, 50));
        m_logButton->setFocusPolicy(Qt::NoFocus);
        m_logButton->setCheckable(true);
        m_logButton->setFlat(true);

        verticalLayout->addWidget(m_logButton);

        verticalSpacer = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(m_toolFrame);

        m_overviewFrame = new WalletGUI::OverviewFrame(centralwidget);
        m_overviewFrame->setObjectName(QStringLiteral("m_overviewFrame"));
        m_overviewFrame->setFrameShape(QFrame::NoFrame);
        m_overviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_overviewFrame);

        m_sendFrame = new WalletGUI::SendFrame(centralwidget);
        m_sendFrame->setObjectName(QStringLiteral("m_sendFrame"));
        m_sendFrame->setFrameShape(QFrame::NoFrame);
        m_sendFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_sendFrame);

        m_miningFrame = new WalletGUI::MiningFrame(centralwidget);
        m_miningFrame->setObjectName(QStringLiteral("m_miningFrame"));
        m_miningFrame->setFrameShape(QFrame::NoFrame);
        m_miningFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_miningFrame);

        m_addressBookFrame = new WalletGUI::AddressBookFrame(centralwidget);
        m_addressBookFrame->setObjectName(QStringLiteral("m_addressBookFrame"));
        m_addressBookFrame->setFrameShape(QFrame::NoFrame);
        m_addressBookFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_addressBookFrame);

        m_logFrame = new WalletGUI::LogFrame(centralwidget);
        m_logFrame->setObjectName(QStringLiteral("m_logFrame"));
        m_logFrame->setFrameShape(QFrame::NoFrame);
        m_logFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_logFrame);


        verticalLayout_2->addLayout(horizontalLayout);

        m_syncProgress = new WalletGUI::WalletProgressBar(centralwidget);
        m_syncProgress->setObjectName(QStringLiteral("m_syncProgress"));
        m_syncProgress->setMaximum(0);
        m_syncProgress->setValue(0);
        m_syncProgress->setTextVisible(false);

        verticalLayout_2->addWidget(m_syncProgress);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1273, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusBar = new WalletGUI::WalletStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_createWalletAction);
        menuFile->addAction(m_importKeysAction);
        menuFile->addAction(m_openWalletAction);
        menuFile->addAction(m_remoteWalletAction);
        menuFile->addAction(m_changePasswordAction);
        menuFile->addAction(m_openDataFolderAction);
        menuFile->addSeparator();
        menuFile->addAction(m_exitAction);
        menuHelp->addAction(m_communityForumAction);
        menuHelp->addAction(m_aboutBytecoinAction);
        menuHelp->addAction(m_aboutQtAction);

        retranslateUi(MainWindow);
        QObject::connect(m_createWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createWallet()));
        QObject::connect(m_aboutQtAction, SIGNAL(triggered()), MainWindow, SLOT(aboutQt()));
        QObject::connect(m_aboutBytecoinAction, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(m_overviewButton, SIGNAL(toggled(bool)), m_overviewFrame, SLOT(setVisible(bool)));
        QObject::connect(m_sendButton, SIGNAL(toggled(bool)), m_sendFrame, SLOT(setVisible(bool)));
        QObject::connect(m_miningButton, SIGNAL(toggled(bool)), m_miningFrame, SLOT(setVisible(bool)));
        QObject::connect(m_addressBookButton, SIGNAL(toggled(bool)), m_addressBookFrame, SLOT(setVisible(bool)));
        QObject::connect(m_changePasswordAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_openWalletAction, SIGNAL(triggered()), MainWindow, SLOT(openWallet()));
        QObject::connect(m_remoteWalletAction, SIGNAL(triggered()), MainWindow, SLOT(remoteWallet()));
        QObject::connect(m_communityForumAction, SIGNAL(triggered()), MainWindow, SLOT(communityForumTriggered()));
        QObject::connect(m_overviewFrame, SIGNAL(copiedToClipboardSignal()), MainWindow, SLOT(copiedToClipboard()));
        QObject::connect(m_openDataFolderAction, SIGNAL(triggered()), MainWindow, SLOT(openDataFolder()));
        QObject::connect(m_logButton, SIGNAL(toggled(bool)), m_logFrame, SLOT(setVisible(bool)));
        QObject::connect(m_importKeysAction, SIGNAL(triggered()), MainWindow, SLOT(importKeys()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        m_exitAction->setText(QApplication::translate("MainWindow", "E&xit", 0));
        m_exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        m_createWalletAction->setText(QApplication::translate("MainWindow", "&Create new wallet", 0));
        m_openWalletAction->setText(QApplication::translate("MainWindow", "&Open wallet", 0));
        m_aboutBytecoinAction->setText(QApplication::translate("MainWindow", "&About Bytecoin", 0));
        m_aboutQtAction->setText(QApplication::translate("MainWindow", "About &Qt", 0));
        m_remoteWalletAction->setText(QApplication::translate("MainWindow", "Connect to &remote daemon", 0));
        m_communityForumAction->setText(QApplication::translate("MainWindow", "&Official site", 0));
        m_encryptWalletAction->setText(QApplication::translate("MainWindow", "&Encrypt wallet", 0));
        m_changePasswordAction->setText(QApplication::translate("MainWindow", "C&hange password", 0));
        m_openDataFolderAction->setText(QApplication::translate("MainWindow", "Open data &folder", 0));
        m_importKeysAction->setText(QApplication::translate("MainWindow", "Create wallet from keys", 0));
        m_logoLabel->setText(QString());
        m_addressLabel->setText(QApplication::translate("MainWindow", "address", 0));
        label->setText(QString());
        m_balanceIconLabel->setText(QString());
        m_balanceTextLabel->setText(QApplication::translate("MainWindow", "Total balance", 0));
#ifndef QT_NO_TOOLTIP
        m_balanceLabel->setToolTip(QApplication::translate("MainWindow", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_balanceLabel->setText(QApplication::translate("MainWindow", "0.00", 0));
        m_overviewButton->setText(QApplication::translate("MainWindow", "OVERVIEW", 0));
        m_sendButton->setText(QApplication::translate("MainWindow", "SEND", 0));
        m_addressBookButton->setText(QApplication::translate("MainWindow", "CONTACTS", 0));
        m_miningButton->setText(QApplication::translate("MainWindow", "MINING", 0));
        m_logButton->setText(QApplication::translate("MainWindow", "CONSOLE", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&Wallet", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
