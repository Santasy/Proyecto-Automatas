#include "ventanatabla.h"
#include "ui_ventanatabla.h"

ventanaTabla::ventanaTabla(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaTabla)
{
    ui->setupUi(this);
}

ventanaTabla::~ventanaTabla()
{
    delete ui;
}
