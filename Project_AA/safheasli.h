#ifndef SAFHEASLI_H
#define SAFHEASLI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

namespace Ui {
class SafheAsli;
}

class SafheAsli : public QMainWindow
{
    Q_OBJECT

public:

    void PrintUser(int start, int num, QJsonObject q);
    void PrintGroup(int start, int num, QJsonObject q);
    void PrintChannel(int start ,int num, QJsonObject q);
    void PtintUsers(QJsonObject j1, QJsonObject j2, int start1, int start2);



    QJsonObject send_request(QString url);
    void logout(QString URlAcc);
    QString dst_username;
    void setName(QJsonObject jo);
    explicit SafheAsli(QWidget *parent = nullptr);
    ~SafheAsli();

private slots:
    void TY();

    void on_actionLog_out_triggered();

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionnew_group_triggered();

    void on_actionnew_channel_triggered();

    void on_actionjoin_group_triggered();

    void on_actionjoin_channel_triggered();

    void on_actionnew_chat_triggered();

private:
    QJsonObject json;

    Ui::SafheAsli *ui;
};

#endif // SAFHEASLI_H
