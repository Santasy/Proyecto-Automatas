#include "ventanatabla.h"
#include "ui_ventanatabla.h"

#include "ventanaingreso.h"  //De aquí viene info[]

ventanaTabla::ventanaTabla(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaTabla)
{
    ui->setupUi(this);


}

ventanaTabla::~ventanaTabla()
{

    ui->tableWidget->setColumnCount(info[0]);
    ui->tableWidget->setRowCount(info[1]);

    delete ui;
}

 //::setColumnCount();
