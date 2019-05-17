#ifndef COUNTRIESWINDOW_H
#define COUNTRIESWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
//#include "sqlcomboboxmodel.h"
#include "database.h"
#include <QMainWindow>

namespace Ui {
class countriesWindow;
}

class countriesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit countriesWindow(QWidget *parent = nullptr);
    ~countriesWindow();
signals:

public slots:
    void slotAddCountries();
signals:

private:
    Ui::countriesWindow *ui;
};

#endif // COUNTRIESWINDOW_H
