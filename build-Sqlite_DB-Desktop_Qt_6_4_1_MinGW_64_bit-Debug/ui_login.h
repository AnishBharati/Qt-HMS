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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
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
        groupBox->setGeometry(QRect(350, 90, 341, 301));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 210, 83, 29));
        pushButton->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 130, 195, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setAutoFillBackground(false);
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 50, 200, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_username = new QLineEdit(widget1);
        lineEdit_username->setObjectName("lineEdit_username");

        horizontalLayout_2->addWidget(lineEdit_username);

        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(30, 60, 301, 361));
        label_pic->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/neon-aesthetic-17.jpg")));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        groupBox->setTitle(QCoreApplication::translate("Login", "Signin", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
