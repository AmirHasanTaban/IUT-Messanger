#include "dialogerror.h"
#include "ui_dialogerror.h"

DialogError::DialogError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogError)
{
    ui->setupUi(this);
}

DialogError::~DialogError()
{
    delete ui;
}
