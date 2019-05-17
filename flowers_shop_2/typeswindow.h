#ifndef TYPESWINDOW_H
#define TYPESWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
//#include "sqlcomboboxmodel.h"
#include "database.h"
#include <QMainWindow>

namespace Ui {
class TypesWindow;
}

class TypesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TypesWindow(QWidget *parent = nullptr);
    ~TypesWindow();
signals:

public slots:
    void slotAddTypes();

private:
    Ui::TypesWindow *ui;
};

#endif // TYPESWINDOW_H
