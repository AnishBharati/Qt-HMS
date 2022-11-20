/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QLabel *label_third;
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
    QPushButton *pushButton_2;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName("secDialog");
        secDialog->resize(782, 536);
        label_third = new QLabel(secDialog);
        label_third->setObjectName("label_third");
        label_third->setGeometry(QRect(100, 470, 63, 20));
        groupBox = new QGroupBox(secDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(170, 40, 491, 421));
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
        pushButton_2 = new QPushButton(secDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(670, 20, 83, 29));

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QCoreApplication::translate("secDialog", "Dialog", nullptr));
        label_third->setText(QCoreApplication::translate("secDialog", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("secDialog", "GroupBox", nullptr));
        label_6->setText(QCoreApplication::translate("secDialog", "ID", nullptr));
        label_7->setText(QCoreApplication::translate("secDialog", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("secDialog", "Surname", nullptr));
        label_9->setText(QCoreApplication::translate("secDialog", "Age", nullptr));
        label_10->setText(QCoreApplication::translate("secDialog", "Phone no.", nullptr));
        pushButton->setText(QCoreApplication::translate("secDialog", "save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
