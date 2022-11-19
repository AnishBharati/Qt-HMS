#include "login.h"
#include "Patientsinfo.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);


    if(!connOpen())
            ui->label->setText("failed to open");
            else
           ui->label->setText("connected");
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
        if(!connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       connOpen();


        QSqlQuery qry;
        qry.prepare("select * from logininfo where Username='"+username+"'and Password='"+password+"'");
        if(qry.exec())
        {
            int count=0;
            while(qry.next())
            {
                count++;
            }
            if(count==1){
                    ui->label->setText("username and password is correct ");

                    connClose();

                    this->hide();
                    patientsinfo Patientsinfo;
                    Patientsinfo.setModal(true);
                    Patientsinfo.exec();
            }
            if(count>1)
                    ui->label->setText("Duplicate username and password ");
            if(count<1)
                    ui->label->setText("username and password is not correct ");
        }

}

