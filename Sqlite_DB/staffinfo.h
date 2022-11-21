#ifndef STAFFINFO_H
#define STAFFINFO_H

#include <QDialog>

namespace Ui {
class StaffInfo;
}

class StaffInfo : public QDialog
{
    Q_OBJECT

public:
    explicit StaffInfo(QWidget *parent = nullptr);
    ~StaffInfo();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::StaffInfo *ui;
};

#endif // STAFFINFO_H
