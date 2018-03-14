/********************************************************************************
** Form generated from reading UI file 'miningoverviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGOVERVIEWFRAME_H
#define UI_MININGOVERVIEWFRAME_H

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

class Ui_MiningOverviewFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *m_overviewHashRateLabel;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QLabel *m_overviewNetworkHashrateLabel;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_miningStateLabel;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *m_overviewNetworkDifficultyLabel;
    QLabel *m_miningStatusTextLabel_4;
    QLabel *m_overviewMiningIconLabel;

    void setupUi(QFrame *MiningOverviewFrame)
    {
        if (MiningOverviewFrame->objectName().isEmpty())
            MiningOverviewFrame->setObjectName(QStringLiteral("MiningOverviewFrame"));
        MiningOverviewFrame->resize(288, 163);
        MiningOverviewFrame->setFrameShape(QFrame::StyledPanel);
        MiningOverviewFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(MiningOverviewFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(MiningOverviewFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setIndent(0);

        gridLayout->addWidget(label_3, 5, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 2, 1, 6);

        m_overviewHashRateLabel = new QLabel(MiningOverviewFrame);
        m_overviewHashRateLabel->setObjectName(QStringLiteral("m_overviewHashRateLabel"));

        gridLayout->addWidget(m_overviewHashRateLabel, 5, 6, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 2, 1, 6);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        m_overviewNetworkHashrateLabel = new QLabel(MiningOverviewFrame);
        m_overviewNetworkHashrateLabel->setObjectName(QStringLiteral("m_overviewNetworkHashrateLabel"));

        gridLayout->addWidget(m_overviewNetworkHashrateLabel, 6, 6, 1, 1);

        label_5 = new QLabel(MiningOverviewFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setIndent(0);

        gridLayout->addWidget(label_5, 6, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 7, 3, 1);

        m_miningStateLabel = new QLabel(MiningOverviewFrame);
        m_miningStateLabel->setObjectName(QStringLiteral("m_miningStateLabel"));
        m_miningStateLabel->setIndent(0);

        gridLayout->addWidget(m_miningStateLabel, 4, 6, 1, 1);

        label_7 = new QLabel(MiningOverviewFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setIndent(0);

        gridLayout->addWidget(label_7, 7, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 3, 1, 1);

        m_overviewNetworkDifficultyLabel = new QLabel(MiningOverviewFrame);
        m_overviewNetworkDifficultyLabel->setObjectName(QStringLiteral("m_overviewNetworkDifficultyLabel"));

        gridLayout->addWidget(m_overviewNetworkDifficultyLabel, 7, 6, 1, 1);

        m_miningStatusTextLabel_4 = new QLabel(MiningOverviewFrame);
        m_miningStatusTextLabel_4->setObjectName(QStringLiteral("m_miningStatusTextLabel_4"));
        m_miningStatusTextLabel_4->setIndent(0);

        gridLayout->addWidget(m_miningStatusTextLabel_4, 4, 4, 1, 1);

        m_overviewMiningIconLabel = new QLabel(MiningOverviewFrame);
        m_overviewMiningIconLabel->setObjectName(QStringLiteral("m_overviewMiningIconLabel"));
        m_overviewMiningIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/miner-big")));

        gridLayout->addWidget(m_overviewMiningIconLabel, 2, 2, 6, 1);


        retranslateUi(MiningOverviewFrame);

        QMetaObject::connectSlotsByName(MiningOverviewFrame);
    } // setupUi

    void retranslateUi(QFrame *MiningOverviewFrame)
    {
        MiningOverviewFrame->setWindowTitle(QApplication::translate("MiningOverviewFrame", "Frame", 0));
        label_3->setText(QApplication::translate("MiningOverviewFrame", "Your hashrate", 0));
        m_overviewHashRateLabel->setText(QApplication::translate("MiningOverviewFrame", "TextLabel", 0));
        m_overviewNetworkHashrateLabel->setText(QApplication::translate("MiningOverviewFrame", "TextLabel", 0));
        label_5->setText(QApplication::translate("MiningOverviewFrame", "Network hashrate", 0));
        m_miningStateLabel->setText(QApplication::translate("MiningOverviewFrame", "OFF", 0));
        label_7->setText(QApplication::translate("MiningOverviewFrame", "Difficulty", 0));
        m_overviewNetworkDifficultyLabel->setText(QApplication::translate("MiningOverviewFrame", "TextLabel", 0));
        m_miningStatusTextLabel_4->setText(QApplication::translate("MiningOverviewFrame", "Mining status", 0));
        m_overviewMiningIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MiningOverviewFrame: public Ui_MiningOverviewFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGOVERVIEWFRAME_H
