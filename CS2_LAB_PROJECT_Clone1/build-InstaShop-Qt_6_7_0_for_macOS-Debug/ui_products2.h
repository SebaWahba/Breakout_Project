/********************************************************************************
** Form generated from reading UI file 'products2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS2_H
#define UI_PRODUCTS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Products2
{
public:
    QPushButton *pushButton_additemseller;
    QPushButton *pushButton_deleteseller;

    void setupUi(QDialog *Products2)
    {
        if (Products2->objectName().isEmpty())
            Products2->setObjectName("Products2");
        Products2->resize(1140, 866);
        pushButton_additemseller = new QPushButton(Products2);
        pushButton_additemseller->setObjectName("pushButton_additemseller");
        pushButton_additemseller->setGeometry(QRect(60, 130, 221, 101));
        pushButton_deleteseller = new QPushButton(Products2);
        pushButton_deleteseller->setObjectName("pushButton_deleteseller");
        pushButton_deleteseller->setGeometry(QRect(50, 420, 241, 81));

        retranslateUi(Products2);

        QMetaObject::connectSlotsByName(Products2);
    } // setupUi

    void retranslateUi(QDialog *Products2)
    {
        Products2->setWindowTitle(QCoreApplication::translate("Products2", "Dialog", nullptr));
        pushButton_additemseller->setText(QCoreApplication::translate("Products2", " Add Item", nullptr));
        pushButton_deleteseller->setText(QCoreApplication::translate("Products2", "Delete Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Products2: public Ui_Products2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS2_H
