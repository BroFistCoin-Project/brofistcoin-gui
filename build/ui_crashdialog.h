/********************************************************************************
** Form generated from reading UI file 'crashdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHDIALOG_H
#define UI_CRASHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CrashDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *reasonLabel;
    QSpacerItem *verticalSpacer;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CrashDialog)
    {
        if (CrashDialog->objectName().isEmpty())
            CrashDialog->setObjectName(QStringLiteral("CrashDialog"));
        CrashDialog->resize(348, 144);
        verticalLayout = new QVBoxLayout(CrashDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        reasonLabel = new QLabel(CrashDialog);
        reasonLabel->setObjectName(QStringLiteral("reasonLabel"));
        reasonLabel->setWordWrap(true);

        verticalLayout->addWidget(reasonLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        passwordLabel = new QLabel(CrashDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        verticalLayout->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(CrashDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(CrashDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Retry);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CrashDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CrashDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CrashDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CrashDialog);
    } // setupUi

    void retranslateUi(QDialog *CrashDialog)
    {
        reasonLabel->setText(QApplication::translate("CrashDialog", "Reason", 0));
        passwordLabel->setText(QApplication::translate("CrashDialog", "Password:", 0));
        Q_UNUSED(CrashDialog);
    } // retranslateUi

};

namespace Ui {
    class CrashDialog: public Ui_CrashDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHDIALOG_H
