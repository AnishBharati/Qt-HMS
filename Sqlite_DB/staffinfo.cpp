#include "staffinfo.h"
#include "ui_staffinfo.h"
#include"record.h"

StaffInfo::StaffInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StaffInfo)
{
    ui->setupUi(this);
}

StaffInfo::~StaffInfo()
{
    delete ui;
}

void StaffInfo::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}

