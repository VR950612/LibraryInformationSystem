#include "aboutus.h"
#include "ui_aboutus.h"
#include "mainpage.h"

AboutUs::AboutUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);

    //Return to main page
       connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
       MainPage * mainpage = new MainPage (this);
       this->hide();
       mainpage->show();
     });
}

AboutUs::~AboutUs()
{
    delete ui;
}
