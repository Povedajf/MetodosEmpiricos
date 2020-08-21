/********************************************************************************
** Form generated from reading UI file 'clienteabcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTEABCDIALOG_H
#define UI_CLIENTEABCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClienteABCDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtCedula;
    QLineEdit *txtNombre;
    QLineEdit *txtTelefono;
    QPushButton *GrabarButton;
    QLineEdit *txtDirec;

    void setupUi(QDialog *ClienteABCDialog)
    {
        if (ClienteABCDialog->objectName().isEmpty())
            ClienteABCDialog->setObjectName(QString::fromUtf8("ClienteABCDialog"));
        ClienteABCDialog->resize(796, 536);
        label = new QLabel(ClienteABCDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-80, -10, 960, 541));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/fondoreserva.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(ClienteABCDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 60, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Vivaldi"));
        font.setPointSize(28);
        font.setItalic(true);
        label_2->setFont(font);
        label_3 = new QLabel(ClienteABCDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 170, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Vivaldi"));
        font1.setPointSize(22);
        font1.setItalic(true);
        label_3->setFont(font1);
        label_4 = new QLabel(ClienteABCDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 130, 81, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(ClienteABCDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 220, 91, 41));
        label_5->setFont(font1);
        label_6 = new QLabel(ClienteABCDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 270, 101, 41));
        label_6->setFont(font1);
        txtCedula = new QLineEdit(ClienteABCDialog);
        txtCedula->setObjectName(QString::fromUtf8("txtCedula"));
        txtCedula->setGeometry(QRect(260, 140, 113, 20));
        txtNombre = new QLineEdit(ClienteABCDialog);
        txtNombre->setObjectName(QString::fromUtf8("txtNombre"));
        txtNombre->setGeometry(QRect(260, 180, 113, 20));
        txtTelefono = new QLineEdit(ClienteABCDialog);
        txtTelefono->setObjectName(QString::fromUtf8("txtTelefono"));
        txtTelefono->setGeometry(QRect(260, 230, 113, 20));
        GrabarButton = new QPushButton(ClienteABCDialog);
        GrabarButton->setObjectName(QString::fromUtf8("GrabarButton"));
        GrabarButton->setGeometry(QRect(440, 430, 91, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        GrabarButton->setFont(font2);
        txtDirec = new QLineEdit(ClienteABCDialog);
        txtDirec->setObjectName(QString::fromUtf8("txtDirec"));
        txtDirec->setGeometry(QRect(260, 280, 181, 61));

        retranslateUi(ClienteABCDialog);

        QMetaObject::connectSlotsByName(ClienteABCDialog);
    } // setupUi

    void retranslateUi(QDialog *ClienteABCDialog)
    {
        ClienteABCDialog->setWindowTitle(QCoreApplication::translate("ClienteABCDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ClienteABCDialog", "Cliente", nullptr));
        label_3->setText(QCoreApplication::translate("ClienteABCDialog", "Nombre:", nullptr));
        label_4->setText(QCoreApplication::translate("ClienteABCDialog", "C\303\251dula:", nullptr));
        label_5->setText(QCoreApplication::translate("ClienteABCDialog", "Tel\303\251fono:", nullptr));
        label_6->setText(QCoreApplication::translate("ClienteABCDialog", "Direcci\303\263n:", nullptr));
        GrabarButton->setText(QCoreApplication::translate("ClienteABCDialog", "Grabar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClienteABCDialog: public Ui_ClienteABCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEABCDIALOG_H
