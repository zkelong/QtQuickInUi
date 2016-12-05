#ifndef WINDOW54_H
#define WINDOW54_H

#include <QMainWindow>

namespace Ui {
class Window54;
}

class Window54 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window54(QWidget * parent = 0);
    ~Window54();

private:
    Ui::Window54 *ui;

private slots:
    void showTextFrame(); //遍历文档框架
    void showTextBlock(); //遍历所有文本块
    void setTextFont(bool checked); //设置字体格式
    void insertTable(); //插入表格
    void insertList(); //插入列表
    void insertImage(); //插入图片
};

#endif // WINDOW54_H
