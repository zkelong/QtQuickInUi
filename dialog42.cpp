#include "dialog42.h"
#include "ui_dialog42.h"

Dialog42::Dialog42(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog42)
{
    ui->setupUi(this);
}

Dialog42::~Dialog42()
{
    delete ui;
}
