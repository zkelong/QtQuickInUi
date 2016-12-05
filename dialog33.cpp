#include "dialog33.h"
#include "ui_dialog33.h"

Dialog33::Dialog33(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog33)
{
    ui->setupUi(this);
}

Dialog33::~Dialog33()
{
    delete ui;
}
