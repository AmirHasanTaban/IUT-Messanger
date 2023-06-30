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

private:
    QJsonObject json;

    Ui::SafheAsli *ui;
};

#endif // SAFHEASLI_H
