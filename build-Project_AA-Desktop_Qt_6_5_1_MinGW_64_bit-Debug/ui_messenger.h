/********************************************************************************
** Form generated from reading UI file 'messenger.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messenger
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_message;
    QPushButton *Login;
    QPushButton *Signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Messenger)
    {
        if (Messenger->objectName().isEmpty())
            Messenger->setObjectName("Messenger");
        Messenger->resize(252, 324);
        centralwidget = new QWidget(Messenger);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_message = new QLabel(centralwidget);
        label_message->setObjectName("label_message");

        verticalLayout->addWidget(label_message);

        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");

        verticalLayout->addWidget(Login);

        Signup = new QPushButton(centralwidget);
        Signup->setObjectName("Signup");

        verticalLayout->addWidget(Signup);

        Messenger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Messenger);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 252, 26));
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
    } // retranslateUi

};

namespace Ui {
    class Messenger: public Ui_Messenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGER_H
