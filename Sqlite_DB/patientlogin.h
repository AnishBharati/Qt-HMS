#ifndef PATIENTLOGIN_H
#define PATIENTLOGIN_H

#include <QDialog>

namespace Ui {
class Patientlogin;
}

class Patientlogin : public QDialog
{
    Q_OBJECT

public:
    explicit Patientlogin(QWidget *parent = nullptr);
    ~Patientlogin();

private:
    Ui::Patientlogin *ui;
};

#endif // PATIENTLOGIN_H
