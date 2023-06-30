#include "safheasli.h"
#include "ui_safheasli.h"
#include "dialog_login.h"
#include "createnewgroup.h"
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
#include <QTimer>

QJsonObject jsonasl, jsonU1, jsonG1, jsonC1;

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

QString FindNumber(QJsonObject j)
{
    QString mes = j["message"].toString();
    int hyphenStart = mes.indexOf('-');
    int hyphenEnd = mes.lastIndexOf('-');

    QString numberStr = mes.mid(hyphenStart + 1, hyphenEnd - hyphenStart - 1);

    return numberStr;
}


void SafheAsli::PrintUser(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["src"].toString();
        ui->listWidget->addItem(nam);
    }
}

void SafheAsli::PrintGroup(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["group_name"].toString();
        ui->group_list->addItem(nam);
    }
}

void SafheAsli::PrintChannel(int start, int num, QJsonObject q)
{
    for (int i = start; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = q[block].toObject();
        QString nam = val["channel_name"].toString();
        ui->channel_list->addItem(nam);
    }
}

void SafheAsli::TY()
{
    QString ur1 = jsonasl["token"].toString();

    QString uj = "http://api.barafardayebehtar.ml:8080/getuserlist?token=" + ur1;
    QString ug = "http://api.barafardayebehtar.ml:8080/getgrouplist?token=" + ur1;
    QString uc = "http://api.barafardayebehtar.ml:8080/getchannellist?token=" + ur1;

    QJsonObject ju =getuserlist(uj);
    QJsonObject jg =getgrouplist(ug);
    QJsonObject jc =getchannellist(uc);

    QString number_Suser = FindNumber(ju);
    QString number_Sgroup = FindNumber(jg);
    QString number_Schanell = FindNumber(jc);

    int number_Iuser = number_Suser.toInt();
    int number_Igroup = number_Sgroup.toInt();
    int number_Ichanell = number_Schanell.toInt();

    QString number_SuserFirst = FindNumber(jsonU1);
    QString number_SgroupFirst = FindNumber(jsonG1);
    QString number_SchanellFirst = FindNumber(jsonC1);

    int number_IuserFirst = number_SuserFirst.toInt();
    int number_IgroupFirst = number_SgroupFirst.toInt();
    int number_IchanellFirst = number_SchanellFirst.toInt();

    qDebug() << number_IuserFirst;
    qDebug() << number_IgroupFirst;
    qDebug() << number_IchanellFirst;

    if (number_Iuser != number_IuserFirst)
    {
        PrintUser(number_IuserFirst, number_Iuser, ju);
        jsonU1 = ju;
    }

    if (number_Igroup != number_IgroupFirst)
    {
        PrintGroup(number_IgroupFirst, number_Igroup, jg);
        jsonG1 = jg;
    }

    if (number_Ichanell != number_IchanellFirst)
    {
        PrintChannel(number_IchanellFirst, number_Ichanell, jc);
        jsonU1 = ju;
    }

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
    qDebug() << ur1;
    jsonasl = json;

    QString uj = "http://api.barafardayebehtar.ml:8080/getuserlist?token=" + ur1;
    QString ug = "http://api.barafardayebehtar.ml:8080/getgrouplist?token=" + ur1;
    QString uc = "http://api.barafardayebehtar.ml:8080/getchannellist?token=" + ur1;

    QJsonObject ju =getuserlist(uj);
    jsonU1 = ju;
    QJsonObject jg =getgrouplist(ug);
    jsonG1 = jg;
    QJsonObject jc =getchannellist(uc);
    jsonC1 = jc;

    QString number_Suser = FindNumber(ju);
    QString number_Sgroup = FindNumber(jg);
    QString number_Schanell = FindNumber(jc);

    int number_Iuser = number_Suser.toInt();
    int number_Igroup = number_Sgroup.toInt();
    int number_Ichanell = number_Schanell.toInt();

    PrintUser(0, number_Iuser, ju);
    PrintGroup(0, number_Igroup, jg);
    PrintChannel(0, number_Ichanell, jc);

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(TY()));
    timer->start(5000);
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
    qDebug() << json["token"].toString();
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

    int num = FindNumber(ans).toInt();
    for (int i = 0; i < num; i++)
    {
        int myInt = i;
        QString qq = QString::number(myInt);
        QString block = "block " + qq;
        QJsonObject val = ans[block].toObject();
        QString src_dst = val["src"].toString();
        QString body = val["body"].toString();
        QString message = src_dst + ":\n" + body + "\n";
        ui->textBrowser_asli->append(message);
    }



//    if(item->text()==QString("Mammad")){
//        ui->textBrowser_asli->setText(QString("Hello Buddy!\nHow are you?\nWhat's up?\n"));
//    }

}


void SafheAsli::on_actionnew_group_triggered()
{
    CreateNewGroup *g = new CreateNewGroup();
    g->sendtoken(jsonasl["token"].toString());
    g->show();
}

