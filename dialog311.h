#ifndef DIALOG311_H
#define DIALOG311_H

#include <QDialog>

namespace Ui {
class Dialog311;
}

class Dialog311 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog311(QWidget *parent = 0);
    ~Dialog311();

private:
    Ui::Dialog311 *ui;
};

#endif // DIALOG311_H
