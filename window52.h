#ifndef WINDOW52_H
#define WINDOW52_H

#include <QMainWindow>

namespace Ui {
class Window52;
}

class Window52 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window52(QWidget *parent = 0);
    ~Window52();

private:
    Ui::Window52 *ui;

private slots:
    void setText(const QString &string); //向编辑器中添加文本
};

#endif // WINDOW52_H
