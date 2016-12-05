#include "dialog43.h"
#include "ui_dialog43.h"

Dialog43::Dialog43(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog43)
{
    ui->setupUi(this);
}
Dialog43::~Dialog43()
{
    delete ui;
}
