/********************************************************************************
** Form generated from reading UI file 'shoppingcart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCART_H
#define UI_SHOPPINGCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_shoppingcart
{
public:
    QLabel *label_itemslist;
    QLabel *label_itemsincartwidget;
    QPushButton *pushButton_nextcart;
    QPushButton *pushButton_backcart;

    void setupUi(QDialog *shoppingcart)
    {
        if (shoppingcart->objectName().isEmpty())
            shoppingcart->setObjectName("shoppingcart");
        shoppingcart->resize(1173, 736);
        label_itemslist = new QLabel(shoppingcart);
        label_itemslist->setObjectName("label_itemslist");
        label_itemslist->setGeometry(QRect(120, 80, 171, 41));
        label_itemsincartwidget = new QLabel(shoppingcart);
        label_itemsincartwidget->setObjectName("label_itemsincartwidget");
        label_itemsincartwidget->setGeometry(QRect(140, 140, 531, 361));
        pushButton_nextcart = new QPushButton(shoppingcart);
        pushButton_nextcart->setObjectName("pushButton_nextcart");
        pushButton_nextcart->setGeometry(QRect(140, 660, 100, 32));
        pushButton_backcart = new QPushButton(shoppingcart);
        pushButton_backcart->setObjectName("pushButton_backcart");
        pushButton_backcart->setGeometry(QRect(280, 660, 100, 32));

        retranslateUi(shoppingcart);

        QMetaObject::connectSlotsByName(shoppingcart);
    } // setupUi

    void retranslateUi(QDialog *shoppingcart)
    {
        shoppingcart->setWindowTitle(QCoreApplication::translate("shoppingcart", "Dialog", nullptr));
        label_itemslist->setText(QCoreApplication::translate("shoppingcart", "Items in list:", nullptr));
        label_itemsincartwidget->setText(QString());
        pushButton_nextcart->setText(QCoreApplication::translate("shoppingcart", "Next", nullptr));
        pushButton_backcart->setText(QCoreApplication::translate("shoppingcart", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shoppingcart: public Ui_shoppingcart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCART_H
