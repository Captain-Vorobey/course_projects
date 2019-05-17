#ifndef FLOWERSWINDOW_H
#define FLOWERSWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
//#include "sqlcomboboxmodel.h"
#include "database.h"
#include <QMainWindow>

namespace Ui {
class flowersWindow;
}

class flowersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit flowersWindow(QWidget *parent = nullptr);
    ~flowersWindow();
signals:

public slots:
    void slotAddFlowers();

private:
    Ui::flowersWindow *ui;
};

#endif // FLOWERSWINDOW_H
