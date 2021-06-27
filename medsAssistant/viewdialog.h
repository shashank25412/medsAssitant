#ifndef VIEWDIALOG_H
#define VIEWDIALOG_H

#include <QDialog>

namespace Ui {
class viewDialog;
}

class viewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit viewDialog(QWidget *parent = nullptr);
    ~viewDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewDialog *ui;
};

#endif // VIEWDIALOG_H
