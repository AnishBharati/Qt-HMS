#ifndef LOGIN_H
#define LOGIN_H


#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include"Patientsinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT
 public:
    QSqlDatabase mydb;
    void connClose(){
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);

    }
        bool connOpen()
        {
            mydb=QSqlDatabase::addDatabase("QSQLITE");
           mydb.setDatabaseName("C:/Users/jackq/Desktop/QT LOGIN SQLite3/Sqlite_DB/Database.db");

           if(!mydb.open()){
                   qDebug()<<("failed to open");
                   return false;
           }
                   else
                  qDebug()<<("connected");
            return true;


        }

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;

};
#endif // LOGIN_H
