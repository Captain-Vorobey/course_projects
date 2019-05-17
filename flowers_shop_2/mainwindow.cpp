#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cw = new countriesWindow;
    fw = new flowersWindow;
    tw = new TypesWindow;
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::slotAddCountries);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::slotAddFlowers);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::slotAddTypes);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotAddCountries()
{
    cw->show();
}

void MainWindow::slotAddFlowers()
{
    fw->show();
}

void MainWindow::slotAddTypes()
{
    tw->show();
}
