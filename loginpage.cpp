#include "loginpage.h"
#include "ui_loginpage.h"
#include "seachpage.h"
#include <QMessageBox>

loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}


void loginpage::on_pushButtonLogin_2_clicked()
{
        QString user_email = ui->lineEdit_email->text();
        QString user_password = ui->lineEdit_password->text();

        if(user_email == "test" && user_password == "test") {
            QMessageBox::information(this, "Login_2", "Email and Password is correct");
            hide();
            SeachPage = new seachpage(this);
            SeachPage->show();
        }
        else {
            QMessageBox::warning(this, "Login_2", "Email and Password is incorrect");
         }

}

