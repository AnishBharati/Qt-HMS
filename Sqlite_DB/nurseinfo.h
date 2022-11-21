#ifndef NURSEINFO_H
#define NURSEINFO_H

#include <QDialog>

namespace Ui {
class NurseInfo;
}

class NurseInfo : public QDialog
{
    Q_OBJECT

public:
    explicit NurseInfo(QWidget *parent = nullptr);
    ~NurseInfo();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::NurseInfo *ui;
};

#endif // NURSEINFO_H
