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

QJsonObject getuserlist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
        qDebug() << response;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject getgrouplist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
        qDebug() << response;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject getchannellist(QString url1) {
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url1)));

    QEventLoop eventLoop;
    QObject::connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    QJsonObject response;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        response = o;
        qDebug() << response;
    } else {
        qDebug() << "Error: " << reply->errorString();
        return QJsonObject();
    }
    return response;
}

QJsonObject SafheAsli::send_request(QString URlAcc)
{
    QUrl url(URlAcc);

    QNetworkAccessManager Manager;
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = Manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QJsonObject jj;
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray b = reply->readAll();
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        jj = o;
    }
    else
    {
        qDebug() << "Error:" << reply->errorString();
    }

    reply->deleteLater();

    return jj;
}


void logout1(QString URlAcc)
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

QString ur1;
void SafheAsli::setName(QJsonObject Nam)
{
    json = Nam;
    ur1 = json["token"].toString();
    QString uj = "http://api.barafardayebehtar.ml:8080/getuserlist?token=" + ur1;
    QString ug = "http://api.barafardayebehtar.ml:8080/getchannellist?token=" + ur1;
    QString uc = "http://api.barafardayebehtar.ml:8080/getgrouplist?token=" + ur1;
    QJsonObject ju =getuserlist(uj);
    QJsonObject jg =getgrouplist(ug);
    QJsonObject jc =getchannellist(uc);

    qDebug () << ju;

}





SafheAsli::SafheAsli(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SafheAsli)
{
    ui->setupUi(this);
    setFixedSize(800, 600);
    QPixmap pix1(":/source/send_logo.png");
    ui->pushButton->setIcon(pix1);
    QPixmap pix2(":/source/logout_icon.png");
    ui->actionLog_out->setIcon(pix2);
    QPixmap pix3(":/source/burger_icon.png");
    ui->menuoptions->setIcon(pix3);
}

SafheAsli::~SafheAsli()
{
    delete ui;
}

void SafheAsli::on_actionLog_out_triggered()
{
    QString name11 = json["Name"].toString();
    QString pass11 = json["Password"].toString();
//    qDebug() << json;
    QString url = "http://api.barafardayebehtar.ml:8080/logout?username=" + name11 + "&password=" + pass11;
    logout1(url);
    close();
}


void SafheAsli::on_pushButton_clicked()
{
    QString str = ui->lineEdit_asli->text();
    str.append("\n");
//    QString message = QString("<span style=\"color: red;\">");
//    message.append(str);
//    message.append(QString("</span><br>"));
    QString message = QString("Me:\n")+str;
    ui->textBrowser_asli->append(message);
//    QString dst_username;
    QString tmp = json["token"].toString();
    QString url = "http://api.barafardayebehtar.ml:8080/sendmessageuser?token="+tmp+"&dst="+dst_username+"&body="+str;

    QJsonObject ans = send_request(url);
//    qDebug() << ans["message"] << ans["code"];

    ui->lineEdit_asli->clear();
}


void SafheAsli::on_listWidget_itemClicked(QListWidgetItem *item)
{
    dst_username = item->text();
//    qDebug() << dst_username;
    QString tmp = json["token"].toString();


    QString url = "http://api.barafardayebehtar.ml:8080/getuserchats?token="+tmp;

    QJsonObject ans = send_request(url);



//    if(item->text()==QString("Mammad")){
//        ui->textBrowser_asli->setText(QString("Hello Buddy!\nHow are you?\nWhat's up?\n"));
//    }

}

