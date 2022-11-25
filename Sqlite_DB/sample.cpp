#include "sample.h"
#include "ui_sample.h"

sample::sample(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sample)
{
    ui->setupUi(this);
}

sample::~sample()
{
    delete ui;
}

void sample::on_pushButton_clicked()
{

}

