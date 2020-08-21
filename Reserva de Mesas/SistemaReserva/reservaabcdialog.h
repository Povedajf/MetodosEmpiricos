#ifndef RESERVAABCDIALOG_H
#define RESERVAABCDIALOG_H

#include <QDialog>

namespace Ui {
class ReservaABCDialog;
}

class QSqlRelationalTableModel;
class QSqlRelationalDelegate;

class ReservaABCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReservaABCDialog(QWidget *parent = nullptr);
    ~ReservaABCDialog();

private slots:
    void on_btnreservar_clicked();
    void on_boxcliente_currentIndexChanged(const QString &arg1);
    void on_boxmesa_currentIndexChanged(const QString &arg1);
    void tabla();
    void on_boxmenudetalle_currentIndexChanged(const QString &arg1);

    void on_btndetalle_clicked();

    void on_btnverdetalle_clicked();

private:
    Ui::ReservaABCDialog *ui;
    QSqlRelationalTableModel *mModel;
    QSqlRelationalDelegate *mDelegate;
};

#endif // RESERVAABCDIALOG_H
