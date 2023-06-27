#include "messenger.h"
#include "ui_messenger.h"
#include "dialog_signin.h"
#include "dialog_login.h"

Messenger::Messenger(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Messenger)
{
    ui->setupUi(this);
}

Messenger::~Messenger()
{
    delete ui;
}


void Messenger::on_Signup_clicked()
{
    Dialog_Signin *d = new Dialog_Signin(this);
    d->show();
}


void Messenger::on_Login_clicked()
{
    Dialog_login *d = new Dialog_login(this);
    d->show();
}

