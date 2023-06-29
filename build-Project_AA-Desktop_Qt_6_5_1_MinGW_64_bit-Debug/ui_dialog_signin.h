/********************************************************************************
** Form generated from reading UI file 'dialog_signin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SIGNIN_H
#define UI_DIALOG_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Signin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *LineEdit_UserName;
    QLabel *label_2;
    QLineEdit *LineEdit_Password;
    QLabel *label_3;
    QLineEdit *LineEdit_FirstName;
    QLabel *label_4;
    QLineEdit *LineEdit_LastName;
    QDialogButtonBox *buttonBox_Signin;

    void setupUi(QDialog *Dialog_Signin)
    {
        if (Dialog_Signin->objectName().isEmpty())
            Dialog_Signin->setObjectName("Dialog_Signin");
        Dialog_Signin->resize(331, 388);
        verticalLayout = new QVBoxLayout(Dialog_Signin);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog_Signin);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label);

        LineEdit_UserName = new QLineEdit(Dialog_Signin);
        LineEdit_UserName->setObjectName("LineEdit_UserName");
        LineEdit_UserName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(LineEdit_UserName);

        label_2 = new QLabel(Dialog_Signin);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_2);

        LineEdit_Password = new QLineEdit(Dialog_Signin);
        LineEdit_Password->setObjectName("LineEdit_Password");
        LineEdit_Password->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(LineEdit_Password);

        label_3 = new QLabel(Dialog_Signin);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_3);

        LineEdit_FirstName = new QLineEdit(Dialog_Signin);
        LineEdit_FirstName->setObjectName("LineEdit_FirstName");
        LineEdit_FirstName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(LineEdit_FirstName);

        label_4 = new QLabel(Dialog_Signin);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_4);

        LineEdit_LastName = new QLineEdit(Dialog_Signin);
        LineEdit_LastName->setObjectName("LineEdit_LastName");
        LineEdit_LastName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(LineEdit_LastName);

        buttonBox_Signin = new QDialogButtonBox(Dialog_Signin);
        buttonBox_Signin->setObjectName("buttonBox_Signin");
        buttonBox_Signin->setOrientation(Qt::Horizontal);
        buttonBox_Signin->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox_Signin);


        retranslateUi(Dialog_Signin);
        QObject::connect(buttonBox_Signin, &QDialogButtonBox::accepted, Dialog_Signin, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox_Signin, &QDialogButtonBox::rejected, Dialog_Signin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_Signin);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Signin)
    {
        Dialog_Signin->setWindowTitle(QCoreApplication::translate("Dialog_Signin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Signin", "username", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_Signin", "password", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_Signin", "first name", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_Signin", "last name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Signin: public Ui_Dialog_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SIGNIN_H
