/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_Logo;
    QLabel *label;
    QPushButton *pushButtonOkay;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(801, 589);
        label_Logo = new QLabel(Dialog);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(20, 30, 261, 71));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 140, 721, 361));
        label->setStyleSheet(QString::fromUtf8("border: 2px;\n"
""));
        pushButtonOkay = new QPushButton(Dialog);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(630, 520, 75, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_Logo->setText(QString());
        label->setText(QCoreApplication::translate("Dialog", "Our Collection Development Policy has four guiding principles:\n"
"1). collections that reflect Auckland\342\200\231s diverse communities\n"
"2). commitment to M\304\201ori knowledge\n"
"3). commitment to the principle of freedom of access to information\n"
"4). applying best value for the people of Auckland to purchasing and managing the collections.\n"
"History: - \n"
"In 1918, the separate children's section of the central library opened and nonfiction was classified under the\n"
"Dewey Decimal system. Branch libraries opened:\n"
"Grafton (1913)\n"
"Parnell (1913)\n"
"Remuera (1915)\n"
"Epsom (1918)\n"
"Grey Lynn (1924)\n"
"Point Chevalier (1926)\n"
"Tamaki (now known as St Heliers) 1931\n"
"Avondale (1931).", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("Dialog", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
