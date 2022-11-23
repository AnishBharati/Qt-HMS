#ifndef DOCTORINFO_H
#define DOCTORINFO_H

#include <QDialog>

namespace Ui {
class Doctorinfo;
}

class Doctorinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Doctorinfo(QWidget *parent = nullptr);
    ~Doctorinfo();

private:
    Ui::Doctorinfo *ui;
};

#endif // DOCTORINFO_H
