/********************************************************************************
** Form generated from reading UI file 'bakeriesandcakes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAKERIESANDCAKES_H
#define UI_BAKERIESANDCAKES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BakeriesandCakes
{
public:
    QLineEdit *lineEdit_itemsearchbakeries;
    QPushButton *pushButton_SearchItemBakeries;
    QLabel *label_bakeriesproductname;
    QLabel *label_bakeriesproductprice;
    QLabel *label_bakeriesproductdesc;
    QLabel *label_bakeriesproductimage;
    QPushButton *pushButton_addbakeryproduct;
    QPushButton *pushButton_viewbakeriesproduct;

    void setupUi(QDialog *BakeriesandCakes)
    {
        if (BakeriesandCakes->objectName().isEmpty())
            BakeriesandCakes->setObjectName("BakeriesandCakes");
        BakeriesandCakes->resize(1136, 853);
        lineEdit_itemsearchbakeries = new QLineEdit(BakeriesandCakes);
        lineEdit_itemsearchbakeries->setObjectName("lineEdit_itemsearchbakeries");
        lineEdit_itemsearchbakeries->setGeometry(QRect(110, 70, 611, 71));
        pushButton_SearchItemBakeries = new QPushButton(BakeriesandCakes);
        pushButton_SearchItemBakeries->setObjectName("pushButton_SearchItemBakeries");
        pushButton_SearchItemBakeries->setGeometry(QRect(820, 70, 181, 61));
        label_bakeriesproductname = new QLabel(BakeriesandCakes);
        label_bakeriesproductname->setObjectName("label_bakeriesproductname");
        label_bakeriesproductname->setGeometry(QRect(100, 290, 58, 16));
        label_bakeriesproductprice = new QLabel(BakeriesandCakes);
        label_bakeriesproductprice->setObjectName("label_bakeriesproductprice");
        label_bakeriesproductprice->setGeometry(QRect(100, 350, 58, 16));
        label_bakeriesproductdesc = new QLabel(BakeriesandCakes);
        label_bakeriesproductdesc->setObjectName("label_bakeriesproductdesc");
        label_bakeriesproductdesc->setGeometry(QRect(100, 410, 58, 16));
        label_bakeriesproductimage = new QLabel(BakeriesandCakes);
        label_bakeriesproductimage->setObjectName("label_bakeriesproductimage");
        label_bakeriesproductimage->setGeometry(QRect(100, 460, 191, 131));
        pushButton_addbakeryproduct = new QPushButton(BakeriesandCakes);
        pushButton_addbakeryproduct->setObjectName("pushButton_addbakeryproduct");
        pushButton_addbakeryproduct->setGeometry(QRect(130, 180, 100, 32));
        pushButton_viewbakeriesproduct = new QPushButton(BakeriesandCakes);
        pushButton_viewbakeriesproduct->setObjectName("pushButton_viewbakeriesproduct");
        pushButton_viewbakeriesproduct->setGeometry(QRect(430, 180, 100, 32));

        retranslateUi(BakeriesandCakes);

        QMetaObject::connectSlotsByName(BakeriesandCakes);
    } // setupUi

    void retranslateUi(QDialog *BakeriesandCakes)
    {
        BakeriesandCakes->setWindowTitle(QCoreApplication::translate("BakeriesandCakes", "Dialog", nullptr));
        pushButton_SearchItemBakeries->setText(QCoreApplication::translate("BakeriesandCakes", "Search Item", nullptr));
        label_bakeriesproductname->setText(QCoreApplication::translate("BakeriesandCakes", "TextLabel", nullptr));
        label_bakeriesproductprice->setText(QCoreApplication::translate("BakeriesandCakes", "TextLabel", nullptr));
        label_bakeriesproductdesc->setText(QCoreApplication::translate("BakeriesandCakes", "TextLabel", nullptr));
        label_bakeriesproductimage->setText(QString());
        pushButton_addbakeryproduct->setText(QCoreApplication::translate("BakeriesandCakes", "Add Item", nullptr));
        pushButton_viewbakeriesproduct->setText(QCoreApplication::translate("BakeriesandCakes", "View Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BakeriesandCakes: public Ui_BakeriesandCakes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAKERIESANDCAKES_H
