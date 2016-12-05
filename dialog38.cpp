#include "dialog38.h"
#include "ui_dialog38.h"
#include <QMovie>

Dialog38::Dialog38(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog38)
{
    ui->setupUi(this);
    ui->label_7->setPixmap(QPixmap("E:/QtSpace/QtQuickInUi/res/logo.png"));

    QMovie *movie = new QMovie("E:/QtSpace/QtQuickInUi/res/donghua.gif");
    ui->label->setMovie(movie);
    movie->start();
}

Dialog38::~Dialog38()
{
    delete ui;
}
