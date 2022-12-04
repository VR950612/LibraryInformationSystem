#include "login.h"
#include "ui_login.h"
#include "ui_mainpage.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    QPixmap pi_ck("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pi_ck);
}

login::~login()
{
    delete ui;
}


void login::on_pushButtonLogin_2_clicked()
{
        QString user_email = ui->lineEdit_email->text();
        QString user_password = ui->lineEdit_password->text();

        if(user_email == "test" && user_password == "test") {
            QMessageBox::information(this, "Login_2", "Email and Password is correct");
            hide();
            //SeachPage = new seachpage(this);
            //SeachPage->show();
        }
        else {
            QMessageBox::warning(this, "Login_2", "Email and Password is incorrect");
         }

}
