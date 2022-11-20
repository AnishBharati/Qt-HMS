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




void Record::on_radioButton_clicked()
{
    this->hide();
    secDialog Second;
    Second.setModal(true);
    Second.exec();
}

