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
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from doctorsinfo");
    qry->exec();
    modal->setQuery(*qry);



    proxyPersonas=new QSortFilterProxyModel(this);
    proxyPersonas->setSourceModel(modal);
    proxyPersonas->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyPersonas->setFilterKeyColumn(-1);
    //proxyPersonas->setFilterFixedString("ko");

    ui->cbColumnas->addItems(QStringList()<<"ID"<<"Name"<<"Phone"<<"Email"<<"Expert of");


    ui->tableView->setModel(proxyPersonas);


    conn.connClose();
    qDebug() <<(proxyPersonas->rowCount());
}


void emergency::on_lineEdit_textChanged(const QString &arg1)
{
   proxyPersonas->setFilterFixedString(arg1);
}


void emergency::on_cbColumnas_currentIndexChanged(int index)
{
    proxyPersonas->setFilterKeyColumn(index);
}

