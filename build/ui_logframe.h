/********************************************************************************
** Form generated from reading UI file 'logframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFRAME_H
#define UI_LOGFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyButton;

    void setupUi(QFrame *LogFrame)
    {
        if (LogFrame->objectName().isEmpty())
            LogFrame->setObjectName(QStringLiteral("LogFrame"));
        LogFrame->resize(619, 426);
        LogFrame->setFrameShape(QFrame::StyledPanel);
        LogFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(LogFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(LogFrame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        copyButton = new QPushButton(LogFrame);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        horizontalLayout->addWidget(copyButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LogFrame);
        QObject::connect(copyButton, SIGNAL(clicked()), LogFrame, SLOT(copyToClipboard()));

        QMetaObject::connectSlotsByName(LogFrame);
    } // setupUi

    void retranslateUi(QFrame *LogFrame)
    {
        LogFrame->setWindowTitle(QApplication::translate("LogFrame", "Frame", 0));
        copyButton->setText(QApplication::translate("LogFrame", "Copy to clipboard", 0));
    } // retranslateUi

};

namespace Ui {
    class LogFrame: public Ui_LogFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFRAME_H
