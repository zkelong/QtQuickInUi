#ifndef DIALOG42_H
#define DIALOG42_H

#include <QDialog>

namespace Ui {
class Dialog42;
}

class Dialog42 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog42(QWidget *parent = 0);
    ~Dialog42();

private:
    Ui::Dialog42 *ui;
};

#endif // DIALOG42_H
