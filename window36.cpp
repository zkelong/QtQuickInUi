#include "window36.h"
#include "ui_window36.h"
#include "dialog36.h"
#include <QDialog>
#include <QDebug>

Window36::Window36(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window36)
{
    ui->setupUi(this);
}

Window36::~Window36()
{
    delete ui;
}

//子界面
void Window36::on_pushButton_clicked()
{
    QDialog * dialog = new QDialog(this);
    dialog->show();
}

//重登陆
void Window36::on_pushButton_2_clicked()
{
    // 先关闭主界面，其实是隐藏起来了，并没有真正退出
    this->close();
    // 新建Dialog对象
    Dialog36 d;
    // 如果按下了“进入主窗口”按钮，则再次显示主界面
    // 否则，因为现在已经没有显示的界面了，所以程序将退出
    if(d.exec() == QDialog::Accepted) show();
}

//退出
void Window36::on_pushButton_3_clicked()
{
    this->close();
}
