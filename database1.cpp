#include "database1.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include <QDebug>

Database1::Database1()
{
dataBase1();
}


///Connect Database
void Database1::dataBase1()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

    db.setDatabaseName("/Users/venir/Desktop/CS106.2/Library_Project/Libray_Project/Database.db");

    if(!db.open()){
        qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
    }else{
        qDebug() << "Database Open";
       }
    }
    else
     qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << "available";

}
