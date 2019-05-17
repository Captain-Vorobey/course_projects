/********************************************************************************
** Form generated from reading UI file 'typeswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESWINDOW_H
#define UI_TYPESWINDOW_H

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

class Ui_TypesWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QPushButton *pushButton;
    QLineEdit *lineEdit1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TypesWindow)
    {
        if (TypesWindow->objectName().isEmpty())
            TypesWindow->setObjectName(QString::fromUtf8("TypesWindow"));
        TypesWindow->resize(358, 309);
        TypesWindow->setIconSize(QSize(300, 300));
        centralwidget = new QWidget(TypesWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(40, 0, 256, 81));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 210, 80, 18));
        lineEdit1 = new QLineEdit(centralwidget);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(110, 170, 113, 20));
        TypesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TypesWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 358, 19));
        TypesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TypesWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TypesWindow->setStatusBar(statusbar);

        retranslateUi(TypesWindow);

        QMetaObject::connectSlotsByName(TypesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TypesWindow)
    {
        TypesWindow->setWindowTitle(QApplication::translate("TypesWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("TypesWindow", "Add Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TypesWindow: public Ui_TypesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESWINDOW_H
