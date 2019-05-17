/********************************************************************************
** Form generated from reading UI file 'flowerswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWERSWINDOW_H
#define UI_FLOWERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flowersWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QListView *listView;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *flowersWindow)
    {
        if (flowersWindow->objectName().isEmpty())
            flowersWindow->setObjectName(QString::fromUtf8("flowersWindow"));
        flowersWindow->resize(505, 309);
        flowersWindow->setIconSize(QSize(300, 300));
        centralwidget = new QWidget(flowersWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 80, 18));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(70, 0, 256, 111));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 170, 113, 20));
        flowersWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(flowersWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 505, 19));
        flowersWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(flowersWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        flowersWindow->setStatusBar(statusbar);

        retranslateUi(flowersWindow);

        QMetaObject::connectSlotsByName(flowersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *flowersWindow)
    {
        flowersWindow->setWindowTitle(QApplication::translate("flowersWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("flowersWindow", "add Flower", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flowersWindow: public Ui_flowersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWERSWINDOW_H
