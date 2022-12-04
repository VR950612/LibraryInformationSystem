#ifndef SEACHPAGE_H
#define SEACHPAGE_H


#include <QDialog>

namespace Ui {
class seachpage;
}

class seachpage : public QDialog
{
    Q_OBJECT

public:
    explicit seachpage(QWidget *parent = nullptr);
    ~seachpage();

private:
    Ui::seachpage *ui;

};

#endif // SEACHPAGE_H
