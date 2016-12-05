#ifndef DIALOG38_H
#define DIALOG38_H

#include <QDialog>

namespace Ui {
class Dialog38;
}

class Dialog38 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog38(QWidget *parent = 0);
    ~Dialog38();

private:
    Ui::Dialog38 *ui;
};

#endif // DIALOG38_H
