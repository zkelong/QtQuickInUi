#include "dialog310.h"
#include "ui_dialog310.h"
#include <QValidator>
#include <QCompleter>
#include <QDebug>

Dialog310::Dialog310(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog310)
{
    ui->setupUi(this);
    // 新建验证器，指定范围为100-999
    QValidator *validator = new QIntValidator(100, 999, this);

    // 在行编辑器中使用验证器
    ui->lineEdit_3->setValidator(validator);

    QStringList wordList;
    wordList << "Qt" << "Qt Creator" << tr("你好");

    // 新建自动完成器
    QCompleter *completer = new QCompleter(wordList, this);

    // 设置大小写不敏感
    completer->setCaseSensitivity(Qt::CaseInsensitive);

    ui->lineEdit_4->setCompleter(completer);
}

Dialog310::~Dialog310()
{
    delete ui;
}

void Dialog310::on_lineEdit_2_returnPressed()
{
    // 让lineEdit3获得光标
    ui->lineEdit_3->setFocus();
    // 输出lineEdit2的内容
    qDebug() << ui->lineEdit_2->text();
    // 输出lineEdit2显示的内容
    qDebug() << ui->lineEdit_2->displayText();
}

void Dialog310::on_lineEdit_3_returnPressed()
{
    ui->lineEdit_4->setFocus();
    qDebug() << ui->lineEdit_3->text();
}
