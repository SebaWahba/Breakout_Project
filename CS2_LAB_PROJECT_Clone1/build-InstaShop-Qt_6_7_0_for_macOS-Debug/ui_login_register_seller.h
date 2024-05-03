/********************************************************************************
** Form generated from reading UI file 'login_register_seller.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_REGISTER_SELLER_H
#define UI_LOGIN_REGISTER_SELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login_register_seller
{
public:
    QLabel *label_username_login_register_seller;
    QLabel *label_password_login_register_seller;
    QLineEdit *lineEdit_username_loginreg_seller;
    QLineEdit *lineEdit_pass_loginreg_seller;
    QPushButton *pushButton_login_seller;
    QPushButton *pushButton_register_Seller;
    QLabel *labelError_username_andpass_seller;

    void setupUi(QDialog *login_register_seller)
    {
        if (login_register_seller->objectName().isEmpty())
            login_register_seller->setObjectName("login_register_seller");
        login_register_seller->resize(1151, 734);
        label_username_login_register_seller = new QLabel(login_register_seller);
        label_username_login_register_seller->setObjectName("label_username_login_register_seller");
        label_username_login_register_seller->setGeometry(QRect(200, 210, 151, 21));
        label_password_login_register_seller = new QLabel(login_register_seller);
        label_password_login_register_seller->setObjectName("label_password_login_register_seller");
        label_password_login_register_seller->setGeometry(QRect(200, 280, 151, 21));
        lineEdit_username_loginreg_seller = new QLineEdit(login_register_seller);
        lineEdit_username_loginreg_seller->setObjectName("lineEdit_username_loginreg_seller");
        lineEdit_username_loginreg_seller->setGeometry(QRect(420, 210, 251, 31));
        lineEdit_pass_loginreg_seller = new QLineEdit(login_register_seller);
        lineEdit_pass_loginreg_seller->setObjectName("lineEdit_pass_loginreg_seller");
        lineEdit_pass_loginreg_seller->setGeometry(QRect(410, 280, 261, 31));
        lineEdit_pass_loginreg_seller->setEchoMode(QLineEdit::Password);
        pushButton_login_seller = new QPushButton(login_register_seller);
        pushButton_login_seller->setObjectName("pushButton_login_seller");
        pushButton_login_seller->setGeometry(QRect(230, 380, 151, 51));
        pushButton_register_Seller = new QPushButton(login_register_seller);
        pushButton_register_Seller->setObjectName("pushButton_register_Seller");
        pushButton_register_Seller->setGeometry(QRect(540, 380, 151, 51));
        labelError_username_andpass_seller = new QLabel(login_register_seller);
        labelError_username_andpass_seller->setObjectName("labelError_username_andpass_seller");
        labelError_username_andpass_seller->setGeometry(QRect(200, 340, 311, 16));

        retranslateUi(login_register_seller);

        QMetaObject::connectSlotsByName(login_register_seller);
    } // setupUi

    void retranslateUi(QDialog *login_register_seller)
    {
        login_register_seller->setWindowTitle(QCoreApplication::translate("login_register_seller", "Dialog", nullptr));
        label_username_login_register_seller->setText(QCoreApplication::translate("login_register_seller", "Username:", nullptr));
        label_password_login_register_seller->setText(QCoreApplication::translate("login_register_seller", "Password:", nullptr));
        pushButton_login_seller->setText(QCoreApplication::translate("login_register_seller", "Login", nullptr));
        pushButton_register_Seller->setText(QCoreApplication::translate("login_register_seller", "Register", nullptr));
        labelError_username_andpass_seller->setText(QCoreApplication::translate("login_register_seller", "<html><head/><body><p><span style=\" color:#ff2600;\">The username or password or both are incorrect</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_register_seller: public Ui_login_register_seller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_REGISTER_SELLER_H
