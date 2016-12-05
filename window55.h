#ifndef WINDOW55_H
#define WINDOW55_H

#include <QMainWindow>

namespace Ui {
    class Window55;
}
class QLineEdit;

class Window55 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window55(QWidget *parent = 0);
    ~Window55();

private:
    Ui::Window55 *ui;
    QLineEdit *lineEdit;
private slots:
    void showTextFrame(); //遍历文档框架
    void showTextBlock(); //遍历所有文本块
    void setTextFont(bool checked); //设置字体格式
    void insertTable(); //插入表格
    void insertList(); //插入列表
    void insertImage(); //插入图片

    void textFind(); //查找文本
    void findNext(); //查找下一个
};

#endif // WINDOW55_H
