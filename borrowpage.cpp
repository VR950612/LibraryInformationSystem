#include "borrowpage.h"
#include "ui_borrowpage.h"
#include "returnbook.h"

#include "database1.h"

#include <QDialog>

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

borrowpage::borrowpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowpage)
{
    ui->setupUi(this);

    Database1 * database1 = new Database1();

    //Show Database
    BorrowPage();

    //Return page
       connect(ui->pushButton_Back,&QPushButton::clicked,[&](){
       returnbook * ReturnBook = new returnbook (this);
       this->hide();
       ReturnBook->show();

   });
}

borrowpage::~borrowpage()
{
    delete ui;
}

void borrowpage::BorrowPage()
{
    auto query = QSqlQuery(db);
    QString select{"select * from [Books];"};

    //execute the query
    if(!query.exec(select))
       qDebug() << "Cannot select from members";

    //define the model
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tableView->setModel(model);
}


void borrowpage::on_pushButtonRenew_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Renew", "Do you want to renew?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes) {
           QMessageBox::information(this,"Renew","New due date: 06-11-22");
      }  else {
       qDebug() << "No is clicked";
    }
}

