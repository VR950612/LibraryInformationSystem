#ifndef LOGINPAGE_H
#define LOGINPAGE_H
#include "seachpage.h"

#include <QDialog>

namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_pushButtonLogin_2_clicked();

private:
    Ui::loginpage *ui;
    seachpage *SeachPage;
};

#endif // LOGINPAGE_H
