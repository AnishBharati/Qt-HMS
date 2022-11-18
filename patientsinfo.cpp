#include "patientsinfo.h"
#include "ui_patientsinfo.h"

patientsinfo::patientsinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientsinfo)
{
    ui->setupUi(this);
}

patientsinfo::~patientsinfo()
{
    delete ui;
}
