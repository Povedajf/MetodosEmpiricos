/********************************************************************************
** Form generated from reading UI file 'reservaabcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVAABCDIALOG_H
#define UI_RESERVAABCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReservaABCDialog
{
public:
    QTableView *tableView;
    QPushButton *btnreservar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *boxcliente;
    QLineEdit *txtnumperres;
    QLabel *txtcedulaclires1;
    QDateTimeEdit *txtfechares;
    QLabel *txtidmesares;
    QComboBox *boxmesa;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *ReservaABCDialog)
    {
        if (ReservaABCDialog->objectName().isEmpty())
            ReservaABCDialog->setObjectName(QString::fromUtf8("ReservaABCDialog"));
        ReservaABCDialog->setWindowModality(Qt::ApplicationModal);
        ReservaABCDialog->resize(1339, 660);
        ReservaABCDialog->setCursor(QCursor(Qt::ArrowCursor));
        ReservaABCDialog->setMouseTracking(true);
        ReservaABCDialog->setTabletTracking(true);
        ReservaABCDialog->setAcceptDrops(true);
        ReservaABCDialog->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 14pt \"Script MT Bold\";\n"
"}"));
        ReservaABCDialog->setSizeGripEnabled(true);
        tableView = new QTableView(ReservaABCDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(690, 250, 631, 201));
        tableView->setStyleSheet(QString::fromUtf8("QTableView { \n"
"selection-background-color:qlineargradient(spread:reflect, x1:0, y1:0.415, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.960199 rgba(107, 20, 20, 255), stop:1 rgba(255, 255, 255, 255));\n"
" background:rgb(255, 255, 255);\n"
"	font: 8pt \"Stencil\";\n"
"} \n"
"QTableView QTableCornerButton::section {\n"
" background: #875367; border: 5px outset red;\n"
" } QTableView::indicator:unchecked {\n"
" background-color: #d7d6d5\n"
" }"));
        btnreservar = new QPushButton(ReservaABCDialog);
        btnreservar->setObjectName(QString::fromUtf8("btnreservar"));
        btnreservar->setGeometry(QRect(440, 500, 121, 61));
        btnreservar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" border: 2px solid whitesmoke;\n"
" border-radius: 5px;\n"
" background-color: #CFB8A9;\n"
" padding: 10px;\n"
" margin: 10px;\n"
"}\n"
"QPushButton:hover {\n"
" background-color: #FCE5E5;\n"
"}\n"
"* {\n"
"     font: 57 10pt \"Roboto\";\n"
"}\n"
"QPushButton[text='soy btn'] {\n"
"   color: red;\n"
"}"));
        label_2 = new QLabel(ReservaABCDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 250, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Script MT Bold\";"));
        label_3 = new QLabel(ReservaABCDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 305, 201, 21));
        label_4 = new QLabel(ReservaABCDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 350, 121, 16));
        label_5 = new QLabel(ReservaABCDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 350, 151, 16));
        label_6 = new QLabel(ReservaABCDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 390, 81, 16));
        label_7 = new QLabel(ReservaABCDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 20, 201, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Vivaldi"));
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: italic 30pt \"Vivaldi\";\n"
"color:#F4E7E7;\n"
""));
        boxcliente = new QComboBox(ReservaABCDialog);
        boxcliente->setObjectName(QString::fromUtf8("boxcliente"));
        boxcliente->setGeometry(QRect(120, 260, 141, 22));
        txtnumperres = new QLineEdit(ReservaABCDialog);
        txtnumperres->setObjectName(QString::fromUtf8("txtnumperres"));
        txtnumperres->setGeometry(QRect(220, 310, 41, 22));
        txtcedulaclires1 = new QLabel(ReservaABCDialog);
        txtcedulaclires1->setObjectName(QString::fromUtf8("txtcedulaclires1"));
        txtcedulaclires1->setGeometry(QRect(460, 260, 191, 16));
        txtcedulaclires1->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Script MT Bold\";\n"
"color:#F4E7E7;"));
        txtfechares = new QDateTimeEdit(ReservaABCDialog);
        txtfechares->setObjectName(QString::fromUtf8("txtfechares"));
        txtfechares->setGeometry(QRect(120, 350, 141, 22));
        txtfechares->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        txtidmesares = new QLabel(ReservaABCDialog);
        txtidmesares->setObjectName(QString::fromUtf8("txtidmesares"));
        txtidmesares->setGeometry(QRect(470, 390, 161, 16));
        txtidmesares->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Script MT Bold\";\n"
"color:#F4E7E7;"));
        boxmesa = new QComboBox(ReservaABCDialog);
        boxmesa->setObjectName(QString::fromUtf8("boxmesa"));
        boxmesa->setGeometry(QRect(120, 390, 141, 21));
        label = new QLabel(ReservaABCDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1331, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/fondoreserva.jpg")));
        label->setScaledContents(true);
        label_8 = new QLabel(ReservaABCDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(870, 200, 241, 41));
        label_8->setStyleSheet(QString::fromUtf8("color:#F4E7E7;\n"
"font: italic 20pt \"Vivaldi\";"));
        label_9 = new QLabel(ReservaABCDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(270, 180, 241, 41));
        label_9->setStyleSheet(QString::fromUtf8("color:#F4E7E7;\n"
"font: italic 20pt \"Vivaldi\";"));
        label_10 = new QLabel(ReservaABCDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(270, 260, 171, 16));
        label_11 = new QLabel(ReservaABCDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 390, 171, 16));
        label->raise();
        tableView->raise();
        btnreservar->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        boxcliente->raise();
        txtnumperres->raise();
        txtcedulaclires1->raise();
        txtfechares->raise();
        txtidmesares->raise();
        boxmesa->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();

        retranslateUi(ReservaABCDialog);

        QMetaObject::connectSlotsByName(ReservaABCDialog);
    } // setupUi

    void retranslateUi(QDialog *ReservaABCDialog)
    {
        ReservaABCDialog->setWindowTitle(QCoreApplication::translate("ReservaABCDialog", "Dialog", nullptr));
        btnreservar->setText(QCoreApplication::translate("ReservaABCDialog", "Reservar ", nullptr));
        label_2->setText(QCoreApplication::translate("ReservaABCDialog", "Cliente: ", nullptr));
        label_3->setText(QCoreApplication::translate("ReservaABCDialog", "Numero de personas", nullptr));
        label_4->setText(QCoreApplication::translate("ReservaABCDialog", "Fecha: ", nullptr));
        label_5->setText(QCoreApplication::translate("ReservaABCDialog", " a\303\261o/mes/dia", nullptr));
        label_6->setText(QCoreApplication::translate("ReservaABCDialog", "Mesa: ", nullptr));
        label_7->setText(QCoreApplication::translate("ReservaABCDialog", "Reserva", nullptr));
        txtcedulaclires1->setText(QCoreApplication::translate("ReservaABCDialog", "Cedula del Cliente", nullptr));
        txtfechares->setDisplayFormat(QCoreApplication::translate("ReservaABCDialog", "yyyy/MM/dd H:mm", nullptr));
        txtidmesares->setText(QCoreApplication::translate("ReservaABCDialog", "Numero de Mesa", nullptr));
        label->setText(QString());
        label_8->setText(QCoreApplication::translate("ReservaABCDialog", "<html><head/><body><p><span style=\" font-size:18pt;\">Lista de Reservas</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("ReservaABCDialog", "Hacer Reserva:", nullptr));
        label_10->setText(QCoreApplication::translate("ReservaABCDialog", "Cedula del Cliente:", nullptr));
        label_11->setText(QCoreApplication::translate("ReservaABCDialog", "Numero de Mesa:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservaABCDialog: public Ui_ReservaABCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVAABCDIALOG_H
