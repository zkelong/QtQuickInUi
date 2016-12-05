#ifndef DIALOG39_H
#define DIALOG39_H

#include <QDialog>

namespace Ui {
class Dialog39;
}

class Dialog39 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog39(QWidget *parent = 0);
    ~Dialog39();

private:
    Ui::Dialog39 *ui;
};

#endif // DIALOG39_H
