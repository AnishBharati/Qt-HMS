#ifndef RECORD_H
#define RECORD_H

#include <QDialog>

namespace Ui {
class Record;
}

class Record : public QDialog
{
    Q_OBJECT

public:
    explicit Record(QWidget *parent = nullptr);
    ~Record();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::Record *ui;
};

#endif // RECORD_H
