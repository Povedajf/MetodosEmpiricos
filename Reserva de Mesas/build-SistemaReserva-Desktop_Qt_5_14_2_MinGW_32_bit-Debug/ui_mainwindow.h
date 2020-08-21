/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitar;
    QAction *actionReservaABC;
    QAction *actionClienteABC;
    QWidget *widget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuhbgvfcrde;
    QMenu *menucliente;
    QMenu *menumenu;
    QMenu *menumesa;
    QMenu *menureserva;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(757, 599);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionQuitar = new QAction(MainWindow);
        actionQuitar->setObjectName(QString::fromUtf8("actionQuitar"));
        actionReservaABC = new QAction(MainWindow);
        actionReservaABC->setObjectName(QString::fromUtf8("actionReservaABC"));
        actionClienteABC = new QAction(MainWindow);
        actionClienteABC->setObjectName(QString::fromUtf8("actionClienteABC"));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 470, 201, 81));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" border: 2px solid whitesmoke;\n"
" border-radius: 5px;\n"
" background-color: #CFB8A9;\n"
" padding: 10px;\n"
" margin: 10px;\n"
"}\n"
"QPushButton:hover {\n"
" background-color: #A92727;\n"
"}\n"
"* {\n"
"     font: 57 10pt \"Roboto\";\n"
"}\n"
"QPushButton[text='soy btn'] {\n"
"   color: red;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/reservar.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(130, 100));
        pushButton->setFlat(false);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-110, -20, 861, 591));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/fondo.jpg")));
        label->setScaledContents(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 370, 181, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton_2->setFont(font);
        MainWindow->setCentralWidget(widget);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 21));
        menuhbgvfcrde = new QMenu(menuBar);
        menuhbgvfcrde->setObjectName(QString::fromUtf8("menuhbgvfcrde"));
        menucliente = new QMenu(menuBar);
        menucliente->setObjectName(QString::fromUtf8("menucliente"));
        menumenu = new QMenu(menuBar);
        menumenu->setObjectName(QString::fromUtf8("menumenu"));
        menumesa = new QMenu(menuBar);
        menumesa->setObjectName(QString::fromUtf8("menumesa"));
        menureserva = new QMenu(menuBar);
        menureserva->setObjectName(QString::fromUtf8("menureserva"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuhbgvfcrde->menuAction());
        menuBar->addAction(menucliente->menuAction());
        menuBar->addAction(menumenu->menuAction());
        menuBar->addAction(menumesa->menuAction());
        menuBar->addAction(menureserva->menuAction());
        menuhbgvfcrde->addAction(actionQuitar);
        menucliente->addAction(actionClienteABC);
        menureserva->addAction(actionReservaABC);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitar->setText(QCoreApplication::translate("MainWindow", "Quitar ", nullptr));
        actionReservaABC->setText(QCoreApplication::translate("MainWindow", "Alta,aja,consulta,modificacion", nullptr));
        actionClienteABC->setText(QCoreApplication::translate("MainWindow", "Alta, Baja, Conculta, Modificaci\303\263n", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Agregar Cliente", nullptr));
        menuhbgvfcrde->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menucliente->setTitle(QCoreApplication::translate("MainWindow", "Cliente", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menumesa->setTitle(QCoreApplication::translate("MainWindow", "Mesa", nullptr));
        menureserva->setTitle(QCoreApplication::translate("MainWindow", "Reserva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
