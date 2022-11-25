#ifndef DOCTORLOGIN_H
#define DOCTORLOGIN_H

#include <QDialog>

namespace Ui {
class Doctorlogin;
}

class Doctorlogin : public QDialog
{
    Q_OBJECT

public:
    explicit Doctorlogin(QWidget *parent = nullptr);
    ~Doctorlogin();

private:
    Ui::Doctorlogin *ui;
};

#endif // DOCTORLOGIN_H
