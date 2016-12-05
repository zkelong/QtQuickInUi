#include "dialog311.h"
#include "ui_dialog311.h"
#include <QDebug>

Dialog311::Dialog311(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog311)
{
    ui->setupUi(this);
    ui->setupUi(this);
    // 设置时间为现在的系统时间
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());

    // 设置时间的显示格式
    ui->dateTimeEdit->setDisplayFormat(tr("yyyy年MM月dd日ddd HH时mm分ss秒"));

    qDebug() << ui->dateTimeEdit->text();
    qDebug() << ui->dateTimeEdit->dateTime();
    qDebug() << ui->doubleSpinBox->value();
    qDebug() << ui->spinBox->value();
}

Dialog311::~Dialog311()
{
    delete ui;
}
