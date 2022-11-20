/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_4;
    QLabel *label_pic;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 440, 411, 61));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(380, 100, 341, 331));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        groupBox->setFont(font1);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 270, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(false);
        pushButton->setFont(font2);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 81, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setUnderline(false);
        label_2->setFont(font3);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 81, 31));
        label_3->setFont(font3);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(20, 100, 201, 31));
        lineEdit_username->setFont(font3);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(20, 200, 201, 31));
        lineEdit_password->setFont(font3);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 20, 341, 41));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setUnderline(true);
        label_4->setFont(font4);
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(50, 100, 301, 331));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Status", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "                            Login", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Hospital Management System", nullptr));
        label_pic->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
