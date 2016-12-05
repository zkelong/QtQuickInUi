#ifndef LINEEDIT61_H
#define LINEEDIT61_H

#include <QLineEdit>

class LineEdit61 : public QLineEdit
{
    Q_OBJECT
public:
    explicit LineEdit61(QWidget *parent = 0);
protected:
    void keyPressEvent(QKeyEvent *event);


signals:

public slots:

};

#endif // LINEEDIT61_H
