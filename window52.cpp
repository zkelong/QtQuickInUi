#include "window52.h"
#include "ui_window52.h"
#include "action52.h"
#include <QMenu>

Window52::Window52(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window52)
{
    ui->setupUi(this);

    // 创建MyAction
    Action52 *action = new Action52;
    QMenu *editMenu = ui->menubar->addMenu(tr("编辑(&E)"));

    // 添加菜单并且加入我们的action
    editMenu->addAction(action);

    // 将action的getText()信号和这里的setText()槽进行关联
    connect(action,SIGNAL(getText(QString)),this,SLOT(setText(QString)));
}

Window52::~Window52()
{
    delete ui;
}

void Window52::setText(const QString &string)
{
    // 将获取的文本添加到编辑器中
    ui->textEdit->setText(string);
    //setText的功能是在光标处插入数据
}
