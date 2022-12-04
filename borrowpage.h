#ifndef BORROWPAGE_H
#define BORROWPAGE_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class borrowpage;
}

class borrowpage : public QDialog
{
    Q_OBJECT

public:
    explicit borrowpage(QWidget *parent = nullptr);
    ~borrowpage();

    void BorrowPage();

    QSqlDatabase db;

private slots:
    void on_pushButtonRenew_clicked();

 private:
    Ui::borrowpage *ui;
};

#endif // BORROWPAGE_H
