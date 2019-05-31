#include "ventanaingreso.h"
#include "ui_ventanaingreso.h"

ventanaIngreso::ventanaIngreso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaIngreso)
{
    ui->setupUi(this);
}

ventanaIngreso::~ventanaIngreso()
{
    delete ui;
}
