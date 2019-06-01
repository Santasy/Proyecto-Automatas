#include "ventanaingreso.h"
#include "ui_ventanaingreso.h"
#include <QSpinBox>

#include "ventanatabla.h"


ventanaIngreso::ventanaIngreso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaIngreso)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(openTableWindow()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}

void ventanaIngreso::on_nSimbolosQSB_valueChanged(int value)
{

    int nSimbolos;

    nSimbolos =  ui->nNodosQSB->value();

}

void ventanaIngreso::on_nNodosQSB_valueChanged(int value)
{

    int nNodos;
    //int nNodos2;

    nNodos =  ui->nNodosQSB->value();
    //nNodos2 = value;

    //uioutputWidget->setText(QString::number(value + ui->nNodosQSB->value()));
}


ventanaIngreso::~ventanaIngreso()
{
    delete ui;
}



void ventanaIngreso::on_buttonBox_accepted()
{
    ventanaTabla vT;
    vT.setModal(true);
    vT.exec();
}
