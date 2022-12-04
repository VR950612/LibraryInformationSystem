#include "signup.h"
#include "ui_signup.h"
#include "mainpage.h"

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    //Return to main page
       connect(ui->pushButtonBack,&QPushButton::clicked,[=](){
       MainPage * mainpage = new MainPage (this);
       this->hide();
       mainpage->show();
     });

}

signup::~signup()
{
    delete ui;
}
