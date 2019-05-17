#include "database.h"

Database::Database(QObject *parent) : QObject(parent)
{
    if(!QFile(DATABASE_PATH).exists())
       {
           restoreDataBase();
       }
       else
       {
           openDataBase();
       }
}

bool Database::openDataBase()
{
#ifdef DEBUG
    qDebug() << "openDataBase";
#endif

    db = QSqlDatabase::addDatabase("SQLITE");
    db.setHostName("server");
    db.setDatabaseName(DATABASE_PATH);
    return db.open();
}

bool Database::restoreDataBase()
{
#ifdef DEBUG
    qDebug() << "restoreDatabase();";
#endif
    openDataBase();
    createTables();
    //insertIntoTables();
}

void Database::createTables()
{
    QSqlQuery query;
    query.exec(COUNTRIES);
    query.exec(TYPES_OF_FLOWERS);
    query.exec(FLOWERS);
}

void Database::insertIntoTables()
{
    insertIntoTableCountries(QList<QVariant>{QVariant("Belarus")});
    insertIntoTableTypes(QList<QVariant>{QVariant("tsvetok")});
    insertIntoTableFlowers(QList<QVariant>{QVariant("rrrosa")});
}

bool Database::insertIntoTableTypes(const QVariant &data)
{
    QSqlQuery query;
    query.prepare("insert into Types("
                  "t_name"
                  ")");
    query.bindValue(":t_name", data.toString());
    return queryRun(query, "type");
}

bool Database::insertIntoTableFlowers(const QVariant &data)
{
    QSqlQuery query;
    query.prepare("insert into Flowers("
                  "f_name"
                  ")");
    return queryRun(query, "flower");
}

void Database::closeDataBase()
{

}

bool Database::insertIntoTableCountries(const QVariantList& data)
{
    QSqlQuery query;
       query.prepare("insert into Countries("
                     "c_name"
                     ")");
       query.bindValue(":c_name", data[0].toString());
       return queryRun(query, "country");
}

bool Database::queryRun(QSqlQuery& query, const char* table_name)
{
    if(!query.exec())
    {
        qDebug() << "error in " << table_name;
        qDebug() << query.lastError().text();
    }
    return false;
}
