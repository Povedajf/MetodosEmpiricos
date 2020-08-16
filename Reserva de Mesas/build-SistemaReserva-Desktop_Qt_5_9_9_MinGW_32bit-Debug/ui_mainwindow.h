/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QWidget *widget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuhbgvfcrde;
    QMenu *menucliente;
    QMenu *menumenu;
    QMenu *menumesa;
    QMenu *menureserva;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(757, 599);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionQuitar = new QAction(MainWindow);
        actionQuitar->setObjectName(QStringLiteral("actionQuitar"));
        actionReservaABC = new QAction(MainWindow);
        actionReservaABC->setObjectName(QStringLiteral("actionReservaABC"));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 470, 201, 81));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        icon.addFile(QStringLiteral(":/imagenes/reservar.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(130, 100));
        pushButton->setFlat(false);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-110, -20, 861, 591));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/fondo.jpg")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(widget);
        label->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 26));
        menuhbgvfcrde = new QMenu(menuBar);
        menuhbgvfcrde->setObjectName(QStringLiteral("menuhbgvfcrde"));
        menucliente = new QMenu(menuBar);
        menucliente->setObjectName(QStringLiteral("menucliente"));
        menumenu = new QMenu(menuBar);
        menumenu->setObjectName(QStringLiteral("menumenu"));
        menumesa = new QMenu(menuBar);
        menumesa->setObjectName(QStringLiteral("menumesa"));
        menureserva = new QMenu(menuBar);
        menureserva->setObjectName(QStringLiteral("menureserva"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuhbgvfcrde->menuAction());
        menuBar->addAction(menucliente->menuAction());
        menuBar->addAction(menumenu->menuAction());
        menuBar->addAction(menumesa->menuAction());
        menuBar->addAction(menureserva->menuAction());
        menuhbgvfcrde->addAction(actionQuitar);
        menureserva->addAction(actionReservaABC);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionQuitar->setText(QApplication::translate("MainWindow", "Quitar ", Q_NULLPTR));
        actionReservaABC->setText(QApplication::translate("MainWindow", "Alta,aja,consulta,modificacion", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QString());
        menuhbgvfcrde->setTitle(QApplication::translate("MainWindow", "Archivo", Q_NULLPTR));
        menucliente->setTitle(QApplication::translate("MainWindow", "Cliente", Q_NULLPTR));
        menumenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        menumesa->setTitle(QApplication::translate("MainWindow", "Mesa", Q_NULLPTR));
        menureserva->setTitle(QApplication::translate("MainWindow", "Reserva", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
