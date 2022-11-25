#include "doctorlogin.h"
#include "ui_doctorlogin.h"

Doctorlogin::Doctorlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Doctorlogin)
{
    ui->setupUi(this);
}

Doctorlogin::~Doctorlogin()
{
    delete ui;
}
