#ifndef DIALOG41_H
#define DIALOG41_H

#include <QDialog>

namespace Ui {
class Dialog41;
}

class Dialog41 : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog41(QWidget *parent = 0);
    ~Dialog41();

private slots:
    void on_pushButton_toggled(bool checked);

private:
    Ui::Dialog41 *ui;

};

#endif // DIALOG41_H
