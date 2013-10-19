/********************************************************************************
** Form generated from reading UI file 'splogindialog.ui'
**
** Created: Sat Oct 19 08:00:16 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLOGINDIALOG_H
#define UI_SPLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SPLoginDialog
{
public:
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginButton;
    QLabel *label_3;

    void setupUi(QDialog *SPLoginDialog)
    {
        if (SPLoginDialog->objectName().isEmpty())
            SPLoginDialog->setObjectName(QString::fromUtf8("SPLoginDialog"));
        SPLoginDialog->resize(275, 406);
        username = new QLineEdit(SPLoginDialog);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(20, 170, 231, 27));
        password = new QLineEdit(SPLoginDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(20, 220, 231, 27));
        label = new QLabel(SPLoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 81, 17));
        label_2 = new QLabel(SPLoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 200, 67, 17));
        loginButton = new QPushButton(SPLoginDialog);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(150, 260, 99, 27));
        label_3 = new QLabel(SPLoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 300, 241, 71));
        QFont font;
        font.setPointSize(8);
        font.setKerning(false);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        retranslateUi(SPLoginDialog);

        QMetaObject::connectSlotsByName(SPLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *SPLoginDialog)
    {
        SPLoginDialog->setWindowTitle(QApplication::translate("SPLoginDialog", "Dialog", 0, 0));
        label->setText(QApplication::translate("SPLoginDialog", "User name", 0,  0));
        label_2->setText(QApplication::translate("SPLoginDialog", "Password", 0, 0));
        loginButton->setText(QApplication::translate("SPLoginDialog", "Login", 0, 0));
        label_3->setText(QApplication::translate("SPLoginDialog", "This product uses Music by Spotify but is not endorsed, certified or otherwise approved in any way by Spotify. Spotify is the registered trade mark of the Spotify Group.\"\n"
"\n"
"", 0, 0));
    } // retranslateUi

};

namespace Ui {
    class SPLoginDialog: public Ui_SPLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLOGINDIALOG_H
