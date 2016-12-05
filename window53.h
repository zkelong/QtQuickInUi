#ifndef WINDOW53_H
#define WINDOW53_H

#include <QMainWindow>

namespace Ui {
class Window53;
}

class Window53 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window53(QWidget *parent = 0);
    ~Window53();

private:
    Ui::Window53 *ui;

private slots:
    void showTextFrame(); //遍历文档框架
    void showTextBlock(); //遍历所有文本块
    void setTextFont(bool checked); //设置字体格式
};

#endif // WINDOW53_H
