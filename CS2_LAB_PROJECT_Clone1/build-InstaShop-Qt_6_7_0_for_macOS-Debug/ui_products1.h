/********************************************************************************
** Form generated from reading UI file 'products1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS1_H
#define UI_PRODUCTS1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Products1
{
public:
    QLabel *label_bakeriesimage;
    QLabel *label_dairyimage;
    QLabel *label_butcheryimage;
    QLabel *label_fruitsimage;
    QPushButton *pushButton_bakeriescakes;
    QPushButton *pushButton_dairy;
    QPushButton *pushButton_butcheryseafood;
    QPushButton *pushButton_fruitsvegetables;

    void setupUi(QDialog *Products1)
    {
        if (Products1->objectName().isEmpty())
            Products1->setObjectName("Products1");
        Products1->resize(1197, 783);
        label_bakeriesimage = new QLabel(Products1);
        label_bakeriesimage->setObjectName("label_bakeriesimage");
        label_bakeriesimage->setGeometry(QRect(20, 160, 221, 201));
        label_dairyimage = new QLabel(Products1);
        label_dairyimage->setObjectName("label_dairyimage");
        label_dairyimage->setGeometry(QRect(310, 170, 201, 181));
        label_butcheryimage = new QLabel(Products1);
        label_butcheryimage->setObjectName("label_butcheryimage");
        label_butcheryimage->setGeometry(QRect(580, 160, 271, 231));
        label_fruitsimage = new QLabel(Products1);
        label_fruitsimage->setObjectName("label_fruitsimage");
        label_fruitsimage->setGeometry(QRect(880, 160, 261, 221));
        pushButton_bakeriescakes = new QPushButton(Products1);
        pushButton_bakeriescakes->setObjectName("pushButton_bakeriescakes");
        pushButton_bakeriescakes->setGeometry(QRect(80, 90, 151, 51));
        pushButton_dairy = new QPushButton(Products1);
        pushButton_dairy->setObjectName("pushButton_dairy");
        pushButton_dairy->setGeometry(QRect(380, 90, 141, 51));
        pushButton_butcheryseafood = new QPushButton(Products1);
        pushButton_butcheryseafood->setObjectName("pushButton_butcheryseafood");
        pushButton_butcheryseafood->setGeometry(QRect(640, 90, 171, 51));
        pushButton_fruitsvegetables = new QPushButton(Products1);
        pushButton_fruitsvegetables->setObjectName("pushButton_fruitsvegetables");
        pushButton_fruitsvegetables->setGeometry(QRect(920, 90, 151, 51));

        retranslateUi(Products1);

        QMetaObject::connectSlotsByName(Products1);
    } // setupUi

    void retranslateUi(QDialog *Products1)
    {
        Products1->setWindowTitle(QCoreApplication::translate("Products1", "Dialog", nullptr));
        label_bakeriesimage->setText(QString());
        label_dairyimage->setText(QString());
        label_butcheryimage->setText(QString());
        label_fruitsimage->setText(QString());
        pushButton_bakeriescakes->setText(QCoreApplication::translate("Products1", "Bakeries and Cakes", nullptr));
        pushButton_dairy->setText(QCoreApplication::translate("Products1", "Dairy Products", nullptr));
        pushButton_butcheryseafood->setText(QCoreApplication::translate("Products1", "Butchery and Seafood", nullptr));
        pushButton_fruitsvegetables->setText(QCoreApplication::translate("Products1", "Fruits and Vegetables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Products1: public Ui_Products1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS1_H
