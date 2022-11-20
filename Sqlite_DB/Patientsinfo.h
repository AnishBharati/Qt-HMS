#ifndef patientsinfo_H
#define patientsinfo_H

#include <QDialog>
#include"login.h"
namespace Ui {
class patientsinfo;
}

class patientsinfo : public QDialog
{
    Q_OBJECT

public:

    explicit patientsinfo(QWidget *parent = nullptr);
    ~patientsinfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::patientsinfo *ui;
};

#endif // patientsinfo_H
