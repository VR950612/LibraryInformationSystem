#include "contact.h"
#include "ui_contact.h"
#include"ui_mainpage.h"

contact::contact(QWidget *parent ):
    QDialog(parent),
    ui(new Ui::contact)
{
    ui->setupUi(this);

    QPixmap pick("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pick);

    //Main page
    connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
    mainpage *Mainpage = new mainpage (this);
    this->hide();
    Mainpage->show();
    });
}

contact::~contact()
{
    delete ui;
}
