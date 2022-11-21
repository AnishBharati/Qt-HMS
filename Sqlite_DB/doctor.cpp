#include "doctor.h"
#include "ui_doctor.h"
#include"record.h"
#include<QMessageBox>
#include"login.h"
#include<QSortFilterProxyModel>
Doctor::Doctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Doctor)
{
    ui->setupUi(this);
    Login conn;
     if(!conn.connOpen())
             ui->label_sec_status->setText("failed to open");
             else
            ui->label_sec_status->setText("connected");

}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}





void Doctor::on_pushButton_clicked()
{
    Login conn;
    QString id,name,age,phone,email,specialist;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    //surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
 email=ui->txt_phone_3->text();
 specialist=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       // qry.prepare("insert into patientsinfo(ID,Name,Surname,Age,Phone) values ('"+id+"','"+name+"','"+surname+"','"+age+"','"+phone+"')");
        qry.prepare("INSERT INTO doctorsinfo (ID,Name,Age,Phone,Email,Specialist) VALUES (:ID, :Name,:Age,:Phone,:Email,:Specialist)");

        qry.bindValue(":ID", id);
        qry.bindValue(":Name", name);
       // qry.bindValue(":Surname", surname);
         qry.bindValue(":Age", age);
         qry.bindValue(":Phone", phone);
         qry.bindValue(":Email", email);
         qry.bindValue(":Specialist", specialist);
         // qry.bindValue(":Phone", phone);
        if(qry.exec())
        {
        QMessageBox::information(this,tr("Save"),tr("Saved"));
        conn.connClose();
        }
        else
        {
            QMessageBox::critical(this,tr("error::"),qry.lastError().text());

        }
}

void Doctor::on_pushButton_3_clicked()
{

    Login conn;
    QSqlQueryModel *modal32=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from doctorsinfo");
    qry->exec();
    modal32->setQuery(*qry);

    proxyPersonas=new QSortFilterProxyModel(this);
    proxyPersonas->setSourceModel(modal32);
    proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas->setFilterKeyColumn(-1);
    //proxyPersonas->setFilterFixedString("ko");


ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Email"<<"Age"<<"Phone"<<"Specialist");

    ui->tableView->setModel(proxyPersonas);


    conn.connClose();
    qDebug() <<(proxyPersonas->rowCount());


}


void Doctor::on_lineEdit_textChanged(const QString &arg1)
{
    proxyPersonas->setFilterFixedString(arg1);
}


void Doctor::on_cbColumnas_currentIndexChanged(int index)
{
     //ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Email"<<"Age"<<"Phone"<<"Specialist");
    proxyPersonas->setFilterKeyColumn(index);

}

