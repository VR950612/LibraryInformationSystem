#include "contactpage.h"
#include "ui_contactpage.h"
#include "mainpage.h"

contactpage::contactpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactpage)
{
    ui->setupUi(this);

    //Return to main page
       connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
       MainPage * mainpage = new MainPage (this);
       this->hide();
       mainpage->show();
     });

}

contactpage::~contactpage()
{
    delete ui;
}
