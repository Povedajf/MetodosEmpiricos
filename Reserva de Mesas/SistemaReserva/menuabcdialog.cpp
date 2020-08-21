#include "menuabcdialog.h"
#include "ui_menuabcdialog.h"

MenuABCDialog::MenuABCDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuABCDialog)
{
    ui->setupUi(this);
}

MenuABCDialog::~MenuABCDialog()
{
    delete ui;
}
