#ifndef WINDOW56_H
#define WINDOW56_H

#include <QMainWindow>

namespace Ui {
    class Window56;
}
class QLineEdit;
class SyntaxHighlighter56;

class Window56 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window56(QWidget *parent = 0);
    ~Window56();

private:
    Ui::Window56 *ui;
    QLineEdit *lineEdit;
    SyntaxHighlighter56 *highlighter;
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

#endif // WINDOW56_H
