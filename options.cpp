#include "options.h"
#include "ui_options.h"

Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
    QPixmap logpic("/home/anish/Downloads/background.jpg");
    ui->label_background->setPixmap(logpic);
}

Options::~Options()
{
    delete ui;
}


