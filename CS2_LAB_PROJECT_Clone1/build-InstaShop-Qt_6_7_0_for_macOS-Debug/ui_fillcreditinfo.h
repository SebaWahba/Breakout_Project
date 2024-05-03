/********************************************************************************
** Form generated from reading UI file 'fillcreditinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILLCREDITINFO_H
#define UI_FILLCREDITINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FillCreditinfo
{
public:
    QLabel *label_cardname;
    QLabel *label_cardccvc;
    QLabel *label_cardnum;
    QLabel *label_totalamount;
    QLineEdit *lineEdit_cardname;
    QLineEdit *lineEdit_cardcvc;
    QLineEdit *lineEdit_cardnum;
    QPushButton *pushButton_submitpayment;
    QLabel *labelErrorCVC_credit;
    QLabel *labelErrorCardNum_credit;
    QLabel *labelErrorAllFields_credit;
    QGroupBox *groupBox;
    QComboBox *comboBox_creditMonth;
    QComboBox *comboBox_creditDay;

    void setupUi(QDialog *FillCreditinfo)
    {
        if (FillCreditinfo->objectName().isEmpty())
            FillCreditinfo->setObjectName("FillCreditinfo");
        FillCreditinfo->resize(1158, 715);
        label_cardname = new QLabel(FillCreditinfo);
        label_cardname->setObjectName("label_cardname");
        label_cardname->setGeometry(QRect(120, 60, 141, 31));
        label_cardccvc = new QLabel(FillCreditinfo);
        label_cardccvc->setObjectName("label_cardccvc");
        label_cardccvc->setGeometry(QRect(120, 270, 58, 16));
        label_cardnum = new QLabel(FillCreditinfo);
        label_cardnum->setObjectName("label_cardnum");
        label_cardnum->setGeometry(QRect(120, 320, 81, 16));
        label_totalamount = new QLabel(FillCreditinfo);
        label_totalamount->setObjectName("label_totalamount");
        label_totalamount->setGeometry(QRect(120, 380, 101, 61));
        lineEdit_cardname = new QLineEdit(FillCreditinfo);
        lineEdit_cardname->setObjectName("lineEdit_cardname");
        lineEdit_cardname->setGeometry(QRect(330, 70, 113, 21));
        lineEdit_cardcvc = new QLineEdit(FillCreditinfo);
        lineEdit_cardcvc->setObjectName("lineEdit_cardcvc");
        lineEdit_cardcvc->setGeometry(QRect(330, 270, 113, 21));
        lineEdit_cardnum = new QLineEdit(FillCreditinfo);
        lineEdit_cardnum->setObjectName("lineEdit_cardnum");
        lineEdit_cardnum->setGeometry(QRect(330, 310, 113, 21));
        pushButton_submitpayment = new QPushButton(FillCreditinfo);
        pushButton_submitpayment->setObjectName("pushButton_submitpayment");
        pushButton_submitpayment->setGeometry(QRect(150, 510, 100, 32));
        labelErrorCVC_credit = new QLabel(FillCreditinfo);
        labelErrorCVC_credit->setObjectName("labelErrorCVC_credit");
        labelErrorCVC_credit->setGeometry(QRect(480, 270, 81, 16));
        labelErrorCardNum_credit = new QLabel(FillCreditinfo);
        labelErrorCardNum_credit->setObjectName("labelErrorCardNum_credit");
        labelErrorCardNum_credit->setGeometry(QRect(480, 310, 111, 20));
        labelErrorAllFields_credit = new QLabel(FillCreditinfo);
        labelErrorAllFields_credit->setObjectName("labelErrorAllFields_credit");
        labelErrorAllFields_credit->setGeometry(QRect(280, 520, 161, 16));
        groupBox = new QGroupBox(FillCreditinfo);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 90, 321, 151));
        comboBox_creditMonth = new QComboBox(groupBox);
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->addItem(QString());
        comboBox_creditMonth->setObjectName("comboBox_creditMonth");
        comboBox_creditMonth->setGeometry(QRect(150, 20, 55, 22));
        comboBox_creditDay = new QComboBox(groupBox);
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->addItem(QString());
        comboBox_creditDay->setObjectName("comboBox_creditDay");
        comboBox_creditDay->setGeometry(QRect(240, 20, 55, 22));

        retranslateUi(FillCreditinfo);

        QMetaObject::connectSlotsByName(FillCreditinfo);
    } // setupUi

    void retranslateUi(QDialog *FillCreditinfo)
    {
        FillCreditinfo->setWindowTitle(QCoreApplication::translate("FillCreditinfo", "Dialog", nullptr));
        label_cardname->setText(QCoreApplication::translate("FillCreditinfo", "Cardholder Name:", nullptr));
        label_cardccvc->setText(QCoreApplication::translate("FillCreditinfo", "CVC", nullptr));
        label_cardnum->setText(QCoreApplication::translate("FillCreditinfo", "Card No.:", nullptr));
        label_totalamount->setText(QCoreApplication::translate("FillCreditinfo", "Total:", nullptr));
        pushButton_submitpayment->setText(QCoreApplication::translate("FillCreditinfo", "Submit ", nullptr));
        labelErrorCVC_credit->setText(QCoreApplication::translate("FillCreditinfo", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not a valid CVC</span></p></body></html>", nullptr));
        labelErrorCardNum_credit->setText(QCoreApplication::translate("FillCreditinfo", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not valid Card number</span></p></body></html>", nullptr));
        labelErrorAllFields_credit->setText(QCoreApplication::translate("FillCreditinfo", "<html><head/><body><p><span style=\" color:#ff0000;\">*All fields are required to be fulfilled</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FillCreditinfo", "Expiry date", nullptr));
        comboBox_creditMonth->setItemText(0, QCoreApplication::translate("FillCreditinfo", "January ", nullptr));
        comboBox_creditMonth->setItemText(1, QCoreApplication::translate("FillCreditinfo", "February", nullptr));
        comboBox_creditMonth->setItemText(2, QCoreApplication::translate("FillCreditinfo", "March ", nullptr));
        comboBox_creditMonth->setItemText(3, QCoreApplication::translate("FillCreditinfo", "April ", nullptr));
        comboBox_creditMonth->setItemText(4, QCoreApplication::translate("FillCreditinfo", "May", nullptr));
        comboBox_creditMonth->setItemText(5, QCoreApplication::translate("FillCreditinfo", "June", nullptr));
        comboBox_creditMonth->setItemText(6, QCoreApplication::translate("FillCreditinfo", "July", nullptr));
        comboBox_creditMonth->setItemText(7, QCoreApplication::translate("FillCreditinfo", "August", nullptr));
        comboBox_creditMonth->setItemText(8, QCoreApplication::translate("FillCreditinfo", "September", nullptr));
        comboBox_creditMonth->setItemText(9, QCoreApplication::translate("FillCreditinfo", "October", nullptr));
        comboBox_creditMonth->setItemText(10, QCoreApplication::translate("FillCreditinfo", "November", nullptr));
        comboBox_creditMonth->setItemText(11, QCoreApplication::translate("FillCreditinfo", "December", nullptr));

        comboBox_creditDay->setItemText(0, QCoreApplication::translate("FillCreditinfo", "1", nullptr));
        comboBox_creditDay->setItemText(1, QCoreApplication::translate("FillCreditinfo", "2", nullptr));
        comboBox_creditDay->setItemText(2, QCoreApplication::translate("FillCreditinfo", "3", nullptr));
        comboBox_creditDay->setItemText(3, QCoreApplication::translate("FillCreditinfo", "4", nullptr));
        comboBox_creditDay->setItemText(4, QCoreApplication::translate("FillCreditinfo", "5", nullptr));
        comboBox_creditDay->setItemText(5, QCoreApplication::translate("FillCreditinfo", "6", nullptr));
        comboBox_creditDay->setItemText(6, QCoreApplication::translate("FillCreditinfo", "7", nullptr));
        comboBox_creditDay->setItemText(7, QCoreApplication::translate("FillCreditinfo", "8", nullptr));
        comboBox_creditDay->setItemText(8, QCoreApplication::translate("FillCreditinfo", "9", nullptr));
        comboBox_creditDay->setItemText(9, QCoreApplication::translate("FillCreditinfo", "10", nullptr));
        comboBox_creditDay->setItemText(10, QCoreApplication::translate("FillCreditinfo", "11", nullptr));
        comboBox_creditDay->setItemText(11, QCoreApplication::translate("FillCreditinfo", "12", nullptr));
        comboBox_creditDay->setItemText(12, QCoreApplication::translate("FillCreditinfo", "13", nullptr));
        comboBox_creditDay->setItemText(13, QCoreApplication::translate("FillCreditinfo", "14", nullptr));
        comboBox_creditDay->setItemText(14, QCoreApplication::translate("FillCreditinfo", "15", nullptr));
        comboBox_creditDay->setItemText(15, QCoreApplication::translate("FillCreditinfo", "16", nullptr));
        comboBox_creditDay->setItemText(16, QCoreApplication::translate("FillCreditinfo", "17", nullptr));
        comboBox_creditDay->setItemText(17, QCoreApplication::translate("FillCreditinfo", "18", nullptr));
        comboBox_creditDay->setItemText(18, QCoreApplication::translate("FillCreditinfo", "19", nullptr));
        comboBox_creditDay->setItemText(19, QCoreApplication::translate("FillCreditinfo", "20", nullptr));
        comboBox_creditDay->setItemText(20, QCoreApplication::translate("FillCreditinfo", "21", nullptr));
        comboBox_creditDay->setItemText(21, QCoreApplication::translate("FillCreditinfo", "22", nullptr));
        comboBox_creditDay->setItemText(22, QCoreApplication::translate("FillCreditinfo", "23", nullptr));
        comboBox_creditDay->setItemText(23, QCoreApplication::translate("FillCreditinfo", "24", nullptr));
        comboBox_creditDay->setItemText(24, QCoreApplication::translate("FillCreditinfo", "25", nullptr));
        comboBox_creditDay->setItemText(25, QCoreApplication::translate("FillCreditinfo", "26", nullptr));
        comboBox_creditDay->setItemText(26, QCoreApplication::translate("FillCreditinfo", "27", nullptr));
        comboBox_creditDay->setItemText(27, QCoreApplication::translate("FillCreditinfo", "28", nullptr));
        comboBox_creditDay->setItemText(28, QCoreApplication::translate("FillCreditinfo", "29", nullptr));
        comboBox_creditDay->setItemText(29, QCoreApplication::translate("FillCreditinfo", "30", nullptr));
        comboBox_creditDay->setItemText(30, QCoreApplication::translate("FillCreditinfo", "31", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FillCreditinfo: public Ui_FillCreditinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLCREDITINFO_H
