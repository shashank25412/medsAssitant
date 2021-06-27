#include "viewdialog.h"
#include "ui_viewdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

viewDialog::viewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewDialog)
{
    ui->setupUi(this);
}

viewDialog::~viewDialog()
{
    delete ui;
}

void viewDialog::on_pushButton_2_clicked()
{
    QDialog::close();
}


void viewDialog::on_pushButton_clicked()
{
    QTextStream out{stdout};

    QFile f{"D:/list.txt"};
    if(!f.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this,"Can't open","Cannot open the file.");
    }

    QTextStream in{&f};

    int i=1;
    while(!in.atEnd()){
        QString line = in.readLine();
        if(i%3==1)
            ui->label_name->setText(line);
        else if(i%3==2)
            ui->label_price->setText(line);
        else
            ui->label_desc->setText(line);
        i++;
    }
    f.close();
}

