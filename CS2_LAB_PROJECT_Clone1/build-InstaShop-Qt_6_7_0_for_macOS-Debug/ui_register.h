/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QLabel *label_nameregister;
    QLabel *label_number;
    QLabel *label_email;
    QLabel *label_age;
    QLabel *label_passregister;
    QLabel *label_reenterpass;
    QLineEdit *lineEdit_nameregister;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_reenterpass;
    QPushButton *pushButton_SubmitRegisterBuyer;
    QLabel *labelErrorUsername;
    QLabel *labelErrorPass;
    QLabel *labelErrorAge_register;
    QLabel *labelErrorPhone_register;
    QLabel *labelErrorEmail_register;
    QLabel *labelErrorAllFields_register;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1062, 735);
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 60, 291, 71));
        label_nameregister = new QLabel(Register);
        label_nameregister->setObjectName("label_nameregister");
        label_nameregister->setGeometry(QRect(50, 190, 58, 16));
        label_number = new QLabel(Register);
        label_number->setObjectName("label_number");
        label_number->setGeometry(QRect(50, 240, 111, 16));
        label_email = new QLabel(Register);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(50, 290, 121, 16));
        label_age = new QLabel(Register);
        label_age->setObjectName("label_age");
        label_age->setGeometry(QRect(50, 340, 58, 16));
        label_passregister = new QLabel(Register);
        label_passregister->setObjectName("label_passregister");
        label_passregister->setGeometry(QRect(50, 390, 91, 16));
        label_reenterpass = new QLabel(Register);
        label_reenterpass->setObjectName("label_reenterpass");
        label_reenterpass->setGeometry(QRect(50, 440, 141, 21));
        lineEdit_nameregister = new QLineEdit(Register);
        lineEdit_nameregister->setObjectName("lineEdit_nameregister");
        lineEdit_nameregister->setGeometry(QRect(210, 190, 151, 21));
        lineEdit_num = new QLineEdit(Register);
        lineEdit_num->setObjectName("lineEdit_num");
        lineEdit_num->setGeometry(QRect(210, 240, 151, 21));
        lineEdit_email = new QLineEdit(Register);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(210, 290, 151, 21));
        lineEdit_age = new QLineEdit(Register);
        lineEdit_age->setObjectName("lineEdit_age");
        lineEdit_age->setGeometry(QRect(210, 340, 141, 21));
        lineEdit_pass = new QLineEdit(Register);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(220, 390, 131, 21));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        lineEdit_reenterpass = new QLineEdit(Register);
        lineEdit_reenterpass->setObjectName("lineEdit_reenterpass");
        lineEdit_reenterpass->setGeometry(QRect(220, 440, 131, 21));
        lineEdit_reenterpass->setEchoMode(QLineEdit::Password);
        pushButton_SubmitRegisterBuyer = new QPushButton(Register);
        pushButton_SubmitRegisterBuyer->setObjectName("pushButton_SubmitRegisterBuyer");
        pushButton_SubmitRegisterBuyer->setGeometry(QRect(350, 517, 101, 21));
        labelErrorUsername = new QLabel(Register);
        labelErrorUsername->setObjectName("labelErrorUsername");
        labelErrorUsername->setGeometry(QRect(420, 190, 151, 20));
        labelErrorPass = new QLabel(Register);
        labelErrorPass->setObjectName("labelErrorPass");
        labelErrorPass->setGeometry(QRect(420, 440, 171, 31));
        labelErrorAge_register = new QLabel(Register);
        labelErrorAge_register->setObjectName("labelErrorAge_register");
        labelErrorAge_register->setGeometry(QRect(420, 340, 181, 16));
        labelErrorPhone_register = new QLabel(Register);
        labelErrorPhone_register->setObjectName("labelErrorPhone_register");
        labelErrorPhone_register->setGeometry(QRect(440, 240, 111, 16));
        labelErrorEmail_register = new QLabel(Register);
        labelErrorEmail_register->setObjectName("labelErrorEmail_register");
        labelErrorEmail_register->setGeometry(QRect(450, 290, 111, 16));
        labelErrorAllFields_register = new QLabel(Register);
        labelErrorAllFields_register->setObjectName("labelErrorAllFields_register");
        labelErrorAllFields_register->setGeometry(QRect(490, 520, 131, 16));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "Please Fill in Your Information:", nullptr));
        label_nameregister->setText(QCoreApplication::translate("Register", "Name:", nullptr));
        label_number->setText(QCoreApplication::translate("Register", "Phone Number:", nullptr));
        label_email->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        label_age->setText(QCoreApplication::translate("Register", "Age:", nullptr));
        label_passregister->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        label_reenterpass->setText(QCoreApplication::translate("Register", "Re-Enter Password:", nullptr));
        pushButton_SubmitRegisterBuyer->setText(QCoreApplication::translate("Register", "Submit", nullptr));
        labelErrorUsername->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" color:#ff0000;\">*This username already exists</span></p></body></html>", nullptr));
        labelErrorPass->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not matching passwords</span></p></body></html>", nullptr));
        labelErrorAge_register->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" color:#ff0000;\">*Minimum age required is 16</span></p></body></html>", nullptr));
        labelErrorPhone_register->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not valid phone number</span></p></body></html>", nullptr));
        labelErrorEmail_register->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not valid email</span></p></body></html>", nullptr));
        labelErrorAllFields_register->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">*All fields must be fulfilled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
