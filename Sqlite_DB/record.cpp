#include "record.h"
#include "ui_record.h"
#include"Patientsinfo.h"
#include"secdialog.h"
Record::Record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Record)
{
    ui->setupUi(this);
}

Record::~Record()
{
    delete ui;
}






void Record::on_pushButton_1_clicked()
{
    if(ui->radioButton->isChecked())
    {
    this->hide();
    secDialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();
    }

}

