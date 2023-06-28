/********************************************************************************
** Form generated from reading UI file 'messenger.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGER_H
#define UI_MESSENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messenger
{
public:
    QWidget *centralwidget;
    QLabel *label_message;
    QPushButton *Login;
    QPushButton *Signup;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Messenger)
    {
        if (Messenger->objectName().isEmpty())
            Messenger->setObjectName("Messenger");
        Messenger->resize(500, 500);
        Messenger->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:1, x2:1, y2:1, stop:0.426136 rgba(255, 255, 255, 255), stop:0.517045 rgba(234, 255, 255, 255));"));
        centralwidget = new QWidget(Messenger);
        centralwidget->setObjectName("centralwidget");
        label_message = new QLabel(centralwidget);
        label_message->setObjectName("label_message");
        label_message->setGeometry(QRect(140, 420, 220, 25));
        label_message->setFrameShape(QFrame::Panel);
        label_message->setFrameShadow(QFrame::Sunken);
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(165, 300, 170, 30));
        Signup = new QPushButton(centralwidget);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(165, 350, 170, 30));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(165, 20, 170, 170));
        label->setPixmap(QPixmap(QString::fromUtf8("iut_logo.png")));
        label->setScaledContents(true);
        Messenger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Messenger);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 19));
        Messenger->setMenuBar(menubar);
        statusbar = new QStatusBar(Messenger);
        statusbar->setObjectName("statusbar");
        Messenger->setStatusBar(statusbar);

        retranslateUi(Messenger);

        QMetaObject::connectSlotsByName(Messenger);
    } // setupUi

    void retranslateUi(QMainWindow *Messenger)
    {
        Messenger->setWindowTitle(QCoreApplication::translate("Messenger", "Messenger", nullptr));
        label_message->setText(QString());
        Login->setText(QCoreApplication::translate("Messenger", "Log in", nullptr));
        Signup->setText(QCoreApplication::translate("Messenger", "Sign up", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Messenger: public Ui_Messenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGER_H
