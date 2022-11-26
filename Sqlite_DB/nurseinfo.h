#ifndef NURSEINFO_H
#define NURSEINFO_H

#include <QDialog>
#include<QSortFilterProxyModel>

namespace Ui {
class NurseInfo;
}

class NurseInfo : public QDialog
{
    Q_OBJECT

public:
    explicit NurseInfo(QWidget *parent = nullptr);
    ~NurseInfo();
    QSortFilterProxyModel * proxyPersonas;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_cbColumnas_currentIndexChanged(int index);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::NurseInfo *ui;
};

#endif // NURSEINFO_H
