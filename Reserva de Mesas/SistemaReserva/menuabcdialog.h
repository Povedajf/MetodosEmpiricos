#ifndef MENUABCDIALOG_H
#define MENUABCDIALOG_H

#include <QDialog>

namespace Ui {
class MenuABCDialog;
}

class MenuABCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MenuABCDialog(QWidget *parent = nullptr);
    ~MenuABCDialog();

private:
    Ui::MenuABCDialog *ui;
};

#endif // MENUABCDIALOG_H
