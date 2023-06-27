/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_login)
    {
        if (Dialog_login->objectName().isEmpty())
            Dialog_login->setObjectName("Dialog_login");
        Dialog_login->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dialog_login);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog_login);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_Username = new QLineEdit(Dialog_login);
        lineEdit_Username->setObjectName("lineEdit_Username");

        verticalLayout->addWidget(lineEdit_Username);

        label_2 = new QLabel(Dialog_login);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_Password = new QLineEdit(Dialog_login);
        lineEdit_Password->setObjectName("lineEdit_Password");

        verticalLayout->addWidget(lineEdit_Password);

        buttonBox = new QDialogButtonBox(Dialog_login);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog_login);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_login, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_login, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_login)
    {
        Dialog_login->setWindowTitle(QCoreApplication::translate("Dialog_login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_login", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_login", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_login: public Ui_Dialog_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
