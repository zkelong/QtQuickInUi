#include "lineedit61.h"
#include <QKeyEvent>
#include <QDebug>
LineEdit61::LineEdit61(QWidget *parent) :
    QLineEdit(parent)
{
}

// 键盘按下事件
void LineEdit61::keyPressEvent(QKeyEvent *event)
{
    qDebug() << tr("LineEdit61键盘按下事件");

    // 执行QLineEdit类的默认事件处理
    QLineEdit::keyPressEvent(event);
    // 忽略该事件
    event->ignore();
}
