#include "logout.h"
#include "ui_logout.h"
#include <QMessageBox>
#include <QDebug>

logout::logout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logout)
{
    ui->setupUi(this);
}

logout::~logout()
{
    delete ui;
}

void logout::on_pushButtonLogout_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?",
                      QMessageBox::Yes | QMessageBox::No);
if(reply == QMessageBox::Yes) {
    //QApplication::quit();
     QMessageBox::information(this,"Logout", "You have successfully logout");
     QApplication::quit();
     }  else {
    qDebug() << "No is clicked";
    }
}

