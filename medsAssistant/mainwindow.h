#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adddialog.h"
#include "searchdialog.h"
#include "deletedialog.h"
#include "viewdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_4_clicked();

private:
    Ui::MainWindow *ui;
    addDialog *dialog1;
    searchDialog *dialog2;
    deleteDialog *dialog3;
    viewDialog *dialog4;
};
#endif // MAINWINDOW_H
