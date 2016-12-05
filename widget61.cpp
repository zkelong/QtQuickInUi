#include "widget61.h"
#include "ui_widget61.h"
#include "lineedit61.h"
#include <QKeyEvent>
#include <QDebug>
Widget61::Widget61(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget61)
{
    ui->setupUi(this);
    lineEdit = new LineEdit61(this);
    lineEdit->move(100,100);
}

Widget61::~Widget61()
{
    delete ui;
}

void Widget61::keyPressEvent(QKeyEvent *event)
{
    qDebug() << tr("Widget键盘按下事件");
}
