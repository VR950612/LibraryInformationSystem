#ifndef CONTACTPAGE_H
#define CONTACTPAGE_H

#include <QDialog>

namespace Ui {
class contactpage;
}

class contactpage : public QDialog
{
    Q_OBJECT

public:
    explicit contactpage(QWidget *parent = nullptr);
    ~contactpage();

private:
    Ui::contactpage *ui;
};

#endif // CONTACTPAGE_H
