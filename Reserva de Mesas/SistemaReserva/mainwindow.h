#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <dubasedatos.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
private slots:
        void on_actionQuitar_triggered();

        void on_actionReservaABC_triggered();

        void on_pushButton_clicked();


        void on_btnMesa_clicked();

        void on_actionClienteABC_triggered();

        void on_pushButton_2_clicked();

private:
        Ui::MainWindow *ui;
        DuBaseDatos mBaseDatos;
};
#endif // MAINWINDOW_H
