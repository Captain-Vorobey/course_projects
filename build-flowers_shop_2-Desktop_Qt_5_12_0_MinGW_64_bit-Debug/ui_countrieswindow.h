/********************************************************************************
** Form generated from reading UI file 'countrieswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRIESWINDOW_H
#define UI_COUNTRIESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_countriesWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *countriesWindow)
    {
        if (countriesWindow->objectName().isEmpty())
            countriesWindow->setObjectName(QString::fromUtf8("countriesWindow"));
        countriesWindow->resize(370, 281);
        countriesWindow->setIconSize(QSize(300, 300));
        centralwidget = new QWidget(countriesWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 10, 191, 101));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 160, 80, 18));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 130, 113, 20));
        countriesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(countriesWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 370, 19));
        countriesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(countriesWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        countriesWindow->setStatusBar(statusbar);

        retranslateUi(countriesWindow);

        QMetaObject::connectSlotsByName(countriesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *countriesWindow)
    {
        countriesWindow->setWindowTitle(QApplication::translate("countriesWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("countriesWindow", "add Countrie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class countriesWindow: public Ui_countriesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRIESWINDOW_H
