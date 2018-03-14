/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *currPasswordLabel;
    QLineEdit *currPasswordEdit;
    QLabel *label;
    QLineEdit *newPasswordEdit;
    QLabel *label_2;
    QLineEdit *confirmPasswordEdit;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QStringLiteral("ChangePasswordDialog"));
        ChangePasswordDialog->resize(413, 261);
        verticalLayout = new QVBoxLayout(ChangePasswordDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        currPasswordLabel = new QLabel(ChangePasswordDialog);
        currPasswordLabel->setObjectName(QStringLiteral("currPasswordLabel"));

        verticalLayout->addWidget(currPasswordLabel);

        currPasswordEdit = new QLineEdit(ChangePasswordDialog);
        currPasswordEdit->setObjectName(QStringLiteral("currPasswordEdit"));
        currPasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(currPasswordEdit);

        label = new QLabel(ChangePasswordDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        newPasswordEdit = new QLineEdit(ChangePasswordDialog);
        newPasswordEdit->setObjectName(QStringLiteral("newPasswordEdit"));
        newPasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(newPasswordEdit);

        label_2 = new QLabel(ChangePasswordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        confirmPasswordEdit = new QLineEdit(ChangePasswordDialog);
        confirmPasswordEdit->setObjectName(QStringLiteral("confirmPasswordEdit"));
        confirmPasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(confirmPasswordEdit);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(ChangePasswordDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangePasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangePasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangePasswordDialog, SLOT(reject()));
        QObject::connect(newPasswordEdit, SIGNAL(textChanged(QString)), ChangePasswordDialog, SLOT(passwordChanged(QString)));
        QObject::connect(confirmPasswordEdit, SIGNAL(textChanged(QString)), ChangePasswordDialog, SLOT(confirmationChanged(QString)));

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        currPasswordLabel->setText(QApplication::translate("ChangePasswordDialog", "Current password:", 0));
        label->setText(QApplication::translate("ChangePasswordDialog", "New password:", 0));
        label_2->setText(QApplication::translate("ChangePasswordDialog", "Confirm password:", 0));
        Q_UNUSED(ChangePasswordDialog);
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
