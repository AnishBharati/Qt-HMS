#include "secdialog.h"
#include "ui_secdialog.h"
#include<QMessageBox>
#include"record.h"
#include<QSortFilterProxyModel>
#include<QDesktopServices>
#include<QFileDialog>
secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
    Login conn;
     if(!conn.connOpen())
             ui->label_third->setText("failed to open");
             else
            ui->label_third->setText("connected");
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_clicked()
{
    Login conn;
    QString id,name,surname,age,phone;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       // qry.prepare("insert into patientsinfo(ID,Name,Surname,Age,Phone) values ('"+id+"','"+name+"','"+surname+"','"+age+"','"+phone+"')");
        qry.prepare("INSERT INTO patientsinfo (ID,Name,Surname,Age,Phone) VALUES (:ID, :Name, :Surname,:Age,:Phone)");

        qry.bindValue(":ID", id);
        qry.bindValue(":Name", name);
        qry.bindValue(":Surname", surname);
         qry.bindValue(":Age", age);
         qry.bindValue(":Phone", phone);
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




void secDialog::on_pushButton_2_clicked()
{
    this->hide();
    Record record;
    record.setModal(true);
    record.exec();
}


void secDialog::on_pushButton_3_clicked()
{
    Login conn;
    QSqlQueryModel * modal1=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from patientsinfo");
    qry->exec();
    modal1->setQuery(*qry);

    proxyPersonas2=new QSortFilterProxyModel(this);
    proxyPersonas2->setSourceModel(modal1);
    proxyPersonas2->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas2->setFilterKeyColumn(-1);
    //proxyPersonas2->setFilterFixedString("ko");

   // ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Surname"<<"Age"<<"Phone");


    ui->tableView->setModel(proxyPersonas2);


    conn.connClose();
    qDebug() <<(proxyPersonas2->rowCount());


}



void secDialog::on_lineEdit_textChanged(const QString &arg1)
{
proxyPersonas2->setFilterFixedString(arg1);
}


/*void secDialog::on_cbColumnas_currentIndexChanged(int index)
{
        proxyPersonas2->setFilterKeyColumn(index);
}
*/


void secDialog::on_pushButton_4_clicked()
{
    QString filename=QFileDialog::getOpenFileName(
                this,
                tr("Open file"),
                "C://",
                    "All files (*.*);;Text File (*.txt);;Music File(*.mp3)"


                );
        QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
        //QMessageBox::Information()
}


void secDialog::on_pushButton_5_clicked()
{
    Login conn;
    QString id,name,age,phone,surname;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
// email=ui->txt_phone_3->text();
 //specialist=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       qry.prepare("update patientsinfo set ID='"+id+"',Name='"+name+"',Age='"+age+"',Phone='"+phone+"',Surname='"+surname+"' where ID='"+id+"' ");
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

}}


void secDialog::on_pushButton_6_clicked()
{
    Login conn;
    QString id,name,age,phone,surname;
    id=ui->txt_id->text();
    name=ui->txt_name->text();
    surname=ui->txt_surname->text();
    age=ui->txt_age->text();
 phone=ui->txt_phone->text();
// email=ui->txt_phone_3->text();
 //specialist=ui->txt_phone_2->text();
   //  phone=ui->txt_phone->text();
    if(!conn.connOpen()){

            qDebug()<<"Failed to open the database";
            return;
        }
       conn.connOpen();


        QSqlQuery qry;
       qry.prepare("delete from patientsinfo where ID='"+id+"' ");
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

}}



