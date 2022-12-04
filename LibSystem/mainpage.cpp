#include "mainpage.h"
#include "./ui_mainpage.h"
#include "information.h"
#include "aboutus.h"
#include "contact.h"
#include "login.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/simra/OneDrive/Desktop/PHOTOS/Images.jpg");
    ui->label_LibraryPic->setPixmap(pix);

    QPixmap pix_1("C:/Users/simra/OneDrive/Desktop/PHOTOS/facebook.png");
    ui->label_Facebook->setPixmap(pix_1);

    QPixmap pix_2("C:/Users/simra/OneDrive/Desktop/PHOTOS/instagram.png");
    ui->label_Instagram->setPixmap(pix_2);

    QPixmap pix_3("C:/Users/simra/OneDrive/Desktop/PHOTOS/youtube.png");
    ui->label_Youtube->setPixmap(pix_3);

    QPixmap pix_4("C:/Users/simra/OneDrive/Desktop/PHOTOS/twitter.png");
    ui->label_Twitter->setPixmap(pix_4);

    QPixmap pix_5("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pix_5);

    //Opening page
    connect(ui->pushButton_Infomation,&QPushButton::clicked,[=](){
    information * Information = new information (this);
    this->hide();
    Information->show();

  });

    //About Us
    connect(ui->pushButton_AboutUs,&QPushButton::clicked,[=](){
    aboutus * Aboutus = new aboutus (this);
    this->hide();
    Aboutus->show();

  });

    //Contact Us
    connect(ui->pushButton_Contact,&QPushButton::clicked,[=](){
    contact * Contact = new contact (this);
    this->hide();
    Contact->show();

  });

    //Login Page
    connect(ui->pushButton_Login,&QPushButton::clicked,[=](){
    login * LoginPage = new login (this);
    this->hide();
    LoginPage->show();
    });

}

Widget::~Widget()
{
    delete ui;
}

