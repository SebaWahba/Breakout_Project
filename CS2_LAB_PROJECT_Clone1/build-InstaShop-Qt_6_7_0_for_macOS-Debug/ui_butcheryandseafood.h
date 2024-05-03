/********************************************************************************
** Form generated from reading UI file 'butcheryandseafood.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTCHERYANDSEAFOOD_H
#define UI_BUTCHERYANDSEAFOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_butcheryandseafood
{
public:
    QLineEdit *lineEdit_butcherysearch;
    QPushButton *pushButton_searchbutchery;
    QLabel *label_productnamebutchery;
    QLabel *label_butcheryproductprice;
    QLabel *label_butcheryproductdesc;
    QLabel *label_butcheryproductimage;
    QPushButton *pushButton_addbutcheryproduct;
    QPushButton *pushButton_viewbutcheryproduct;

    void setupUi(QDialog *butcheryandseafood)
    {
        if (butcheryandseafood->objectName().isEmpty())
            butcheryandseafood->setObjectName("butcheryandseafood");
        butcheryandseafood->resize(1152, 722);
        lineEdit_butcherysearch = new QLineEdit(butcheryandseafood);
        lineEdit_butcherysearch->setObjectName("lineEdit_butcherysearch");
        lineEdit_butcherysearch->setGeometry(QRect(100, 70, 661, 71));
        pushButton_searchbutchery = new QPushButton(butcheryandseafood);
        pushButton_searchbutchery->setObjectName("pushButton_searchbutchery");
        pushButton_searchbutchery->setGeometry(QRect(890, 70, 221, 61));
        label_productnamebutchery = new QLabel(butcheryandseafood);
        label_productnamebutchery->setObjectName("label_productnamebutchery");
        label_productnamebutchery->setGeometry(QRect(150, 280, 58, 16));
        label_butcheryproductprice = new QLabel(butcheryandseafood);
        label_butcheryproductprice->setObjectName("label_butcheryproductprice");
        label_butcheryproductprice->setGeometry(QRect(150, 340, 58, 16));
        label_butcheryproductdesc = new QLabel(butcheryandseafood);
        label_butcheryproductdesc->setObjectName("label_butcheryproductdesc");
        label_butcheryproductdesc->setGeometry(QRect(150, 390, 61, 16));
        label_butcheryproductimage = new QLabel(butcheryandseafood);
        label_butcheryproductimage->setObjectName("label_butcheryproductimage");
        label_butcheryproductimage->setGeometry(QRect(150, 440, 401, 221));
        pushButton_addbutcheryproduct = new QPushButton(butcheryandseafood);
        pushButton_addbutcheryproduct->setObjectName("pushButton_addbutcheryproduct");
        pushButton_addbutcheryproduct->setGeometry(QRect(130, 190, 100, 32));
        pushButton_viewbutcheryproduct = new QPushButton(butcheryandseafood);
        pushButton_viewbutcheryproduct->setObjectName("pushButton_viewbutcheryproduct");
        pushButton_viewbutcheryproduct->setGeometry(QRect(450, 190, 100, 32));

        retranslateUi(butcheryandseafood);

        QMetaObject::connectSlotsByName(butcheryandseafood);
    } // setupUi

    void retranslateUi(QDialog *butcheryandseafood)
    {
        butcheryandseafood->setWindowTitle(QCoreApplication::translate("butcheryandseafood", "Dialog", nullptr));
        pushButton_searchbutchery->setText(QCoreApplication::translate("butcheryandseafood", "Search", nullptr));
        label_productnamebutchery->setText(QCoreApplication::translate("butcheryandseafood", "TextLabel", nullptr));
        label_butcheryproductprice->setText(QCoreApplication::translate("butcheryandseafood", "TextLabel", nullptr));
        label_butcheryproductdesc->setText(QCoreApplication::translate("butcheryandseafood", "TextLabel", nullptr));
        label_butcheryproductimage->setText(QString());
        pushButton_addbutcheryproduct->setText(QCoreApplication::translate("butcheryandseafood", "Add Item", nullptr));
        pushButton_viewbutcheryproduct->setText(QCoreApplication::translate("butcheryandseafood", "View Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class butcheryandseafood: public Ui_butcheryandseafood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTCHERYANDSEAFOOD_H
