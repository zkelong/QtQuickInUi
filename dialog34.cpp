#include "dialog34.h"
#include "ui_dialog34.h"

Dialog34::Dialog34(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog34)
{
    ui->setupUi(this);
}

Dialog34::~Dialog34()
{
    delete ui;
}

void Dialog34::on_pushButton_clicked()
{
    QDialog * dl = new QDialog();
    dl->show();
}
