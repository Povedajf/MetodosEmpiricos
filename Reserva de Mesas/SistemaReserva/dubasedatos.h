#ifndef DUBASEDATOS_H
#define DUBASEDATOS_H
#include <QSqlDatabase>
//16:11
class DuBaseDatos
{
public:
    DuBaseDatos(const QString &nombreBaseDatos,
                const QString &nombreUsuario,
                const QString &contraseniaUsuario,
                const QString &direccionServidor,
                int puertoConexion);
    bool abreConexion(QString &mensajeError);
private:
    QSqlDatabase mDb;
};

#endif // DUBASEDATOS_H
