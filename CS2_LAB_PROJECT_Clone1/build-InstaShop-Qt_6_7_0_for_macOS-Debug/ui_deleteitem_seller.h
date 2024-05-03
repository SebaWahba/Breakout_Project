/********************************************************************************
** Form generated from reading UI file 'deleteitem_seller.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEITEM_SELLER_H
#define UI_DELETEITEM_SELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_deleteitem_seller
{
public:
    QLabel *label_namedeleteseller;
    QLabel *label_deleteproductid;
    QLineEdit *lineEdit_namedeleteseller;
    QLineEdit *lineEdit_deleteproductid;
    QLabel *label_passproductdelete;
    QLineEdit *lineEdit_passproductdelete;

    void setupUi(QDialog *deleteitem_seller)
    {
        if (deleteitem_seller->objectName().isEmpty())
            deleteitem_seller->setObjectName("deleteitem_seller");
        deleteitem_seller->resize(1105, 738);
        label_namedeleteseller = new QLabel(deleteitem_seller);
        label_namedeleteseller->setObjectName("label_namedeleteseller");
        label_namedeleteseller->setGeometry(QRect(210, 200, 58, 16));
        label_deleteproductid = new QLabel(deleteitem_seller);
        label_deleteproductid->setObjectName("label_deleteproductid");
        label_deleteproductid->setGeometry(QRect(210, 260, 71, 21));
        lineEdit_namedeleteseller = new QLineEdit(deleteitem_seller);
        lineEdit_namedeleteseller->setObjectName("lineEdit_namedeleteseller");
        lineEdit_namedeleteseller->setGeometry(QRect(350, 200, 191, 31));
        lineEdit_deleteproductid = new QLineEdit(deleteitem_seller);
        lineEdit_deleteproductid->setObjectName("lineEdit_deleteproductid");
        lineEdit_deleteproductid->setGeometry(QRect(350, 250, 191, 31));
        label_passproductdelete = new QLabel(deleteitem_seller);
        label_passproductdelete->setObjectName("label_passproductdelete");
        label_passproductdelete->setGeometry(QRect(210, 320, 131, 21));
        lineEdit_passproductdelete = new QLineEdit(deleteitem_seller);
        lineEdit_passproductdelete->setObjectName("lineEdit_passproductdelete");
        lineEdit_passproductdelete->setGeometry(QRect(360, 320, 191, 31));

        retranslateUi(deleteitem_seller);

        QMetaObject::connectSlotsByName(deleteitem_seller);
    } // setupUi

    void retranslateUi(QDialog *deleteitem_seller)
    {
        deleteitem_seller->setWindowTitle(QCoreApplication::translate("deleteitem_seller", "Dialog", nullptr));
        label_namedeleteseller->setText(QCoreApplication::translate("deleteitem_seller", "Name:", nullptr));
        label_deleteproductid->setText(QCoreApplication::translate("deleteitem_seller", "ID:", nullptr));
        label_passproductdelete->setText(QCoreApplication::translate("deleteitem_seller", "Password (Product):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteitem_seller: public Ui_deleteitem_seller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEITEM_SELLER_H
