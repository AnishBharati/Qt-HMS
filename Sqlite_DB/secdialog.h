#ifndef SECDIALOG_H
#define SECDIALOG_H


#include <QDialog>
#include"Patientsinfo.h"
#include<QSortFilterProxyModel>
namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);
    ~secDialog();
    QSortFilterProxyModel *proxyPersonas2;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_cbColumnas_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::secDialog *ui;
};

#endif // SECDIALOG_H
