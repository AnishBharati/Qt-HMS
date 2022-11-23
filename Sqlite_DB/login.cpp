#include "login.h"
#include "Patientsinfo.h"
#include "ui_login.h"
#include<QPixmap>
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    QIcon user("C:/Users/Suraj/Documents/login.jfif");
    QIcon pass("‪C:/Users/Suraj/Documents/password.png");

    ui->lineEdit_username->addAction(user, QLineEdit::LeadingPosition);
    ui->lineEdit_password->addAction(pass, QLineEdit::LeadingPosition);

    QPixmap login("C:/Users/Suraj/Downloads/login.png");
    ui->label_pic->setPixmap(login);
    if(!connOpen())
            ui->label->setText("Failed to open Database");
            else
           ui->label->setText("Database connected");
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

