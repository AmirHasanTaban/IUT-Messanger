/********************************************************************************
** Form generated from reading UI file 'dialog_error.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ERROR_H
#define UI_DIALOG_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_error
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Dialog_error)
    {
        if (Dialog_error->objectName().isEmpty())
            Dialog_error->setObjectName("Dialog_error");
        Dialog_error->resize(347, 79);
        verticalLayout = new QVBoxLayout(Dialog_error);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog_error);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        retranslateUi(Dialog_error);

        QMetaObject::connectSlotsByName(Dialog_error);
    } // setupUi

    void retranslateUi(QDialog *Dialog_error)
    {
        Dialog_error->setWindowTitle(QCoreApplication::translate("Dialog_error", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_error", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_error: public Ui_Dialog_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ERROR_H
