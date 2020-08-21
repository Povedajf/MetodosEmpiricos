#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservaabcdialog.h"
#include "clienteabcdialog.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,mBaseDatos("proyecto1reserva",
                "root",
                "12345",
                "localhost",
                3306
                )
{
    ui->setupUi(this);
    QString mensajeError;
    if(!mBaseDatos.abreConexion(mensajeError)){
        QMessageBox::critical(this,tr("Error"),mensajeError);
        close();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuitar_triggered()
{
    close();
}

void MainWindow::on_actionReservaABC_triggered()
{
    ReservaABCDialog d(this);
    d.exec();
}

void MainWindow::on_pushButton_clicked()
{
    ReservaABCDialog d(this);
    d.exec();
}

void MainWindow::on_actionClienteABC_triggered()
{
    ClienteABCDialog d(this);
    d.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    ClienteABCDialog d(this);
    d.exec();
}
