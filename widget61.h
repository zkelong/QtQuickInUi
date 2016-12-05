#ifndef WIDGET61_H
#define WIDGET61_H

#include <QWidget>

namespace Ui {
    class Widget61;
}
class LineEdit61;
class Widget61 : public QWidget
{
    Q_OBJECT

public:
    explicit Widget61(QWidget *parent = 0);
    ~Widget61();
protected:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::Widget61 *ui;
    LineEdit61 *lineEdit;
};

#endif // WIDGET61_H
