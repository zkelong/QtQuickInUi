#include "mainwidget.h"
#include "ui_mainWidget.h"
#include "dialog33.h"
#include "dialog34.h"
#include "window36.h"
#include "dialog36.h"
#include "dialog37.h"
#include "dialog38.h"
#include "dialog39.h"
#include "dialog310.h"
#include "dialog311.h"
#include "dialog312.h"
#include "dialog41.h"
#include "dialog42.h"
#include "dialog43.h"
#include "window51.h"
#include "window52.h"
#include "window53.h"
#include "window54.h"
#include "window55.h"
#include "window56.h"
#include "window57.h"
#include "window58.h"
#include "window59.h"
#include "widget61.h"
#include <QLabel>
#include <QDebug>
#include <QDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    QDialog *w = new QDialog(); //需要new出来的才能显示，不然程序结束后，对象就被销毁了，一闪而过
    w->resize(400, 300); //窗口大小
    QLabel *label = new QLabel(w);
    label->move(0, 0);
    label->setText(QObject::tr("Hello World! 你好Qt！\n设置窗口大小，并添加label显示，设置label位置"));
    label->setWordWrap(true);
    w->show();
}


void Widget::on_pushButton_31_clicked()
{
    // 新建QWidget类对象，默认parent参数是0，所以它是个窗口
    QWidget *widget = new QWidget();

    // 设置窗口标题
    widget->setWindowTitle(QObject::tr("我是widget"));

    // 新建QLabel对象，默认parent参数是0，所以它是个窗口
    QLabel *label = new QLabel();

    label->setWindowTitle(QObject::tr("我是label"));

    // 设置要显示的信息
    label->setText(QObject::tr("label:我是个窗口"));

    // 改变部件大小，以便能显示出完整的内容
    label->resize(180, 20);

    // label2指定了父窗口为widget，所以不是窗口
    QLabel *label2 = new QLabel(widget);

    label2->setText(QObject::tr("label2:我不是独立窗口，只是widget的子部件"));

    label2->resize(250, 20);

    // 在屏幕上显示出来
    label->show();
    widget->show();
}

void Widget::on_pushButton_32_clicked()
{
    QWidget *widget = new QWidget();
    widget->resize(700, 400); //设置窗口大小
    widget->move(200, 100);   //设置窗口位置
    QLabel *label = new QLabel(widget);
    label->setText("窗口结构，widget.x/y, geomoetry, frameGeometry::::qDebug()");
    int x = widget->x();
    qDebug("x: %d", x);          //输出x的值
    int y = widget->y();
    qDebug("y: %d", y);
    //geometry包含于frameGeometry
    QRect geometry = widget->geometry(); //获取数据：起始点要大于设置的窗口位置，设置窗口的大小 QRect(209,136 400x300)
    QRect frame = widget->frameGeometry();   //获取数据：起始点：设置窗口的位置（200， 100），比设置窗口的大大 QRect(200,100 418x345)
    qDebug() << "geometry: " << geometry << "frame: " << frame;

    qDebug() << "pos:" << widget->pos() << endl  //QPoint(200,100)
             << "rect:" << widget->rect() << endl    //QRect(0,0 400x300)
             << "size:" << widget->size() << endl    //QSize(400, 300)
             << "width:" << widget->width() << endl  //400
             << "height:" << widget->height();       //300

    widget->show();
}

void Widget::on_pushButton_33_clicked()
{
    Dialog33 *d33 = new Dialog33();
    d33->setModal(true); //设置为模态
    d33->show();
}

void Widget::on_pushButton_34_clicked()
{
    Dialog34 * d34 = new Dialog34(this);
    d34->setModal(true);
    d34->show();
}

void Widget::on_pushButton_36_clicked()
{
    Window36 *w = new Window36();
    Dialog36 d;
    if(d.exec() == QDialog::Accepted)   //判断 d 运行结果
    {
        qDebug() << "d accepted....." << endl;
        w->show();   //显示主界面
    } //否则退出
}

void Widget::on_pushButton_37_clicked()
{
    Dialog37 d37;
    d37.exec();
}

void Widget::on_pushButton_38_clicked()
{
    Dialog38 d38;
    d38.exec();
}

void Widget::on_pushButton_39_clicked()
{
    Dialog39 d39;
    d39.exec();
}

void Widget::on_pushButton_310_clicked()
{
    Dialog310 d310;
    d310.exec();
}

void Widget::on_pushButton_311_clicked()
{
    Dialog311 d;
    d.exec();
}

void Widget::on_pushButton_312_clicked()
{
    Dialog312 d;
    d.exec();
}

void Widget::on_pushButton_41_clicked()
{
    Dialog41 d;
    d.exec();
}

void Widget::on_pushButton_42_clicked()
{
    Dialog42 d;
    d.exec();
}

void Widget::on_pushButton_43_clicked()
{
    Dialog43 d;
    d.exec();
}

void Widget::on_pushButton_51_clicked()
{
    Window51 *w = new Window51;
    w->show();
}

void Widget::on_pushButton_52_clicked()
{
    Window52 *w = new Window52;
    w->show();
}

void Widget::on_pushButton_53_clicked()
{
    Window53 *w = new Window53;
    w->show();
}

void Widget::on_pushButton_54_clicked()
{
    Window54 *w = new Window54;
    w->show();
}

void Widget::on_pushButton_55_clicked()
{
    Window55 *w = new Window55;
    w->show();
}

void Widget::on_pushButton_56_clicked()
{
    Window56 *w = new Window56;
    w->show();
}

void Widget::on_pushButton_57_clicked()
{
    Window57 *w = new Window57;
    w->show();
}

void Widget::on_pushButton_58_clicked()
{
    Window58 *w = new Window58;
    w->show();
}

void Widget::on_pushButton_59_clicked()
{
    Window59 *w = new Window59;
    w->show();
}

void Widget::on_pushButton_66_clicked()
{
    Widget61 *w = new Widget61;
    w->show();
}
