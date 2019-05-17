#include "typeswindow.h"
#include "ui_typeswindow.h"

TypesWindow::TypesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TypesWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &TypesWindow::slotAddTypes);
}

TypesWindow::~TypesWindow()
{
    delete ui;
}

void TypesWindow::slotAddTypes()
{
    if(Database::insertIntoTableTypes(QList<QVariant>{ui->lineEdit1->text()}))
    {
           QMessageBox::information(this, "info window", "u are succesfully added");
    }
    else {
        QMessageBox::information(this, "error", "error");
    }
}
