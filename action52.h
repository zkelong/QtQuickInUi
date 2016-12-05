#ifndef ACTION52_H
#define ACTION52_H

#include <QWidgetAction>
class QLineEdit;    //前置声明

class Action52 : public QWidgetAction
{
    Q_OBJECT

public:
    explicit Action52(QObject *parent = 0);
    //声明函数，该函数是 QWidgetAction类中的虚函数

protected:
    QWidget* createWidget(QWidget *parent);
    //声明函数，该函数是QWidgetAction类中的虚函数

signals:
    void getText(const QString &string);
    //新建信号，用于在按下回车键时，将行编辑器的内容发射出去
private slots:
    void sendText(); //新建槽，它用来与行编辑器的按下回车键信号关联
private:
    QLineEdit *lineEdit;    //定义行编辑器对象的指针
};

#endif // ACTION52_H
