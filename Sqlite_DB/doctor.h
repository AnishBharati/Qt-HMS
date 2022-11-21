#ifndef DOCTOR_H
#define DOCTOR_H

#include <QDialog>
#include"login.h"
#include<QSortFilterProxyModel>

namespace Ui {
class Doctor;
}

class Doctor : public QDialog
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();
        QSortFilterProxyModel *proxyPersonas;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_cbColumnas_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

private:
    Ui::Doctor *ui;
};

#endif // DOCTOR_H
