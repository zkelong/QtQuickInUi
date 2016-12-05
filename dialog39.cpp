#include "dialog39.h"
#include "ui_dialog39.h"
#include <QMenu>

Dialog39::Dialog39(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog39)
{
    ui->setupUi(this);
    // 这样便指定了Alt+N为加速键
    // 我们也可以使用setShortcut(QKeySequence("Alt+N"))来设置加速键
    ui->pushButton->setText(tr("&nihao"));

    ui->pushButton_2->setText(tr("帮助(&H)"));
    ui->pushButton_2->setIcon(QIcon("E:/QtSpace/QtQuickInUi/res/help.png"));

    ui->pushButton_3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("E:/QtSpace/QtQuickInUi/res/zoom-in.png"),tr("放大"));
    ui->pushButton_3->setMenu(menu);
}

Dialog39::~Dialog39()
{
    delete ui;
}
