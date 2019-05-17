#include "Database.h"

Database::Database()
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

    db = QSqlDatabase::addDatabase("QSQLITE");
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
    insertIntoTables();
}
