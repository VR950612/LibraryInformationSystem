/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

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
    QPushButton *pushButtonOkay;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(523, 454);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 181, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Image/LibraryLogo.jpg")));
        pushButtonOkay = new QPushButton(Dialog);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(340, 360, 75, 24));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 100, 341, 221));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QString());
        pushButtonOkay->setText(QCoreApplication::translate("Dialog", "Okay", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Contact Us\n"
"\n"
" Phone number: - 093770209\n"
" Email Address: - aucklandlibary@ac.nz\n"
" Website: - https://www.aucklandlibraries.govt.nz/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
