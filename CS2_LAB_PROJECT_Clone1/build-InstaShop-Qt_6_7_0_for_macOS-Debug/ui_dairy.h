/********************************************************************************
** Form generated from reading UI file 'dairy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAIRY_H
#define UI_DAIRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dairy
{
public:
    QLineEdit *lineEdit_searchdairy;
    QPushButton *pushButton_Searchdairy;
    QPushButton *pushButton_adddairyproduct;
    QLabel *label_dairyproductname;
    QLabel *label_dairyproductprice;
    QLabel *label_dairyproductdes;
    QLabel *label_dairyproductimage;
    QPushButton *pushButton_viewdairyproduct;

    void setupUi(QDialog *Dairy)
    {
        if (Dairy->objectName().isEmpty())
            Dairy->setObjectName("Dairy");
        Dairy->resize(1157, 734);
        lineEdit_searchdairy = new QLineEdit(Dairy);
        lineEdit_searchdairy->setObjectName("lineEdit_searchdairy");
        lineEdit_searchdairy->setGeometry(QRect(180, 70, 551, 71));
        pushButton_Searchdairy = new QPushButton(Dairy);
        pushButton_Searchdairy->setObjectName("pushButton_Searchdairy");
        pushButton_Searchdairy->setGeometry(QRect(830, 80, 191, 51));
        pushButton_adddairyproduct = new QPushButton(Dairy);
        pushButton_adddairyproduct->setObjectName("pushButton_adddairyproduct");
        pushButton_adddairyproduct->setGeometry(QRect(120, 290, 100, 32));
        label_dairyproductname = new QLabel(Dairy);
        label_dairyproductname->setObjectName("label_dairyproductname");
        label_dairyproductname->setGeometry(QRect(130, 360, 101, 31));
        label_dairyproductprice = new QLabel(Dairy);
        label_dairyproductprice->setObjectName("label_dairyproductprice");
        label_dairyproductprice->setGeometry(QRect(140, 420, 101, 31));
        label_dairyproductdes = new QLabel(Dairy);
        label_dairyproductdes->setObjectName("label_dairyproductdes");
        label_dairyproductdes->setGeometry(QRect(140, 500, 101, 31));
        label_dairyproductimage = new QLabel(Dairy);
        label_dairyproductimage->setObjectName("label_dairyproductimage");
        label_dairyproductimage->setGeometry(QRect(140, 590, 171, 121));
        pushButton_viewdairyproduct = new QPushButton(Dairy);
        pushButton_viewdairyproduct->setObjectName("pushButton_viewdairyproduct");
        pushButton_viewdairyproduct->setGeometry(QRect(270, 290, 100, 32));

        retranslateUi(Dairy);

        QMetaObject::connectSlotsByName(Dairy);
    } // setupUi

    void retranslateUi(QDialog *Dairy)
    {
        Dairy->setWindowTitle(QCoreApplication::translate("Dairy", "Dialog", nullptr));
        pushButton_Searchdairy->setText(QCoreApplication::translate("Dairy", "Search", nullptr));
        pushButton_adddairyproduct->setText(QCoreApplication::translate("Dairy", "Add Item", nullptr));
        label_dairyproductname->setText(QString());
        label_dairyproductprice->setText(QString());
        label_dairyproductdes->setText(QString());
        label_dairyproductimage->setText(QString());
        pushButton_viewdairyproduct->setText(QCoreApplication::translate("Dairy", "ViewCart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dairy: public Ui_Dairy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAIRY_H
