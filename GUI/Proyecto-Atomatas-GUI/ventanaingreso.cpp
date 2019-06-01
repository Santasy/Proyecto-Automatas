#include "ventanaingreso.h"
#include "ui_ventanaingreso.h"
#include <QSpinBox>

#include "ventanatabla.h"

#include <fstream>
#include <iostream>

using namespace std;

ventanaIngreso::ventanaIngreso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaIngreso)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(openTableWindow()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}

int ventanaIngreso::getNNodos(){
    return ui->nNodosQSB->value();
}

int ventanaIngreso::getNSimbolos(){
    return ui->nSimbolosQSB->value();
}

void ventanaIngreso::on_nSimbolosQSB_valueChanged(int value)
{


    int nSimbolos;

    nSimbolos =  ui->nNodosQSB->value();



}

void ventanaIngreso::on_nNodosQSB_valueChanged(int value)
{

    int nNodos;

    nNodos =  ui->nNodosQSB->value();
}


ventanaIngreso::~ventanaIngreso()
{
    delete ui;
}



void ventanaIngreso::on_buttonBox_accepted()
{
    int nNodos;
    int nSimbolos;

    ofstream file;
    file.open("test.txt", ios_base::app);

    nSimbolos = getNSimbolos();
    nNodos = getNNodos();

    file << nSimbolos << std::endl;
    file << nNodos << std::endl;

    file.close();

    ventanaTabla vT;
    vT.setModal(true);
    vT.exec();
}
