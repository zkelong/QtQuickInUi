#ifndef WINDOW51_H
#define WINDOW51_H

#include <QMainWindow>

namespace Ui {
class Window51;
}

class Window51 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window51(QWidget *parent = 0);
    ~Window51();

private slots:
    void on_action_New_triggered();

    void on_action_Dock_triggered();

private:
    Ui::Window51 *ui;
};

#endif // WINDOW51_H
