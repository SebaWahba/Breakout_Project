/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *welcome_label;
    QLabel *buyerseller_label;
    QPushButton *buyer_button;
    QPushButton *seller_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(80, 40, 481, 221));
        buyerseller_label = new QLabel(centralwidget);
        buyerseller_label->setObjectName("buyerseller_label");
        buyerseller_label->setGeometry(QRect(250, 200, 431, 121));
        buyer_button = new QPushButton(centralwidget);
        buyer_button->setObjectName("buyer_button");
        buyer_button->setGeometry(QRect(100, 310, 151, 71));
        seller_button = new QPushButton(centralwidget);
        seller_button->setObjectName("seller_button");
        seller_button->setGeometry(QRect(410, 310, 171, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcome_label->setText(QCoreApplication::translate("MainWindow", "Welcome to InstaShop", nullptr));
        buyerseller_label->setText(QCoreApplication::translate("MainWindow", "Are you a Buyer or a Seller?", nullptr));
        buyer_button->setText(QCoreApplication::translate("MainWindow", "Buyer", nullptr));
        seller_button->setText(QCoreApplication::translate("MainWindow", "Seller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
