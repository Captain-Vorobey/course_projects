#include "countrieswindow.h"
#include "ui_countrieswindow.h"

countriesWindow::countriesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::countriesWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &countriesWindow::slotAddCountries);
}

countriesWindow::~countriesWindow()
{
    delete ui;
}

void countriesWindow::slotAddCountries()
{
    if(Database::insertIntoTableCountries(QList<QVariant>{ui->lineEdit->text()}))
    {
        QMessageBox::information(this, "info window", "u are succesfully added");
    }
    else {
        QMessageBox::information(this, "error", "error");
    }
}
