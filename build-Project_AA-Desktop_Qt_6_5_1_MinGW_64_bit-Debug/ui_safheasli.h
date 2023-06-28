/********************************************************************************
** Form generated from reading UI file 'safheasli.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFHEASLI_H
#define UI_SAFHEASLI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SafheAsli
{
public:
    QAction *actionLog_out;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextBrowser *textBrowser_asli;
    QPushButton *pushButton;
    QLineEdit *lineEdit_asli;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menuoptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SafheAsli)
    {
        if (SafheAsli->objectName().isEmpty())
            SafheAsli->setObjectName("SafheAsli");
        SafheAsli->resize(800, 600);
        actionLog_out = new QAction(SafheAsli);
        actionLog_out->setObjectName("actionLog_out");
        centralwidget = new QWidget(SafheAsli);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 200, 600));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 0, 600, 600));
        page = new QWidget();
        page->setObjectName("page");
        textBrowser_asli = new QTextBrowser(page);
        textBrowser_asli->setObjectName("textBrowser_asli");
        textBrowser_asli->setGeometry(QRect(130, 60, 411, 391));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(522, 488, 71, 41));
        lineEdit_asli = new QLineEdit(page);
        lineEdit_asli->setObjectName("lineEdit_asli");
        lineEdit_asli->setGeometry(QRect(230, 490, 281, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        SafheAsli->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SafheAsli);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuoptions = new QMenu(menubar);
        menuoptions->setObjectName("menuoptions");
        SafheAsli->setMenuBar(menubar);
        statusbar = new QStatusBar(SafheAsli);
        statusbar->setObjectName("statusbar");
        SafheAsli->setStatusBar(statusbar);

        menubar->addAction(menuoptions->menuAction());
        menuoptions->addAction(actionLog_out);

        retranslateUi(SafheAsli);

        QMetaObject::connectSlotsByName(SafheAsli);
    } // setupUi

    void retranslateUi(QMainWindow *SafheAsli)
    {
        SafheAsli->setWindowTitle(QCoreApplication::translate("SafheAsli", "MainWindow", nullptr));
        actionLog_out->setText(QCoreApplication::translate("SafheAsli", "Log out", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SafheAsli", "Mammad", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SafheAsli", "Javadi", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        textBrowser_asli->setHtml(QCoreApplication::translate("SafheAsli", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hi</p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hi</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("SafheAsli", "Send", nullptr));
        menuoptions->setTitle(QCoreApplication::translate("SafheAsli", "options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SafheAsli: public Ui_SafheAsli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEASLI_H
