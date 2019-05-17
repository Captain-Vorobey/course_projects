#include "flowersWindow.h"
#include "ui_flowerswindow.h"

flowersWindow::flowersWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::flowersWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &flowersWindow::slotAddFlowers);
}

flowersWindow::~flowersWindow()
{
    delete ui;
}

void flowersWindow::slotAddFlowers()
{
    if(Database::insertIntoTableCountries(QList<QVariant>{ui->lineEdit->text()}))
    {
        QMessageBox::information(this, "info window", "u are succesfully added");
    }
    else {
        QMessageBox::information(this, "error", "error");
    }
}
