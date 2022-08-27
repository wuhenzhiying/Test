/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *centralwidget;
    QPushButton *sendBtn;
    QTextEdit *megs;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *username;
    QPushButton *bindBtn;
    QLineEdit *meg;
    QLineEdit *username_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(372, 333);
        centralwidget = new QWidget(Interface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sendBtn = new QPushButton(centralwidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(280, 270, 61, 24));
        megs = new QTextEdit(centralwidget);
        megs->setObjectName(QString::fromUtf8("megs"));
        megs->setGeometry(QRect(30, 60, 311, 191));
        megs->setReadOnly(true);
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(170, 10, 101, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        username = new QLineEdit(horizontalLayoutWidget_4);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(username);

        bindBtn = new QPushButton(centralwidget);
        bindBtn->setObjectName(QString::fromUtf8("bindBtn"));
        bindBtn->setGeometry(QRect(280, 20, 61, 24));
        meg = new QLineEdit(centralwidget);
        meg->setObjectName(QString::fromUtf8("meg"));
        meg->setGeometry(QRect(30, 270, 241, 21));
        meg->setMinimumSize(QSize(0, 0));
        username_2 = new QLineEdit(centralwidget);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        username_2->setGeometry(QRect(30, 20, 100, 21));
        username_2->setMinimumSize(QSize(100, 0));
        username_2->setMaximumSize(QSize(70, 16777215));
        Interface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Interface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 372, 22));
        Interface->setMenuBar(menubar);
        statusbar = new QStatusBar(Interface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Interface->setStatusBar(statusbar);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Interface", nullptr));
        sendBtn->setText(QApplication::translate("Interface", "\345\217\221\351\200\201", nullptr));
        username->setPlaceholderText(QApplication::translate("Interface", "your name", nullptr));
        bindBtn->setText(QApplication::translate("Interface", "\347\273\221\345\256\232", nullptr));
        meg->setPlaceholderText(QApplication::translate("Interface", "Message", nullptr));
        username_2->setPlaceholderText(QApplication::translate("Interface", "To ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
