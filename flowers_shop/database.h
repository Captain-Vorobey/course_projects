#ifndef DATABASE_H
#define DATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlError>
#include <QSqlRelation>
#include <QSqlRecord>
#include <QFile>
#include <QStandardPaths>


class Database: public QObject
{
    Q_OBJECT
public:
    QSqlDatabase db;
    Database();
    explicit Database(QObject* parent = nullptr);
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    void createTables();
    void insertIntoTables();
};

#endif // DATABASE_H
