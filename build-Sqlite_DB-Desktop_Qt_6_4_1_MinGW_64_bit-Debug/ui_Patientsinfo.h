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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_patientsinfo
{
public:
    QLabel *label_sec_status;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QFrame *line;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *patientsinfo)
    {
        if (patientsinfo->objectName().isEmpty())
            patientsinfo->setObjectName("patientsinfo");
        patientsinfo->resize(858, 555);
        label_sec_status = new QLabel(patientsinfo);
        label_sec_status->setObjectName("label_sec_status");
        label_sec_status->setGeometry(QRect(80, 420, 63, 20));
        pushButton_2 = new QPushButton(patientsinfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 250, 261, 71));
        QFont font;
        font.setPointSize(10);
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(patientsinfo);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(490, 110, 261, 71));
        pushButton_3->setFont(font);
        label_4 = new QLabel(patientsinfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 10, 341, 41));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setUnderline(true);
        label_4->setFont(font1);
        line = new QFrame(patientsinfo);
        line->setObjectName("line");
        line->setGeometry(QRect(360, 80, 20, 321));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(patientsinfo);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 160, 301, 111));
        QFont font2;
        font2.setPointSize(11);
        textBrowser->setFont(font2);
        label = new QLabel(patientsinfo);
        label->setObjectName("label");
        label->setGeometry(QRect(600, 460, 241, 61));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label->setFont(font3);

        retranslateUi(patientsinfo);

        QMetaObject::connectSlotsByName(patientsinfo);
    } // setupUi

    void retranslateUi(QDialog *patientsinfo)
    {
        patientsinfo->setWindowTitle(QCoreApplication::translate("patientsinfo", "Dialog", nullptr));
        label_sec_status->setText(QCoreApplication::translate("patientsinfo", "Text label", nullptr));
        pushButton_2->setText(QCoreApplication::translate("patientsinfo", "Records", nullptr));
        pushButton_3->setText(QCoreApplication::translate("patientsinfo", "Emergency", nullptr));
        label_4->setText(QCoreApplication::translate("patientsinfo", "Hospital Management System", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("patientsinfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Welcome Everyone!!! Hospital Management System helps to keep records and help the patients in emergency. The documents or information can also be managed and sent to the respective person in case of emergency.</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("patientsinfo", "Admin Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientsinfo: public Ui_patientsinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSINFO_H
