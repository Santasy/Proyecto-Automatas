#include "ventanapalabras.h"
#include "ui_ventanapalabras.h"

ventanapalabras::ventanapalabras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanapalabras)
{
    ui->setupUi(this);
        // Setup tabla:
}

ventanapalabras::~ventanapalabras()
{
    delete ui;
}
