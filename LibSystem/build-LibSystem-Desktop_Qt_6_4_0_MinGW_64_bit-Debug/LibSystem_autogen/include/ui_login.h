/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_4;
    QLineEdit *lineEdit_email;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_5;
    QPushButton *pushButtonLogin_2;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QLabel *label_Logo;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(490, 552);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 190, 63, 20));
        lineEdit_email = new QLineEdit(Dialog);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(40, 230, 211, 26));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 480, 151, 51));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 150, 63, 20));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 440, 191, 20));
        QFont font;
        font.setUnderline(true);
        label_6->setFont(font);
        label_8 = new QLabel(Dialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 270, 81, 20));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 350, 201, 20));
        label_5->setFont(font);
        pushButtonLogin_2 = new QPushButton(Dialog);
        pushButtonLogin_2->setObjectName("pushButtonLogin_2");
        pushButtonLogin_2->setGeometry(QRect(40, 390, 93, 29));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 161, 41));
        lineEdit_password = new QLineEdit(Dialog);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(40, 300, 211, 26));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_Logo = new QLabel(Dialog);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(40, 20, 261, 71));
        label_Logo->setPixmap(QPixmap(QString::fromUtf8("../Image/LibraryLogo.jpg")));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "email", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Need Help\n"
"01823-248990", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Want to login as GUEST ?", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Forget the password ?", nullptr));
        pushButtonLogin_2->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Library Account", nullptr));
        label_Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
