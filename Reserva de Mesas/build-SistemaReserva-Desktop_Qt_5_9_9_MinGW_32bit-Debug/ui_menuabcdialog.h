/********************************************************************************
** Form generated from reading UI file 'menuabcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUABCDIALOG_H
#define UI_MENUABCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuABCDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *MenuABCDialog)
    {
        if (MenuABCDialog->objectName().isEmpty())
            MenuABCDialog->setObjectName(QString::fromUtf8("MenuABCDialog"));
        MenuABCDialog->resize(562, 444);
        label = new QLabel(MenuABCDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-150, -50, 811, 541));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/fondoreserva.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(MenuABCDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 330, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label_2 = new QLabel(MenuABCDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 20, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Vivaldi"));
        font1.setPointSize(22);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_3 = new QLabel(MenuABCDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 90, 81, 21));
        label_3->setFont(font1);

        retranslateUi(MenuABCDialog);

        QMetaObject::connectSlotsByName(MenuABCDialog);
    } // setupUi

    void retranslateUi(QDialog *MenuABCDialog)
    {
        MenuABCDialog->setWindowTitle(QCoreApplication::translate("MenuABCDialog", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MenuABCDialog", "Grabar", nullptr));
        label_2->setText(QCoreApplication::translate("MenuABCDialog", "Men\303\272", nullptr));
        label_3->setText(QCoreApplication::translate("MenuABCDialog", "Men\303\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuABCDialog: public Ui_MenuABCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUABCDIALOG_H
