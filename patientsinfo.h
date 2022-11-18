#ifndef PATIENTSINFO_H
#define PATIENTSINFO_H

#include <QDialog>

namespace Ui {
class patientsinfo;
}

class patientsinfo : public QDialog
{
    Q_OBJECT

public:
    explicit patientsinfo(QWidget *parent = nullptr);
    ~patientsinfo();

private:
    Ui::patientsinfo *ui;
};

#endif // PATIENTSINFO_H
