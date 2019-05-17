#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "countrieswindow.h"
#include "flowerswindow.h"
#include "typeswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void slotAddCountries();
    void slotAddFlowers();
    void slotAddTypes();

private:
    Ui::MainWindow *ui;
    countriesWindow* cw;
    TypesWindow* tw;
    flowersWindow* fw;
};

#endif // MAINWINDOW_H
