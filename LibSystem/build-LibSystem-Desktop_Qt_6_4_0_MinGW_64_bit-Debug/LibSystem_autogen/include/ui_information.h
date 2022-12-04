/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_2;
    QLabel *label_Logo;
    QPushButton *pushButtonOkay;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(704, 629);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 120, 391, 371));
        label_Logo = new QLabel(Dialog);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(30, 20, 261, 71));
        pushButtonOkay = new QPushButton(Dialog);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(540, 550, 93, 29));
        pushButtonOkay->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Opening hours: -\n"
"Sunday 10am - 5.30pm\n"
"Monday 9.30am - 5.30pm\n"
"Tuesday 9.30am - 5.30pm\n"
"Wednesday 9.30am - 5.30pm\n"
"Thursday 9.30am - 8pm\n"
"Friday 9.30am - 8pm\n"
"Saturday 9.30am - 5.30pm\n"
"\n"
"Address: -\n"
"Level 1, Botany Town Centre\n"
"Sunset Terrace\n"
"East T\304\201maki\n"
"\n"
"Postal address: -\n"
"PO Box 4138\n"
"Shortland Street\n"
"Auckland 1140", nullptr));
        label_Logo->setText(QString());
        pushButtonOkay->setText(QCoreApplication::translate("Dialog", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
