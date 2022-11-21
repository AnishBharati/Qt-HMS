#include "staffinfo.h"
#include "ui_staffinfo.h"
#include"record.h"
#include"login.h"
#include<QMessageBox>
#include<QSortFilterProxyModel>

StaffInfo::StaffInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StaffInfo)
{
    ui->setupUi(this);
    Login conn;
     if(!conn.connOpen())
             ui->label_third->setText("failed to open");
             else
            ui->label_third->setText("connected");

}

StaffInfo::~StaffInfo()
{
    delete ui;
}

void StaffInfo::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}


void StaffInfo::on_pushButton_clicked()
{
    Login conn;
    QString id,name,surname,age,phone,dept;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
 dept=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       // qry.prepare("insert into staffinfo(ID,Name,Surname,Age,Phone) values ('"+id+"','"+name+"','"+surname+"','"+age+"','"+phone+"')");
        qry.prepare("INSERT INTO staffinfo (ID,Name,Surname,Age,Phone,Department) VALUES (:ID, :Name, :Surname,:Age,:Phone,:Department)");

        qry.bindValue(":ID", id);
        qry.bindValue(":Name", name);
        qry.bindValue(":Surname", surname);
         qry.bindValue(":Age", age);
         qry.bindValue(":Phone", phone);
         qry.bindValue(":Department", dept);
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


void StaffInfo::on_pushButton_3_clicked()
{
    Login conn;
    QSqlQueryModel * modal5=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from staffinfo");
    qry->exec();
    modal5->setQuery(*qry);

    proxyPersonas=new QSortFilterProxyModel(this);
    proxyPersonas->setSourceModel(modal5);
    proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas->setFilterKeyColumn(-1);
    //proxyPersonas->setFilterFixedString("ko");

    ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Surname"<<"Age"<<"Phone"<<"Department");


    ui->tableView->setModel(proxyPersonas);


    conn.connClose();
    qDebug() <<(proxyPersonas->rowCount());

}


void StaffInfo::on_lineEdit_textChanged(const QString &arg1)
{
    proxyPersonas->setFilterFixedString(arg1);
}



void StaffInfo::on_cbColumnas_currentIndexChanged(int index)
{
    proxyPersonas->setFilterKeyColumn(index);
    if (index==6)
    {
        index=-1;
    }

}

