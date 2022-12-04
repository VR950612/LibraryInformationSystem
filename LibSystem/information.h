#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>

namespace Ui{
class information;
}
class information : public QDialog
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = nullptr);
    ~information();

private:
    Ui::information *Ui;
};

#endif // INFORMATION_H
