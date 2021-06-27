#include "adddialog.h"
#include "ui_adddialog.h"
#include <QFile>
#include <QTextStream>

addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{
    QFile f{"D:/list.txt"};

    if(f.open(QIODevice::WriteOnly | QIODevice::Text)){

        QTextStream out{&f};
        QString name = ui->lineEdit_name->text();
        QString price = ui->lineEdit_price->text();
        QString desc = ui->lineEdit_desc->text();

        out<<name<<"\n";
        out<<price<<"\n";
        out<<desc<<"\n";

        ui->lineEdit_name->clear();
        ui->lineEdit_price->clear();
        ui->lineEdit_desc->clear();
    }
    f.flush();
    f.close();
}

