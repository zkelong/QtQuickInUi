#ifndef WINDOW57_H
#define WINDOW57_H

#include <QMainWindow>

namespace Ui {
    class Window57;
}

class Window57 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window57(QWidget *parent = 0);
    ~Window57();
protected:
    void dragEnterEvent(QDragEnterEvent *event); //拖动进入事件
    void dropEvent(QDropEvent *event); //放下事件
private:
    Ui::Window57 *ui;
};

#endif // WINDOW57_H
