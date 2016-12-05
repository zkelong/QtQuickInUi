#include "dialog312.h"
#include "ui_dialog312.h"

Dialog312::Dialog312(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog312)
{
    ui->setupUi(this);
}

Dialog312::~Dialog312()
{
    delete ui;
}
