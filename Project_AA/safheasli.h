#ifndef SAFHEASLI_H
#define SAFHEASLI_H

#include <QMainWindow>

namespace Ui {
class SafheAsli;
}

class SafheAsli : public QMainWindow
{
    Q_OBJECT

public:
    explicit SafheAsli(QWidget *parent = nullptr);
    ~SafheAsli();

private slots:
    void on_actionLog_out_triggered();
    void GetProfile(QString, QString, QString);

private:
    Ui::SafheAsli *ui;
};

#endif // SAFHEASLI_H
