/********************************************************************************
** Form generated from reading UI file 'fruitsandvegetables.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRUITSANDVEGETABLES_H
#define UI_FRUITSANDVEGETABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FruitsandVegetables
{
public:
    QLineEdit *lineEdit_searchfruits;
    QPushButton *pushButton_searchfruits;
    QLabel *label_productfruitsname;
    QLabel *label_fruitspriceproduct;
    QLabel *label_fruitsproductdesc;
    QLabel *label_fruitsproductimage;
    QPushButton *pushButton_addfruitsproduct;
    QPushButton *pushButton_viewfruitsproduct;

    void setupUi(QDialog *FruitsandVegetables)
    {
        if (FruitsandVegetables->objectName().isEmpty())
            FruitsandVegetables->setObjectName("FruitsandVegetables");
        FruitsandVegetables->resize(1184, 749);
        lineEdit_searchfruits = new QLineEdit(FruitsandVegetables);
        lineEdit_searchfruits->setObjectName("lineEdit_searchfruits");
        lineEdit_searchfruits->setGeometry(QRect(120, 80, 631, 71));
        pushButton_searchfruits = new QPushButton(FruitsandVegetables);
        pushButton_searchfruits->setObjectName("pushButton_searchfruits");
        pushButton_searchfruits->setGeometry(QRect(840, 80, 211, 61));
        label_productfruitsname = new QLabel(FruitsandVegetables);
        label_productfruitsname->setObjectName("label_productfruitsname");
        label_productfruitsname->setGeometry(QRect(140, 310, 58, 16));
        label_fruitspriceproduct = new QLabel(FruitsandVegetables);
        label_fruitspriceproduct->setObjectName("label_fruitspriceproduct");
        label_fruitspriceproduct->setGeometry(QRect(140, 390, 58, 16));
        label_fruitsproductdesc = new QLabel(FruitsandVegetables);
        label_fruitsproductdesc->setObjectName("label_fruitsproductdesc");
        label_fruitsproductdesc->setGeometry(QRect(140, 470, 58, 16));
        label_fruitsproductimage = new QLabel(FruitsandVegetables);
        label_fruitsproductimage->setObjectName("label_fruitsproductimage");
        label_fruitsproductimage->setGeometry(QRect(140, 540, 271, 171));
        pushButton_addfruitsproduct = new QPushButton(FruitsandVegetables);
        pushButton_addfruitsproduct->setObjectName("pushButton_addfruitsproduct");
        pushButton_addfruitsproduct->setGeometry(QRect(130, 210, 100, 32));
        pushButton_viewfruitsproduct = new QPushButton(FruitsandVegetables);
        pushButton_viewfruitsproduct->setObjectName("pushButton_viewfruitsproduct");
        pushButton_viewfruitsproduct->setGeometry(QRect(450, 210, 100, 32));

        retranslateUi(FruitsandVegetables);

        QMetaObject::connectSlotsByName(FruitsandVegetables);
    } // setupUi

    void retranslateUi(QDialog *FruitsandVegetables)
    {
        FruitsandVegetables->setWindowTitle(QCoreApplication::translate("FruitsandVegetables", "Dialog", nullptr));
        pushButton_searchfruits->setText(QCoreApplication::translate("FruitsandVegetables", "Search", nullptr));
        label_productfruitsname->setText(QCoreApplication::translate("FruitsandVegetables", "TextLabel", nullptr));
        label_fruitspriceproduct->setText(QCoreApplication::translate("FruitsandVegetables", "TextLabel", nullptr));
        label_fruitsproductdesc->setText(QCoreApplication::translate("FruitsandVegetables", "TextLabel", nullptr));
        label_fruitsproductimage->setText(QCoreApplication::translate("FruitsandVegetables", "TextLabel", nullptr));
        pushButton_addfruitsproduct->setText(QCoreApplication::translate("FruitsandVegetables", "Add Item", nullptr));
        pushButton_viewfruitsproduct->setText(QCoreApplication::translate("FruitsandVegetables", "View Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FruitsandVegetables: public Ui_FruitsandVegetables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRUITSANDVEGETABLES_H
