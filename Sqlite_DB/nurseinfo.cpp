#include "nurseinfo.h"
#include "ui_nurseinfo.h"
#include"record.h"
NurseInfo::NurseInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NurseInfo)
{
    ui->setupUi(this);
}

NurseInfo::~NurseInfo()
{
    delete ui;
}

void NurseInfo::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}

