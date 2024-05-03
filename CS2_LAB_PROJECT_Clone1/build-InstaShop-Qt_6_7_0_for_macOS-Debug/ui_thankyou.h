/********************************************************************************
** Form generated from reading UI file 'thankyou.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THANKYOU_H
#define UI_THANKYOU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ThankYou
{
public:
    QLabel *label;

    void setupUi(QDialog *ThankYou)
    {
        if (ThankYou->objectName().isEmpty())
            ThankYou->setObjectName("ThankYou");
        ThankYou->resize(1148, 736);
        label = new QLabel(ThankYou);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 200, 651, 351));
        QFont font;
        font.setPointSize(29);
        label->setFont(font);

        retranslateUi(ThankYou);

        QMetaObject::connectSlotsByName(ThankYou);
    } // setupUi

    void retranslateUi(QDialog *ThankYou)
    {
        ThankYou->setWindowTitle(QCoreApplication::translate("ThankYou", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ThankYou", "Thank You for your Order!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThankYou: public Ui_ThankYou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THANKYOU_H
