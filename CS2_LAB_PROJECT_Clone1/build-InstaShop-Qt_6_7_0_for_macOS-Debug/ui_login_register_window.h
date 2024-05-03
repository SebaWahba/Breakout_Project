/********************************************************************************
** Form generated from reading UI file 'login_register_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_REGISTER_WINDOW_H
#define UI_LOGIN_REGISTER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login_Register_Window
{
public:
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_Register;
    QPushButton *pushButton_login;
    QLabel *labelError_username_andpass_buyer;

    void setupUi(QDialog *Login_Register_Window)
    {
        if (Login_Register_Window->objectName().isEmpty())
            Login_Register_Window->setObjectName("Login_Register_Window");
        Login_Register_Window->resize(1087, 708);
        label_username = new QLabel(Login_Register_Window);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(160, 210, 141, 61));
        lineEdit_username = new QLineEdit(Login_Register_Window);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(380, 230, 211, 31));
        label_password = new QLabel(Login_Register_Window);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(160, 310, 121, 41));
        lineEdit_password = new QLineEdit(Login_Register_Window);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(380, 320, 221, 31));
        pushButton_Register = new QPushButton(Login_Register_Window);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setGeometry(QRect(500, 420, 161, 31));
        pushButton_login = new QPushButton(Login_Register_Window);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(150, 420, 151, 31));
        labelError_username_andpass_buyer = new QLabel(Login_Register_Window);
        labelError_username_andpass_buyer->setObjectName("labelError_username_andpass_buyer");
        labelError_username_andpass_buyer->setGeometry(QRect(150, 370, 301, 16));

        retranslateUi(Login_Register_Window);

        QMetaObject::connectSlotsByName(Login_Register_Window);
    } // setupUi

    void retranslateUi(QDialog *Login_Register_Window)
    {
        Login_Register_Window->setWindowTitle(QCoreApplication::translate("Login_Register_Window", "Dialog", nullptr));
        label_username->setText(QCoreApplication::translate("Login_Register_Window", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Login_Register_Window", "Password:", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("Login_Register_Window", "Register ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login_Register_Window", "Login", nullptr));
        labelError_username_andpass_buyer->setText(QCoreApplication::translate("Login_Register_Window", "<html><head/><body><p><span style=\" color:#ff2600;\">The username or password is incorrect, try again</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_Register_Window: public Ui_Login_Register_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_REGISTER_WINDOW_H
