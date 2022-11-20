#ifndef EMERGENCY_H
#define EMERGENCY_H

#include <QDialog>
#include<QSortFilterProxyModel>
namespace Ui {
class emergency;
}

class emergency : public QDialog
{
    Q_OBJECT

public:
    explicit emergency(QWidget *parent = nullptr);
    ~emergency();
    QSortFilterProxyModel *proxyPersonas;

private slots:
    void on_pushButton_load_table_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_cbColumnas_currentIndexChanged(int index);

private:
    Ui::emergency *ui;
};

#endif // EMERGENCY_H
