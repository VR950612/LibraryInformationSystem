#include "openingpage.h"
#include "ui_openingpage.h"
#include "mainpage.h"

OpeningPage::OpeningPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpeningPage)
{
    ui->setupUi(this);

    //Return to main page
       connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
       MainPage * mainpage = new MainPage (this);
       this->hide();
       mainpage->show();
     });
}

OpeningPage::~OpeningPage()
{
    delete ui;
}
