#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QApplication::quit();
}


void MainWindow::on_commandLinkButton_clicked()
{
    dialog1 = new addDialog();
    dialog1->show();
}


void MainWindow::on_commandLinkButton_2_clicked()
{
    dialog2 = new searchDialog();
    dialog2->show();
}


void MainWindow::on_commandLinkButton_3_clicked()
{
    dialog3 = new deleteDialog();
    dialog3->show();
}


void MainWindow::on_commandLinkButton_4_clicked()
{
    dialog4 = new viewDialog();
    dialog4->show();
}

