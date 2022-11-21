#include "emergency.h"
#include "ui_emergency.h"
#include"login.h"
#include<QDebug>
#include<QStringList>
#include<QSortFilterProxyModel>

emergency::emergency(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergency)
{
    ui->setupUi(this);
}

emergency::~emergency()
{
    delete ui;
}

void emergency::on_pushButton_load_table_clicked()
{
    Login conn;
    QSqlQueryModel * modal100=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from doctorsinfo");
    qry->exec();
    modal100->setQuery(*qry);



    proxyPersonas1=new QSortFilterProxyModel(this);
    proxyPersonas1->setSourceModel(modal100);
    proxyPersonas1->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas1->setFilterKeyColumn(-1);
    //proxyPersonas1->setFilterFixedString("ko");

    ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Phone"<<"Email"<<"Specialist");


    ui->tableView->setModel(proxyPersonas1);


    conn.connClose();
    qDebug() <<(proxyPersonas1->rowCount());
}


void emergency::on_lineEdit_textChanged(const QString &arg1)
{
   proxyPersonas1->setFilterFixedString(arg1);
}


void emergency::on_cbColumnas_currentIndexChanged(int index)
{
    proxyPersonas1->setFilterKeyColumn(index);
}


void emergency::on_pushButton_back_clicked()
{
    this->hide();
    patientsinfo Patientsinfo;
    Patientsinfo.setModal(true);
    Patientsinfo.exec();
}

