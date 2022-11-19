/********************************************************************************
** Form generated from reading UI file 'Patientsinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTSINFO_H
#define UI_PATIENTSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_patientsinfo
{
public:
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *txt_id;
    QLabel *label_7;
    QLineEdit *txt_name;
    QLabel *label_8;
    QLineEdit *txt_surname;
    QLabel *label_9;
    QLineEdit *txt_age;
    QLabel *label_10;
    QLineEdit *txt_phone;
    QPushButton *pushButton;
    QLabel *label_sec_status;

    void setupUi(QDialog *patientsinfo)
    {
        if (patientsinfo->objectName().isEmpty())
            patientsinfo->setObjectName("patientsinfo");
        patientsinfo->resize(858, 555);
        groupBox = new QGroupBox(patientsinfo);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 44, 491, 421));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(14, 49, 16, 20));
        txt_id = new QLineEdit(groupBox);
        txt_id->setObjectName("txt_id");
        txt_id->setGeometry(QRect(86, 49, 251, 28));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(14, 96, 40, 20));
        txt_name = new QLineEdit(groupBox);
        txt_name->setObjectName("txt_name");
        txt_name->setGeometry(QRect(86, 96, 251, 28));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(14, 143, 58, 20));
        txt_surname = new QLineEdit(groupBox);
        txt_surname->setObjectName("txt_surname");
        txt_surname->setGeometry(QRect(86, 143, 251, 28));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(14, 190, 27, 20));
        txt_age = new QLineEdit(groupBox);
        txt_age->setObjectName("txt_age");
        txt_age->setGeometry(QRect(86, 190, 251, 28));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(14, 237, 65, 20));
        txt_phone = new QLineEdit(groupBox);
        txt_phone->setObjectName("txt_phone");
        txt_phone->setGeometry(QRect(86, 237, 251, 28));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 370, 101, 31));
        label_sec_status = new QLabel(patientsinfo);
        label_sec_status->setObjectName("label_sec_status");
        label_sec_status->setGeometry(QRect(120, 450, 63, 20));

        retranslateUi(patientsinfo);

        QMetaObject::connectSlotsByName(patientsinfo);
    } // setupUi

    void retranslateUi(QDialog *patientsinfo)
    {
        patientsinfo->setWindowTitle(QCoreApplication::translate("patientsinfo", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("patientsinfo", "GroupBox", nullptr));
        label_6->setText(QCoreApplication::translate("patientsinfo", "ID", nullptr));
        label_7->setText(QCoreApplication::translate("patientsinfo", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("patientsinfo", "Surname", nullptr));
        label_9->setText(QCoreApplication::translate("patientsinfo", "Age", nullptr));
        label_10->setText(QCoreApplication::translate("patientsinfo", "Phone no.", nullptr));
        pushButton->setText(QCoreApplication::translate("patientsinfo", "save", nullptr));
        label_sec_status->setText(QCoreApplication::translate("patientsinfo", "Text label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientsinfo: public Ui_patientsinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSINFO_H
