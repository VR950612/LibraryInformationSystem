#ifndef OPENINGPAGE_H
#define OPENINGPAGE_H

#include <QDialog>

namespace Ui {
class OpeningPage;
}

class OpeningPage : public QDialog
{
    Q_OBJECT

public:
    explicit OpeningPage(QWidget *parent = nullptr);
    ~OpeningPage();

private:
    Ui::OpeningPage *ui;
};

#endif // OPENINGPAGE_H
