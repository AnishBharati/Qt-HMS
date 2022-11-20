#include "secdialog.h"
#include "ui_secdialog.h"
#include<QMessageBox>
#include<QSortFilterProxyModel>
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
        QMessageBox::critical(this,tr("Save"),tr("Saved"));
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
    patientsinfo Patientsinfo;
    Patientsinfo.setModal(true);
    Patientsinfo.exec();
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

    proxyPersonas=new QSortFilterProxyModel(this);
    proxyPersonas->setSourceModel(modal1);
    proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas->setFilterKeyColumn(-1);
    //proxyPersonas->setFilterFixedString("ko");

    ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Surname"<<"Age"<<"Phone");


    ui->tableView->setModel(proxyPersonas);


    conn.connClose();
    qDebug() <<(proxyPersonas->rowCount());


}



void secDialog::on_lineEdit_textChanged(const QString &arg1)
{
proxyPersonas->setFilterFixedString(arg1);
}


void secDialog::on_cbColumnas_currentIndexChanged(int index)
{
        proxyPersonas->setFilterKeyColumn(index);
}

