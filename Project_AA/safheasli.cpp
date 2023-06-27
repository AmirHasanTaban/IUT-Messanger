#include "safheasli.h"
#include "ui_safheasli.h"
#include "dialog_login.h"
#include "user.h"
#include <QDebug>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

SafheAsli::SafheAsli(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SafheAsli)
{
    ui->setupUi(this);
    User person();

    Dialog_login *l = new Dialog_login();
    connect(l, SIGNAL(SendProfile(QString,QString, QString)), this, SLOT(GetProfile(QString,QString, QString)));
}

SafheAsli::~SafheAsli()
{
    delete ui;
}

void SafheAsli::GetProfile(QString, QString, QString)
{

}

void SafheAsli::on_actionLog_out_triggered()
{

}

