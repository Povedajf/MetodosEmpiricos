#include "reservaabcdialog.h"
#include "ui_reservaabcdialog.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QString>
enum ColumnaReserva
{
    NumeroReserva,CedulaCli,NumeroPer,fecha,idmesa
};
ReservaABCDialog::ReservaABCDialog(QWidget *parent):QDialog(parent),ui(new Ui::ReservaABCDialog)
{
    ui->setupUi(this);
    this->tabla();
    QSqlQuery  qrybox,qryboxm;
    QSqlQueryModel * modalbox =new QSqlQueryModel();
    QSqlQueryModel * modalboxm =new QSqlQueryModel();
    qrybox.prepare("SELECT nombre_cliente FROM proyecto1reserva.cliente;");
    qryboxm.prepare("SELECT ubicacion_mesa FROM proyecto1reserva.mesa;");
    qrybox.exec();
    qryboxm.exec();
    modalbox->setQuery(qrybox);
    ui->boxcliente->setModel(modalbox);
    modalboxm->setQuery(qryboxm);
    ui->boxmesa->setModel(modalboxm);
}
ReservaABCDialog::~ReservaABCDialog()
{
    delete ui;
}
void ReservaABCDialog::on_btnreservar_clicked()
{
    QString cedulaclires,cedulaclires1,numperres,fechares,idmesares;
    cedulaclires1 = ui->txtcedulaclires1->text();
    numperres = ui->txtnumperres->text();
    fechares = ui->txtfechares->text();
    idmesares = ui->txtidmesares->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO `proyecto1reserva`.`reserva`(`cedula_cliente`,`num_personas_reserva`,`fecha_hora_reserva`,`id_mesa`) VALUES('"+cedulaclires1+"',"+numperres+",'"+fechares+"',"+idmesares+")");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Guardado"),tr("Reserva Guardada"));
    }
    else{
        //QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        QMessageBox::critical(this,tr("Error::"),tr("Debe llenar todos los recuadros"));
    }
    this->tabla();
}

void ReservaABCDialog::on_boxcliente_currentIndexChanged(const QString &arg1)
{
   QString nombre=ui->boxcliente->currentText();
    QSqlQuery qryb;
    qryb.prepare("SELECT cedula_cliente FROM proyecto1reserva.cliente where nombre_cliente= '"+nombre+"';");
    if(qryb.exec()){
        while(qryb.next()){
            ui->txtcedulaclires1->setText(qryb.value(0).toString());
        }
    }else{QMessageBox::critical(this,tr("Error::"),qryb.lastError().text());}
}

void  ReservaABCDialog::tabla(){

    mModel=new QSqlRelationalTableModel(this);
    mDelegate=new QSqlRelationalDelegate(this);
    mModel->setTable("reserva");
    mModel->select();
    mModel->setHeaderData(NumeroReserva, Qt::Horizontal, tr("Numero de reserva"));
    mModel->setHeaderData(NumeroPer, Qt::Horizontal, tr("Numero de personas"));
    mModel->setHeaderData(fecha, Qt::Horizontal,tr("Fecha"));
    mModel->setHeaderData(CedulaCli, Qt::Horizontal,tr("Cliente"));
    mModel->setHeaderData(idmesa, Qt::Horizontal,tr("Mesa"));
    mModel->setRelation(CedulaCli, QSqlRelation("cliente","cedula_cliente","nombre_cliente"));
    mModel->setRelation(idmesa, QSqlRelation("mesa","id_mesa","nombre_menu"));
    ui->tableView->setModel(mModel);
    ui->tableView->setItemDelegate(mDelegate);
}

void ReservaABCDialog::on_boxmesa_currentIndexChanged(const QString &arg1)
{
    QString mesa=ui->boxmesa->currentText();
     QSqlQuery qrym;
     qrym.prepare("SELECT id_mesa FROM proyecto1reserva.mesa where ubicacion_mesa = '"+mesa+"';");
     if(qrym.exec()){
         while(qrym.next()){
             ui->txtidmesares->setText(qrym.value(0).toString());
         }
     }else{QMessageBox::critical(this,tr("Error::"),qrym.lastError().text());}
}
