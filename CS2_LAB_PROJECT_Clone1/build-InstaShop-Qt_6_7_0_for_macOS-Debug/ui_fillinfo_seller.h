/********************************************************************************
** Form generated from reading UI file 'fillinfo_seller.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILLINFO_SELLER_H
#define UI_FILLINFO_SELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FillInfo_Seller
{
public:
    QLabel *label;
    QLabel *label_productnameseller;
    QLabel *label_productprice;
    QLabel *label_productid;
    QLabel *label_productdescription;
    QLabel *label_6;
    QLineEdit *lineEdit_nameseller;
    QLineEdit *lineEdit_priceseller;
    QLineEdit *lineEdit_idseller;
    QLineEdit *lineEdit_descriptionseller;
    QPushButton *pushButton_submit;
    QLabel *label_passproductseller;
    QLineEdit *lineEdit_passproductseller;

    void setupUi(QDialog *FillInfo_Seller)
    {
        if (FillInfo_Seller->objectName().isEmpty())
            FillInfo_Seller->setObjectName("FillInfo_Seller");
        FillInfo_Seller->resize(1137, 708);
        label = new QLabel(FillInfo_Seller);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 110, 241, 51));
        label_productnameseller = new QLabel(FillInfo_Seller);
        label_productnameseller->setObjectName("label_productnameseller");
        label_productnameseller->setGeometry(QRect(80, 180, 58, 16));
        label_productprice = new QLabel(FillInfo_Seller);
        label_productprice->setObjectName("label_productprice");
        label_productprice->setGeometry(QRect(90, 270, 58, 16));
        label_productid = new QLabel(FillInfo_Seller);
        label_productid->setObjectName("label_productid");
        label_productid->setGeometry(QRect(90, 320, 58, 16));
        label_productdescription = new QLabel(FillInfo_Seller);
        label_productdescription->setObjectName("label_productdescription");
        label_productdescription->setGeometry(QRect(80, 370, 131, 16));
        label_6 = new QLabel(FillInfo_Seller);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 420, 261, 151));
        lineEdit_nameseller = new QLineEdit(FillInfo_Seller);
        lineEdit_nameseller->setObjectName("lineEdit_nameseller");
        lineEdit_nameseller->setGeometry(QRect(220, 180, 113, 21));
        lineEdit_priceseller = new QLineEdit(FillInfo_Seller);
        lineEdit_priceseller->setObjectName("lineEdit_priceseller");
        lineEdit_priceseller->setGeometry(QRect(220, 280, 113, 21));
        lineEdit_idseller = new QLineEdit(FillInfo_Seller);
        lineEdit_idseller->setObjectName("lineEdit_idseller");
        lineEdit_idseller->setGeometry(QRect(220, 320, 113, 21));
        lineEdit_descriptionseller = new QLineEdit(FillInfo_Seller);
        lineEdit_descriptionseller->setObjectName("lineEdit_descriptionseller");
        lineEdit_descriptionseller->setGeometry(QRect(230, 370, 113, 21));
        pushButton_submit = new QPushButton(FillInfo_Seller);
        pushButton_submit->setObjectName("pushButton_submit");
        pushButton_submit->setGeometry(QRect(790, 590, 201, 51));
        label_passproductseller = new QLabel(FillInfo_Seller);
        label_passproductseller->setObjectName("label_passproductseller");
        label_passproductseller->setGeometry(QRect(80, 220, 58, 16));
        lineEdit_passproductseller = new QLineEdit(FillInfo_Seller);
        lineEdit_passproductseller->setObjectName("lineEdit_passproductseller");
        lineEdit_passproductseller->setGeometry(QRect(220, 220, 113, 21));

        retranslateUi(FillInfo_Seller);

        QMetaObject::connectSlotsByName(FillInfo_Seller);
    } // setupUi

    void retranslateUi(QDialog *FillInfo_Seller)
    {
        FillInfo_Seller->setWindowTitle(QCoreApplication::translate("FillInfo_Seller", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FillInfo_Seller", "Fill in the Information of your Product:", nullptr));
        label_productnameseller->setText(QCoreApplication::translate("FillInfo_Seller", "Name:", nullptr));
        label_productprice->setText(QCoreApplication::translate("FillInfo_Seller", "Price:", nullptr));
        label_productid->setText(QCoreApplication::translate("FillInfo_Seller", "ID:", nullptr));
        label_productdescription->setText(QCoreApplication::translate("FillInfo_Seller", "Product Description:", nullptr));
        label_6->setText(QString());
        pushButton_submit->setText(QCoreApplication::translate("FillInfo_Seller", "Submit ", nullptr));
        label_passproductseller->setText(QCoreApplication::translate("FillInfo_Seller", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FillInfo_Seller: public Ui_FillInfo_Seller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLINFO_SELLER_H
