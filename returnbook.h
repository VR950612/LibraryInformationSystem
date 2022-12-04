#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QDialog>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class returnbook;
}

class returnbook : public QDialog
{
    Q_OBJECT

public:
    explicit returnbook(QWidget *parent = nullptr);
    ~returnbook();

    void ReturnBook();

    QSqlDatabase db;

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::returnbook *ui;
};

#endif // RETURNBOOK_H
