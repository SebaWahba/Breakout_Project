/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *Hello_Label;
    QLabel *Welcome_Label;
    QLabel *Image_Label;
    QPushButton *pushButton;
    QPushButton *Logout_Button;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(797, 603);
        Hello_Label = new QLabel(WelcomeWindow);
        Hello_Label->setObjectName("Hello_Label");
        Hello_Label->setGeometry(QRect(50, 50, 63, 20));
        Welcome_Label = new QLabel(WelcomeWindow);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(350, 150, 181, 71));
        Image_Label = new QLabel(WelcomeWindow);
        Image_Label->setObjectName("Image_Label");
        Image_Label->setGeometry(QRect(80, 120, 491, 271));
        pushButton = new QPushButton(WelcomeWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 490, 83, 29));
        Logout_Button = new QPushButton(WelcomeWindow);
        Logout_Button->setObjectName("Logout_Button");
        Logout_Button->setGeometry(QRect(70, 300, 100, 32));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        Hello_Label->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
        Image_Label->setText(QCoreApplication::translate("WelcomeWindow", "Image", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
        Logout_Button->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
