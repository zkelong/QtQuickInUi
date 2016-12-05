#ifndef DIALOG37_H
#define DIALOG37_H

#include <QDialog>
#include <QWizard>

namespace Ui {
class Dialog37;
}

class Dialog37 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog37(QWidget *parent = 0);
    ~Dialog37();

private slots:

    void on_pushButton_color_clicked();

    void on_pushButton_file_clicked();

    void on_pushButton_font_clicked();

    void on_pushButton_input_clicked();

    void on_pushButton_message_clicked();

    void on_pushButton_progress_clicked();

    void on_pushButton_erromessage_clicked();

    void on_pushButton_guide_clicked();

private:
    Ui::Dialog37 *ui;
    QWizardPage *createPage1(); //新添加
    QWizardPage *createPage2(); //新添加
    QWizardPage *createPage3(); //新添加
};

#endif // DIALOG37_H
