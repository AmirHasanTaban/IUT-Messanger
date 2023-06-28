#include "messenger.h"
#include "ui_messenger.h"
#include "dialog_signin.h"
#include "dialog_login.h"
#include <QPixmap>
Messenger::Messenger(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Messenger)
{
    ui->setupUi(this);
    QPixmap pix("D:/Term2/AP/Project/Ap_Project/Project_AA/iut_logo.png");
    ui->label->setPixmap(pix);
    this->setFixedSize(500, 500);
}

Messenger::~Messenger()
{
    delete ui;
}


void Messenger::on_Signup_clicked()
{
    Dialog_Signin *d = new Dialog_Signin(this);
    connect(d, SIGNAL(errorsignup(QString)), this, SLOT(geterror(QString)));
    d->show();
}

void Messenger::geterror(QString str)
{
    ui->label_message->setText(str);
}


void Messenger::on_Login_clicked()
{
    Dialog_login *d = new Dialog_login(this);
    connect(d, SIGNAL(errorlogin(QString)), this, SLOT(geterror(QString)));
    d->show();
}

