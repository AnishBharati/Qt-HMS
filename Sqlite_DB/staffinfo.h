#ifndef STAFFINFO_H
#define STAFFINFO_H

#include <QDialog>
#include<QSortFilterProxyModel>

namespace Ui {
class StaffInfo;
}

class StaffInfo : public QDialog
{
    Q_OBJECT

public:
    explicit StaffInfo(QWidget *parent = nullptr);
    ~StaffInfo();

    QSortFilterProxyModel *  proxyPersonas;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_cbColumnas_currentIndexChanged(int index);

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::StaffInfo *ui;
};

#endif // STAFFINFO_H
