/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "okbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_aboutLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGUI::WalletOkButton *m_okButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(600, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(600, 390));
        AboutDialog->setMaximumSize(QSize(600, 390));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_aboutLabel = new QLabel(AboutDialog);
        m_aboutLabel->setObjectName(QStringLiteral("m_aboutLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_aboutLabel->sizePolicy().hasHeightForWidth());
        m_aboutLabel->setSizePolicy(sizePolicy1);
        m_aboutLabel->setTextFormat(Qt::RichText);
        m_aboutLabel->setWordWrap(true);
        m_aboutLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_aboutLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGUI::WalletOkButton(AboutDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Bytecoin", 0));
        m_aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Bytecoin GUI version %1-%2-%3</p><p>Bytecoin is the next generation anonymous cryptocurrency based on CryptoNote.</p><p>Copyright \302\251 2012-%4 The Bytecoin developers</p><p>This is free software.</p><p>Distributed under the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or any later version.</p><p>Distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details:</p><p><a href=\"https://www.gnu.org/licenses/lgpl.html\"><span style=\" text-decoration: underline; color:#0000ff;\">https://www.gnu.org/licenses/lgpl.html</span></a></p><p><a href=\"http://bytecoin.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://bytecoin.org/</span></a></p></body></html>", 0));
        m_okButton->setText(QApplication::translate("AboutDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
