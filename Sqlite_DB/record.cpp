#include "record.h"
#include "ui_record.h"
#include"Patientsinfo.h"
#include"secdialog.h"
#include"staffinfo.h"
#include"nurseinfo.h"
#include"doctor.h"
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
    if(ui->radioButton_11->isChecked())
    {
    this->hide();
    StaffInfo staff;
    staff.setModal(true);
    staff.exec();
    }
    if(ui->radioButton_7->isChecked())
    {
    this->hide();
    Doctor doctor;
    doctor.setModal(true);
    doctor.exec();
    }
    if(ui->radioButton_9->isChecked())
    {
    this->hide();
    NurseInfo nurse;
    nurse.setModal(true);
    nurse.exec();
    }

}

