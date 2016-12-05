#ifndef WINDOW36_H
#define WINDOW36_H

#include <QMainWindow>

namespace Ui {
class Window36;
}

class Window36 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window36(QWidget *parent = 0);
    ~Window36();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Window36 *ui;
};

#endif // WINDOW36_H
