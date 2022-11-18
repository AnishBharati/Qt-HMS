#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logpic("/home/anish/Downloads/project_pic/Log.png");
    ui->label_loginpic->setPixmap(logpic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{QString username = ui->lineEdit_username->text();
 QString password = ui->lineEdit_password->text();

if (username == "dhulikhelhospital" && password =="dhulikhel@123"){
        ui->label_congrats->setText("Congratulations!");
        hide();
        opt = new Options(this);
        opt->show();
}else{
    ui->label_congrats->setText("Sorry, Please enter correct password");
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
}
}

