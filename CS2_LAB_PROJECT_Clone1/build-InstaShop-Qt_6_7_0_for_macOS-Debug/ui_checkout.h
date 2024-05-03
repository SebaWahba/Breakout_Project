/********************************************************************************
** Form generated from reading UI file 'checkout.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_checkout
{
public:
    QLabel *label_address;
    QLabel *label_cashorcredit;
    QLineEdit *lineEdit_address;
    QPushButton *pushButton_cashoption;
    QPushButton *pushButton_creditoption;

    void setupUi(QDialog *checkout)
    {
        if (checkout->objectName().isEmpty())
            checkout->setObjectName("checkout");
        checkout->resize(1110, 751);
        label_address = new QLabel(checkout);
        label_address->setObjectName("label_address");
        label_address->setGeometry(QRect(270, 80, 401, 91));
        label_cashorcredit = new QLabel(checkout);
        label_cashorcredit->setObjectName("label_cashorcredit");
        label_cashorcredit->setGeometry(QRect(300, 210, 471, 141));
        lineEdit_address = new QLineEdit(checkout);
        lineEdit_address->setObjectName("lineEdit_address");
        lineEdit_address->setGeometry(QRect(520, 90, 311, 51));
        pushButton_cashoption = new QPushButton(checkout);
        pushButton_cashoption->setObjectName("pushButton_cashoption");
        pushButton_cashoption->setGeometry(QRect(180, 500, 100, 32));
        pushButton_creditoption = new QPushButton(checkout);
        pushButton_creditoption->setObjectName("pushButton_creditoption");
        pushButton_creditoption->setGeometry(QRect(500, 500, 100, 32));

        retranslateUi(checkout);

        QMetaObject::connectSlotsByName(checkout);
    } // setupUi

    void retranslateUi(QDialog *checkout)
    {
        checkout->setWindowTitle(QCoreApplication::translate("checkout", "Dialog", nullptr));
        label_address->setText(QCoreApplication::translate("checkout", "Write your address:", nullptr));
        label_cashorcredit->setText(QCoreApplication::translate("checkout", "Would you like to pay cash or credit?", nullptr));
        pushButton_cashoption->setText(QCoreApplication::translate("checkout", "Cash", nullptr));
        pushButton_creditoption->setText(QCoreApplication::translate("checkout", "Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkout: public Ui_checkout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
