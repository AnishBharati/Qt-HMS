#include "patientlogin.h"
#include "ui_patientlogin.h"

Patientlogin::Patientlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Patientlogin)
{
    ui->setupUi(this);
}

Patientlogin::~Patientlogin()
{
    delete ui;
}
