#include "seachpage.h"
#include "ui_seachpage.h"
#include "borrowpage.h"

seachpage::seachpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seachpage)
{
    ui->setupUi(this);

        connect(ui->pushButtonFront,&QPushButton::clicked,[=](){
        borrowpage * BorrowPage = new borrowpage (this);
        this->hide();
        BorrowPage->show();
    });
}

seachpage::~seachpage()
{
    delete ui;
}



