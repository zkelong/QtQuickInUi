#ifndef WINDOW59_H
#define WINDOW59_H

#include <QMainWindow>
#include <QtPrintSupport/QPrinter>

namespace Ui {
    class Window59;
}

class Window59 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window59(QWidget *parent = 0);
    ~Window59();
private slots:
    void doPrint();
    void doPrintPreview();
    void printPreview(QPrinter *printer);
    void createPdf();
private:
    Ui::Window59 *ui;
};

#endif // WINDOW59_H
