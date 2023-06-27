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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SafheAsli
{
public:
    QAction *actionLog_out;
    QWidget *centralwidget;
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
        menuoptions->setTitle(QCoreApplication::translate("SafheAsli", "options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SafheAsli: public Ui_SafheAsli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEASLI_H
