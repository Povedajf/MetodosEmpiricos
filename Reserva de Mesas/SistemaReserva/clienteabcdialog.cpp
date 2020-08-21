#include "clienteabcdialog.h"
#include "ui_clienteabcdialog.h"
#include <QSqlTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QString>

enum ColumnaCliente
{
    CedulaCli,
    NombreCli,
    TelefonoCli,
    DireccionCli
};

ClienteABCDialog::ClienteABCDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClienteABCDialog)
{
    ui->setupUi(this);
    mModel = new QSqlTableModel(this);
    mModel->setTable("cliente");
    mModel->select();
    mModel->setHeaderData(CedulaCli, Qt::Horizontal, "Cédula");
    mModel->setHeaderData(NombreCli, Qt::Horizontal, "Nombre");
    mModel->setHeaderData(TelefonoCli, Qt::Horizontal, "Teléfono");
    mModel->setHeaderData(DireccionCli, Qt::Horizontal, "Dirección");
}

ClienteABCDialog::~ClienteABCDialog()
{
    delete ui;
}

void ClienteABCDialog::on_GrabarButton_clicked()
{
    QString cedulaCli,nombreCli,telefonoCli,direccionCli;
    cedulaCli = ui->txtCedula->text();
    nombreCli = ui->txtNombre->text();
    telefonoCli = ui->txtTelefono->text();
    direccionCli = ui->txtDirec->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO `cliente` (`cedula_cliente`, `nombre_cliente`, `telefono_cliente`, `direccion_cliente`) VALUES('"+cedulaCli+"',"+nombreCli+",'"+telefonoCli+"',"+direccionCli+")");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Guardado"),tr("Reserva Guardada"));
    }
    else{
        //QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        QMessageBox::critical(this,tr("Error::"),tr("Debe llenar todos los recuadros"));
    }
}



