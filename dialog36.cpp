#include "dialog36.h"
#include "ui_dialog36.h"

Dialog36::Dialog36(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog36)
{
    ui->setupUi(this);
}

Dialog36::~Dialog36()
{
    delete ui;
}

//登陆
void Dialog36::on_pushButton_clicked()
{
    accept();   //关闭窗口并返回一个值
}

//退出
void Dialog36::on_pushButton_2_clicked()
{
    this->close();
}
