#ifndef CLIENTEABCDIALOG_H
#define CLIENTEABCDIALOG_H

#include <QDialog>

namespace Ui {
class ClienteABCDialog;
}

class QSqlTableModel;

class ClienteABCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClienteABCDialog(QWidget *parent = nullptr);
    ~ClienteABCDialog();

private slots:

    void on_GrabarButton_clicked();

private:
    Ui::ClienteABCDialog *ui;
    QSqlTableModel *mModel;
};

#endif // CLIENTEABCDIALOG_H
