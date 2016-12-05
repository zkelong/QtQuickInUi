#ifndef WINDOW58_H
#define WINDOW58_H

#include <QMainWindow>

namespace Ui {
    class Window58;
}

class Window58 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window58(QWidget *parent = 0);
    ~Window58();
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void dragEnterEvent(QDragEnterEvent *event); //拖动进入事件
    void dragMoveEvent(QDragMoveEvent *event); //拖动事件
    void dropEvent(QDropEvent *event); //放下事件
private:
    Ui::Window58 *ui;
};

#endif // WINDOW58_H
