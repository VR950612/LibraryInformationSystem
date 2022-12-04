#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QDialog>
#include <QSql>

namespace Ui {
class landingpage;
}

class landingpage : public QDialog
{
    Q_OBJECT

public:
    explicit landingpage(QWidget *parent = nullptr);
    ~landingpage();

private:
    Ui::landingpage *ui;
};

#endif // LANDINGPAGE_H
