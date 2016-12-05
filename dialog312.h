#ifndef DIALOG312_H
#define DIALOG312_H

#include <QDialog>

namespace Ui {
class Dialog312;
}

class Dialog312 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog312(QWidget *parent = 0);
    ~Dialog312();

private:
    Ui::Dialog312 *ui;
};

#endif // DIALOG312_H
