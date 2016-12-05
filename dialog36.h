#ifndef DIALOG36_H
#define DIALOG36_H

#include <QDialog>

namespace Ui {
class Dialog36;
}

class Dialog36 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog36(QWidget *parent = 0);
    ~Dialog36();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog36 *ui;
};

#endif // DIALOG36_H
