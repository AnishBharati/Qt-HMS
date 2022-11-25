#ifndef SAMPLE_H
#define SAMPLE_H

#include <QDialog>

namespace Ui {
class sample;
}

class sample : public QDialog
{
    Q_OBJECT

public:
    explicit sample(QWidget *parent = nullptr);
    ~sample();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sample *ui;
};

#endif // SAMPLE_H
