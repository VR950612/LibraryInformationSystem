#include "mainpage.h"
#include "ui_mainpage.h"
#include "aboutus.h"
#include "openingpage.h"
#include "signup.h"
#include "loginpage.h"
#include "borrowpage.h"
#include "contactpage.h"

MainPage::MainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);

       /* //Landing page
        connect(ui->pushButton_Login,&QPushButton::clicked,[=](){
        landingpage * LandingPage = new landingpage (this); //Heap style
        this->hide();
        LandingPage->show(); */

        connect(ui->pushButton_Login,&QPushButton::clicked,[=](){
        loginpage * LoginPage = new loginpage (this); //Heap style
        this->hide();
        LoginPage->show();

      });

        //About us
        connect(ui->pushButton_AboutUs,&QPushButton::clicked,[=](){
        AboutUs * aboutus = new AboutUs (this); //Heap style
        this->hide();
        aboutus->show();

      });

        //Opening page
        connect(ui->pushButton_Infomation,&QPushButton::clicked,[=](){
        OpeningPage * openingpage = new OpeningPage (this); //Heap style
        this->hide();
        openingpage->show();

      });

        //Signup page
        connect(ui->pushButton_Signup,&QPushButton::clicked,[=](){
        signup * SignUp = new signup (this); //Heap style
        this->hide();
        SignUp->show();

      });

        //Renew book page
        connect(ui->pushButton_ContactUs,&QPushButton::clicked,[=](){
        contactpage * ContactPage = new contactpage (this); //Heap style
        this->hide();
        ContactPage->show();

      });

        //Contact page
        connect(ui->pushButton_RenewBook,&QPushButton::clicked,[=](){
        borrowpage * BorrowPage = new borrowpage (this); //Heap style
        this->hide();
        BorrowPage->show();

      });

}

MainPage::~MainPage()
{
    delete ui;
}
