/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *questionLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName(QStringLiteral("QuestionDialog"));
        QuestionDialog->resize(481, 116);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuestionDialog->sizePolicy().hasHeightForWidth());
        QuestionDialog->setSizePolicy(sizePolicy);
        QuestionDialog->setMinimumSize(QSize(481, 116));
        QuestionDialog->setMaximumSize(QSize(481, 130));
        verticalLayout = new QVBoxLayout(QuestionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        questionLabel = new QLabel(QuestionDialog);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));

        verticalLayout->addWidget(questionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(QuestionDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(QuestionDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(QuestionDialog);
        QObject::connect(okButton, SIGNAL(clicked()), QuestionDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), QuestionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QString());
        questionLabel->setText(QString());
        cancelButton->setText(QApplication::translate("QuestionDialog", "No", 0));
        okButton->setText(QApplication::translate("QuestionDialog", "Yes", 0));
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
