#ifndef DIALOG43_H
#define DIALOG43_H

#include <QDialog>

namespace Ui {
class Dialog43;
}

class Dialog43 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog43(QWidget *parent = 0);
    ~Dialog43();

private:
    Ui::Dialog43 *ui;
};

#endif // DIALOG43_H
