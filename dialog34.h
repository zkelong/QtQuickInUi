#ifndef DIALOG34_H
#define DIALOG34_H

#include <QDialog>

namespace Ui {
class Dialog34;
}

class Dialog34 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog34(QWidget *parent = 0);
    ~Dialog34();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog34 *ui;
};

#endif // DIALOG34_H
