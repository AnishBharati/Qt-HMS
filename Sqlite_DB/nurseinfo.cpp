#include "nurseinfo.h"
#include "ui_nurseinfo.h"
#include"record.h"
#include"login.h"
#include<QMessageBox>
#include<QSortFilterProxyModel>
#include<QPixmap>
NurseInfo::NurseInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NurseInfo)
{
    ui->setupUi(this);

    Login conn;
     if(!conn.connOpen())
             ui->label_sec_status->setText("failed to open");
             else
            ui->label_sec_status->setText("connected");
}

NurseInfo::~NurseInfo()
{
    delete ui;
}

void NurseInfo::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}


void NurseInfo::on_pushButton_clicked()
{
    Login conn;
    QString id,name,surname,age,phone,dept;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
 dept=ui->txt_department->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       // qry.prepare("insert into patientsinfo(ID,Name,Surname,Age,Phone) values ('"+id+"','"+name+"','"+surname+"','"+age+"','"+phone+"')");
        qry.prepare("INSERT INTO nurseinfo (ID,Name,Surname,Age,Phone,Department) VALUES (:ID, :Name, :Surname,:Age,:Phone,:Department)");

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


void NurseInfo::on_pushButton_3_clicked()
{
    Login conn;
    QSqlQueryModel * modal19=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from nurseinfo");
    qry->exec();
    modal19->setQuery(*qry);

    proxyPersonas=new QSortFilterProxyModel(this);
    proxyPersonas->setSourceModel(modal19);
    proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas->setFilterKeyColumn(-1);
    //proxyPersonas->setFilterFixedString("ko");

  //  ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Surname"<<"Age"<<"Phone"<<"Department");


    ui->tableView->setModel(proxyPersonas);


    conn.connClose();
    qDebug() <<(proxyPersonas->rowCount());


}



/*void NurseInfo::on_cbColumnas_currentIndexChanged(int index)
{
    proxyPersonas->setFilterKeyColumn(index);
}
*/

void NurseInfo::on_lineEdit_textChanged(const QString &arg1)
{
    proxyPersonas->setFilterFixedString(arg1);
}


void NurseInfo::on_pushButton_5_clicked()
{
    Login conn;
    QString id,name,age,phone,surname,department;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
 department=ui->txt_department->text();
// email=ui->txt_phone_3->text();
 //specialist=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       qry.prepare("delete from nurseinfo where ID='"+id+"' ");
  /*
        */
       if(qry.exec())
       {
       QMessageBox::information(this,tr("delete"),tr("deleted"));
       conn.connClose();
       }
       else
       {
           QMessageBox::critical(this,tr("error::"),qry.lastError().text());

}
}


void NurseInfo::on_pushButton_4_clicked()
{
    Login conn;
    QString id,name,age,phone,surname,department;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
 department=ui->txt_department->text();
// email=ui->txt_phone_3->text();
 //specialist=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       qry.prepare("update nurseinfo set ID='"+id+"',Name='"+name+"',Age='"+age+"',Phone='"+phone+"',Surname='"+surname+"',Department='"+department+"' where ID='"+id+"' ");
  /*
        */
       if(qry.exec())
       {
       QMessageBox::information(this,tr("edit"),tr("edited"));
       conn.connClose();
       }
       else
       {
           QMessageBox::critical(this,tr("error::"),qry.lastError().text());
}
}
