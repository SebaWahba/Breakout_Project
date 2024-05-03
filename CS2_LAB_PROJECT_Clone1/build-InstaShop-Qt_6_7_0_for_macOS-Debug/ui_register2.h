/********************************************************************************
** Form generated from reading UI file 'register2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER2_H
#define UI_REGISTER2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register2
{
public:
    QLabel *label_fillinfosellerregsiter;
    QLabel *label_nameseller;
    QLabel *label_ageseller;
    QLabel *label_numseller;
    QLabel *label_passseller;
    QLabel *label_reenterpassseller;
    QLineEdit *lineEdit_nameseller;
    QLineEdit *lineEdit_ageseller;
    QLineEdit *lineEdit_numseller;
    QLineEdit *lineEdit_passseller;
    QLineEdit *lineEdit_reenterpassseller;
    QPushButton *pushButton_SubmitRegisterSeller;
    QLabel *labelErrorUsername_register2;
    QLabel *labelErrorPassword_register2;
    QLabel *labelErrorAge_register2;
    QLabel *label_email_register2;
    QLineEdit *lineEdit_email_register2;
    QLabel *labelErrorPhone_register2;
    QLabel *labelErrorEmail_register2;
    QLabel *labelErrorAllFields_register2;

    void setupUi(QDialog *register2)
    {
        if (register2->objectName().isEmpty())
            register2->setObjectName("register2");
        register2->resize(1104, 703);
        label_fillinfosellerregsiter = new QLabel(register2);
        label_fillinfosellerregsiter->setObjectName("label_fillinfosellerregsiter");
        label_fillinfosellerregsiter->setGeometry(QRect(140, 130, 291, 16));
        label_nameseller = new QLabel(register2);
        label_nameseller->setObjectName("label_nameseller");
        label_nameseller->setGeometry(QRect(120, 190, 58, 16));
        label_ageseller = new QLabel(register2);
        label_ageseller->setObjectName("label_ageseller");
        label_ageseller->setGeometry(QRect(120, 240, 58, 16));
        label_numseller = new QLabel(register2);
        label_numseller->setObjectName("label_numseller");
        label_numseller->setGeometry(QRect(120, 290, 58, 16));
        label_passseller = new QLabel(register2);
        label_passseller->setObjectName("label_passseller");
        label_passseller->setGeometry(QRect(120, 360, 111, 21));
        label_reenterpassseller = new QLabel(register2);
        label_reenterpassseller->setObjectName("label_reenterpassseller");
        label_reenterpassseller->setGeometry(QRect(120, 400, 121, 31));
        lineEdit_nameseller = new QLineEdit(register2);
        lineEdit_nameseller->setObjectName("lineEdit_nameseller");
        lineEdit_nameseller->setGeometry(QRect(240, 190, 113, 21));
        lineEdit_ageseller = new QLineEdit(register2);
        lineEdit_ageseller->setObjectName("lineEdit_ageseller");
        lineEdit_ageseller->setGeometry(QRect(240, 240, 113, 21));
        lineEdit_numseller = new QLineEdit(register2);
        lineEdit_numseller->setObjectName("lineEdit_numseller");
        lineEdit_numseller->setGeometry(QRect(240, 280, 113, 21));
        lineEdit_passseller = new QLineEdit(register2);
        lineEdit_passseller->setObjectName("lineEdit_passseller");
        lineEdit_passseller->setGeometry(QRect(240, 370, 113, 21));
        lineEdit_reenterpassseller = new QLineEdit(register2);
        lineEdit_reenterpassseller->setObjectName("lineEdit_reenterpassseller");
        lineEdit_reenterpassseller->setGeometry(QRect(240, 410, 113, 21));
        pushButton_SubmitRegisterSeller = new QPushButton(register2);
        pushButton_SubmitRegisterSeller->setObjectName("pushButton_SubmitRegisterSeller");
        pushButton_SubmitRegisterSeller->setGeometry(QRect(340, 457, 91, 21));
        labelErrorUsername_register2 = new QLabel(register2);
        labelErrorUsername_register2->setObjectName("labelErrorUsername_register2");
        labelErrorUsername_register2->setGeometry(QRect(390, 190, 151, 16));
        labelErrorPassword_register2 = new QLabel(register2);
        labelErrorPassword_register2->setObjectName("labelErrorPassword_register2");
        labelErrorPassword_register2->setGeometry(QRect(380, 380, 141, 16));
        labelErrorAge_register2 = new QLabel(register2);
        labelErrorAge_register2->setObjectName("labelErrorAge_register2");
        labelErrorAge_register2->setGeometry(QRect(390, 240, 161, 16));
        label_email_register2 = new QLabel(register2);
        label_email_register2->setObjectName("label_email_register2");
        label_email_register2->setGeometry(QRect(120, 330, 37, 12));
        lineEdit_email_register2 = new QLineEdit(register2);
        lineEdit_email_register2->setObjectName("lineEdit_email_register2");
        lineEdit_email_register2->setGeometry(QRect(240, 330, 113, 20));
        labelErrorPhone_register2 = new QLabel(register2);
        labelErrorPhone_register2->setObjectName("labelErrorPhone_register2");
        labelErrorPhone_register2->setGeometry(QRect(400, 290, 131, 16));
        labelErrorEmail_register2 = new QLabel(register2);
        labelErrorEmail_register2->setObjectName("labelErrorEmail_register2");
        labelErrorEmail_register2->setGeometry(QRect(400, 340, 91, 16));
        labelErrorAllFields_register2 = new QLabel(register2);
        labelErrorAllFields_register2->setObjectName("labelErrorAllFields_register2");
        labelErrorAllFields_register2->setGeometry(QRect(450, 460, 121, 16));

        retranslateUi(register2);

        QMetaObject::connectSlotsByName(register2);
    } // setupUi

    void retranslateUi(QDialog *register2)
    {
        register2->setWindowTitle(QCoreApplication::translate("register2", "Dialog", nullptr));
        label_fillinfosellerregsiter->setText(QCoreApplication::translate("register2", "Fill in your information", nullptr));
        label_nameseller->setText(QCoreApplication::translate("register2", "Name:", nullptr));
        label_ageseller->setText(QCoreApplication::translate("register2", "Age:", nullptr));
        label_numseller->setText(QCoreApplication::translate("register2", "Phone number:", nullptr));
        label_passseller->setText(QCoreApplication::translate("register2", "Password:", nullptr));
        label_reenterpassseller->setText(QCoreApplication::translate("register2", "Re-enter pass:", nullptr));
        pushButton_SubmitRegisterSeller->setText(QCoreApplication::translate("register2", "Submit", nullptr));
        labelErrorUsername_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" color:#ff0000;\">*This username already exists</span></p></body></html>", nullptr));
        labelErrorPassword_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not matching passwords</span></p></body></html>", nullptr));
        labelErrorAge_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" color:#ff0000;\">*Minimum age required is 16</span></p></body></html>", nullptr));
        label_email_register2->setText(QCoreApplication::translate("register2", "Email:", nullptr));
        labelErrorPhone_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not valid phone number</span></p></body></html>", nullptr));
        labelErrorEmail_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not valid email</span></p></body></html>", nullptr));
        labelErrorAllFields_register2->setText(QCoreApplication::translate("register2", "<html><head/><body><p><span style=\" font-size:10pt; color:#ff0000;\">*All fields must be fulfilled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register2: public Ui_register2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER2_H
