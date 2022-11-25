#include "Patientsinfo.h"
#include "ui_Patientsinfo.h"
#include<QMessageBox>
#include"secdialog.h"
#include"emergency.h"
#include<QPixmap>
#include<QDebug>
#include<QIcon>
#include"record.h"
patientsinfo::patientsinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientsinfo)
{
    ui->setupUi(this);
   Login conn;
    if(!conn.connOpen())
            ui->label_sec_status->setText("Failed to open Database");
            else
           ui->label_sec_status->setText("Database connected");

}
patientsinfo::~patientsinfo()
{
    delete ui;
}
void patientsinfo::on_pushButton_clicked()
{
    this->hide();
    emergency Emergency;
    Emergency.setModal(true);
    Emergency.exec();
}
void patientsinfo::on_pushButtonrecord_clicked()
{

    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}
