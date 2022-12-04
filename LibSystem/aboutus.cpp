#include "aboutus.h"
#include "ui_aboutus.h"
#include "ui_mainpage.h"

aboutus::aboutus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutus)
{
    ui->setupUi(this);

    QPixmap pico("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pico);

    //Return to main page
       connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
       mainpage * Mainpage = new mainpage (this);
       this->hide();
       Mainpage->show();
     });
}

aboutus::~aboutus()
{
    delete ui;
}
