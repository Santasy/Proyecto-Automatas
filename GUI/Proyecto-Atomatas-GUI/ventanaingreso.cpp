#include "ventanaingreso.h"
#include "ui_ventanaingreso.h"
#include <QSpinBox>

#include "ventanatabla.h"

#include <fstream>
#include <iostream>

#include <vector>
using namespace std;

vector <int> info;

ventanaIngreso::ventanaIngreso(QWidget *parent) : //Constructor
    QDialog(parent),
    ui(new Ui::ventanaIngreso)
{
    ui->setupUi(this);
    c_data = new Core();
    printf("Se ha creado Core.\n");
}

int ventanaIngreso::getNNodos(){  //getter del numero de nodos
    return ui->nNodosQSB->value();
}

int ventanaIngreso::getNSimbolos(){  //getter del numero de simbolos
    return ui->nSimbolosQSB->value();
}

void ventanaIngreso::on_nSimbolosQSB_valueChanged(int value)
{

}

void ventanaIngreso::on_nNodosQSB_valueChanged(int value)
{

}


ventanaIngreso::~ventanaIngreso()
{
    delete ui;
}



void ventanaIngreso::on_buttonBox_accepted()
{
    ofstream file;
    file.open("test.txt", ios_base::app);

    c_data->n_simbolos = getNSimbolos();
    c_data->n_nodos = getNNodos();
    file << c_data->n_simbolos << std::endl;

    for (int i=0;i < c_data->n_simbolos;i++){
        if (i<10){
            file << char(i+48);
        }
        else if (i>=10 and i<36) {
            file << char(i+55);
        }
        else if (i>=36 and i<=62){
            file << char(i+61);
        }

        file << " ";

    }
    file << std::endl;

    file << c_data->n_nodos << std::endl;

    file.close();

    info.push_back(c_data->n_simbolos);

    info.push_back(c_data->n_nodos);
    ventanaTabla vT(this, c_data);
    vT.setModal(true);
    vT.exec();

}
