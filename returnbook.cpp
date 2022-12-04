#include "returnbook.h"
#include "ui_returnbook.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QMessageBox>
#include "logout.h"

#include "database1.h"

returnbook::returnbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnbook)
{
    ui->setupUi(this);

    //Call Database
    Database1 * database1 = new Database1();

    //Show Database
    ReturnBook();

     //Logout page
    connect(ui->pushButtonLogout,&QPushButton::clicked,[=](){
        logout * Logout = new logout (this);
        this->hide();
        Logout->show();
    });
}

returnbook::~returnbook()
{
    delete ui;
}

void returnbook::ReturnBook()
{
    auto query = QSqlQuery(db);
    QString select{"select * from [Books1];"};

    //execute the query
    if(!query.exec(select))
       qDebug() << "Cannot select from members";

    //define the model
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tableView->setModel(model);
}


void returnbook::on_pushButton_3_clicked()
{
  QMessageBox::information(this, "Fine", "07-11-2022 - $5");
}

