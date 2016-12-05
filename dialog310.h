#ifndef DIALOG310_H
#define DIALOG310_H

#include <QDialog>

namespace Ui {
class Dialog310;
}

class Dialog310 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog310(QWidget *parent = 0);
    ~Dialog310();

private slots:
    void on_lineEdit_2_returnPressed();

    void on_lineEdit_3_returnPressed();

private:
    Ui::Dialog310 *ui;
};

#endif // DIALOG310_H
