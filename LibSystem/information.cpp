#include "information.h"
#include "ui_information.h"
#include "ui_mainpage.h"

information::information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);

    QPixmap pic("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pic);

    connect(ui->pushButtonOkay,&QPushButton::clicked,[=](){
    mainpage * Mainpage = new mainpage (this);
    this->hide();
    Mainpage->show();
  });
}

information::~information()
{
    delete ui;
}
