#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
     mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/jackq/Desktop/QT LOGIN SQL/Database.db");

    if(!mydb.open())
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
        if(!mydb.isOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
        QSqlQuery qry;
        if(qry.exec("select * from Patientsinfo where Username='"+username+"'and Password='"+password+"'"))
        {
            int count=0;
            while(qry.next())
            {
                count++;
            }
            if(count==1)
                    ui->label->setText("username and password is correct ");
            if(count>1)
                    ui->label->setText("Duplicate username and password ");
            if(count<1)
                    ui->label->setText("username and password is not correct ");

        }
}

