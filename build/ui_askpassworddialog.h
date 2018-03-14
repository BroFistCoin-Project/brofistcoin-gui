/********************************************************************************
** Form generated from reading UI file 'askpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSWORDDIALOG_H
#define UI_ASKPASSWORDDIALOG_H

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

class Ui_AskPasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *userLabel;
    QLineEdit *userEdit;
    QLabel *label;
    QLineEdit *passwordEdit;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPasswordDialog)
    {
        if (AskPasswordDialog->objectName().isEmpty())
            AskPasswordDialog->setObjectName(QStringLiteral("AskPasswordDialog"));
        AskPasswordDialog->setWindowModality(Qt::WindowModal);
        AskPasswordDialog->resize(349, 177);
        AskPasswordDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AskPasswordDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        userLabel = new QLabel(AskPasswordDialog);
        userLabel->setObjectName(QStringLiteral("userLabel"));

        verticalLayout->addWidget(userLabel);

        userEdit = new QLineEdit(AskPasswordDialog);
        userEdit->setObjectName(QStringLiteral("userEdit"));

        verticalLayout->addWidget(userEdit);

        label = new QLabel(AskPasswordDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        passwordEdit = new QLineEdit(AskPasswordDialog);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordEdit);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(AskPasswordDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AskPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPasswordDialog, SLOT(reject()));
        QObject::connect(passwordEdit, SIGNAL(textChanged(QString)), AskPasswordDialog, SLOT(passwordChanged(QString)));
        QObject::connect(userEdit, SIGNAL(textChanged(QString)), AskPasswordDialog, SLOT(userChanged(QString)));

        QMetaObject::connectSlotsByName(AskPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPasswordDialog)
    {
        userLabel->setText(QApplication::translate("AskPasswordDialog", "User:", 0));
        label->setText(QApplication::translate("AskPasswordDialog", "Password:", 0));
        Q_UNUSED(AskPasswordDialog);
    } // retranslateUi

};

namespace Ui {
    class AskPasswordDialog: public Ui_AskPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSWORDDIALOG_H
