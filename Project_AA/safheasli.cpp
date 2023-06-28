#include "safheasli.h"
#include "ui_safheasli.h"
#include "dialog_login.h"
// #include "user.h"
#include <QDebug>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QListWidgetItem>
#include <QPixmap>

QJsonObject logout1(QString URlAcc)
{
    QUrl url(URlAcc);

    QNetworkAccessManager Manager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = Manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QString responsem;
    QString responsec;
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();
}

void SafheAsli::setName(QJsonObject Nam)
{
    json = Nam;

}

SafheAsli::SafheAsli(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SafheAsli)
{
    ui->setupUi(this);
    QPixmap pix(":/source/send_logo.png");
    ui->pushButton->setIcon(pix);
    QPixmap pix_logout(":/source/logout_icon.png");
    ui->actionLog_out->setIcon(pix_logout);
    ui->listWidget->addItem(QString("HI"));

}

SafheAsli::~SafheAsli()
{
    delete ui;
}

void SafheAsli::on_actionLog_out_triggered()
{
    QString name11 = json["Name"].toString();
    QString pass11 = json["Password"].toString();
    qDebug() << json;
    QString url = "http://api.barafardayebehtar.ml:8080/logout?username=" + name11 + "&password=" + pass11;
    QJsonObject response = logout1(url);
    close();
}


void SafheAsli::on_pushButton_clicked()
{
    QString str = ui->lineEdit_asli->text();
    str.append("\n");
    QString message = QString("<span style=\"color: red;\">");
    message.append(str);
    message.append(QString("</span><br>"));
    ui->textBrowser_asli->append(message);

    ui->lineEdit_asli->clear();
}


void SafheAsli::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if(item->text()==QString("Mammad")){
        ui->textBrowser_asli->setText(QString("Hello Buddy!\nHow are you?\nWhat's up?\n"));
    }
    else if(item->text()==QString("Javadi")){
        ui->textBrowser_asli->setText(QString("Legends never die!\nDid you know that?!\n"));
    }
    else{

        ui->textBrowser_asli->clear();
    }
}

