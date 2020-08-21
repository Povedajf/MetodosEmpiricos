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
enum ColumnaDetalle
{
    detalle,reserva,menu,cantidad
};
ReservaABCDialog::ReservaABCDialog(QWidget *parent):QDialog(parent),ui(new Ui::ReservaABCDialog)
{
    ui->setupUi(this);
    this->tabla();
    QSqlQuery  qrybox,qryboxm,qryboxmenudetalle;
    QSqlQueryModel * modalbox =new QSqlQueryModel();
    QSqlQueryModel * modalboxm =new QSqlQueryModel();
    QSqlQueryModel * modalboxmenudetalle =new QSqlQueryModel();

    qrybox.prepare("SELECT nombre_cliente FROM proyecto1reserva.cliente;");
    qryboxm.prepare("SELECT ubicacion_mesa FROM proyecto1reserva.mesa;");
    qryboxmenudetalle.prepare("SELECT nombre_menu FROM proyecto1reserva.menu;");

    qrybox.exec();
    qryboxm.exec();
    qryboxmenudetalle.exec();

    modalbox->setQuery(qrybox);
    ui->boxcliente->setModel(modalbox);
    modalboxm->setQuery(qryboxm);
    ui->boxmesa->setModel(modalboxm);
    modalboxmenudetalle->setQuery(qryboxmenudetalle);
    ui->boxmenudetalle->setModel(modalboxmenudetalle);
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
    if(qry.exec() ){
        QMessageBox::critical(this,tr("Guardado"),tr("Reserva Guardada"));
    }
    else{
        //QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        QMessageBox::critical(this,tr("Error::"),tr("Debe llenar todos los recuadros"));
    }
    this->tabla();
}
// -----------------------------------------------------------combobox--------------------------------------------------------------//
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
void ReservaABCDialog::on_boxmenudetalle_currentIndexChanged(const QString &arg1)
{
    //labelmenudetalle
    QString menudetalle=ui->boxmenudetalle->currentText();
     QSqlQuery qrymenu;
     qrymenu.prepare("SELECT id_menu FROM proyecto1reserva.menu where nombre_menu = '"+menudetalle+"';");
     if(qrymenu.exec()){
         while(qrymenu.next()){
             ui->labelmenudetalle->setText(qrymenu.value(0).toString());
         }
     }else{QMessageBox::critical(this,tr("Error::"),qrymenu.lastError().text());}
}

// -----------------------------------------------------------tablas--------------------------------------------------------------//

void  ReservaABCDialog::tabla(){

    QSqlQueryModel * modal=new QSqlQueryModel();
    QSqlQuery qryverd;
    qryverd.prepare("select c.nombre_cliente as Cliente,c.cedula_cliente as Cedula,r.num_personas_reserva as Numero_de_personas,r.fecha_hora_reserva as Fecha,m.ubicacion_mesa as Ubicacion_de_mesa from cliente c INNER JOIN reserva r  ON c.cedula_cliente=r.cedula_cliente  INNER JOIN mesa m on r.id_mesa=m.id_mesa ;");
    qryverd.exec();
    modal->setQuery(qryverd);
    ui->tableView->setModel(modal);
    qDebug() << (modal->rowCount());
}

void ReservaABCDialog::on_btndetalle_clicked()
{
    QString cantidaddetalle,menudetalle,labelReserva,detallecli;
    QString cedulaclires1 = ui->txtcedulaclires1->text();
    QSqlQuery qry,qryid,qrydetalle;
    qryid.prepare("select id_reserva FROM proyecto1reserva.reserva where cedula_cliente  ='"+cedulaclires1+"';");
    if(qryid.exec()){
        while(qryid.next()){
            ui->labelidreserva->setText(qryid.value(0).toString());
        }
    }else{QMessageBox::critical(this,tr("Error::"),qryid.lastError().text());}

    //detalle de la reserva...labelidreserva
    menudetalle=ui->labelmenudetalle->text();
    cantidaddetalle=ui->numcantidaddetalle->text();
    labelReserva=ui->labelidreserva->text();
    qrydetalle.prepare("INSERT INTO `proyecto1reserva`.`detallerecerva`(`id_reserva`,`id_menu`,`cantidad_detalle`)VALUES("+labelReserva+","+menudetalle+","+cantidaddetalle+")");
     if(qrydetalle.exec() ){
      //QMessageBox::critical(this,tr("Guardado"),tr("Menu guardado"));
         }
         else{
      QMessageBox::critical(this,tr("Error::"),qrydetalle.lastError().text());
      //QMessageBox::critical(this,tr("Error::"),tr("Debe llenar todos los recuadros"));
         }
     QSqlQueryModel * modal=new QSqlQueryModel();
     QSqlQuery qryverd,qrytotal;
     qryverd.prepare("select c.nombre_cliente as Nombre,r.id_mesa,men.descripcion_menu as Menu,men.precio_menu as Precio from reserva r INNER JOIN detallerecerva detalle  ON r.id_reserva=detalle.id_reserva  INNER JOIN menu men on men.id_menu=detalle.id_menu INNER JOIN cliente c  ON c.cedula_cliente=r.cedula_cliente where r.cedula_cliente ='"+cedulaclires1+"' ;");
     qryverd.exec();
     modal->setQuery(qryverd);
     ui->tabladetalles->setModel(modal);
     qDebug() << (modal->rowCount());
     qDebug() << (cedulaclires1);
     qrytotal.prepare("select sum(men.precio_menu) from reserva r INNER JOIN detallerecerva detalle  ON r.id_reserva=detalle.id_reserva  INNER JOIN menu men on men.id_menu=detalle.id_menu INNER JOIN cliente c  ON c.cedula_cliente=r.cedula_cliente where r.cedula_cliente ='"+cedulaclires1+"';");
     if(qrytotal.exec()){
         while(qrytotal.next()){
             ui->lbtotal->setText(qrytotal.value(0).toString());
         }
     }else{QMessageBox::critical(this,tr("Error::"),qrytotal.lastError().text());}
}

void ReservaABCDialog::on_btnverdetalle_clicked()
{
        QString cedulaclires1 = ui->txtcedulaclires1->text();
        QSqlQueryModel * modal=new QSqlQueryModel();
        QSqlQuery qryverd, qrytotal;
        qryverd.prepare("select c.nombre_cliente,r.id_mesa,men.descripcion_menu,men.precio_menu from reserva r INNER JOIN detallerecerva detalle  ON r.id_reserva=detalle.id_reserva  INNER JOIN menu men on men.id_menu=detalle.id_menu INNER JOIN cliente c  ON c.cedula_cliente=r.cedula_cliente where r.cedula_cliente ='"+cedulaclires1+"' ;");
        qryverd.exec();
        modal->setQuery(qryverd);
        ui->tabladetalles->setModel(modal);
        qDebug() << (modal->rowCount());
        qrytotal.prepare("select sum(men.precio_menu) from reserva r INNER JOIN detallerecerva detalle  ON r.id_reserva=detalle.id_reserva  INNER JOIN menu men on men.id_menu=detalle.id_menu INNER JOIN cliente c  ON c.cedula_cliente=r.cedula_cliente where r.cedula_cliente ='"+cedulaclires1+"';");

        qrytotal.prepare("select sum(men.precio_menu) from reserva r INNER JOIN detallerecerva detalle  ON r.id_reserva=detalle.id_reserva  INNER JOIN menu men on men.id_menu=detalle.id_menu INNER JOIN cliente c  ON c.cedula_cliente=r.cedula_cliente where r.cedula_cliente ='"+cedulaclires1+"';");
        if(qrytotal.exec()){
            while(qrytotal.next()){
                ui->lbtotal->setText(qrytotal.value(0).toString());
            }
        }else{QMessageBox::critical(this,tr("Error::"),qrytotal.lastError().text());}
   }


