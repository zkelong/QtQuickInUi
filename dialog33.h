#ifndef DIALOG33_H
#define DIALOG33_H

#include <QDialog>

namespace Ui {
class Dialog33;
}

class Dialog33 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog33(QWidget *parent = 0);
    ~Dialog33();

private:
    Ui::Dialog33 *ui;
};

#endif // DIALOG33_H
