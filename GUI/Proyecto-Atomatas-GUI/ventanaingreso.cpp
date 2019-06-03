#include "ventanaingreso.h"
#include "ui_ventanaingreso.h"

#include <fstream>
#include <QFileDialog>
#include "ventanatabla.h"
#include "ventanapalabras.h"

using namespace std;

ventanaIngreso::ventanaIngreso(QWidget *parent) : //Constructor
    QDialog(parent),
    ui(new Ui::ventanaIngreso){

    ui->setupUi(this);
    c_data = new Core();
        // Limpia 'Automata.txt'
    ofstream archivo;
    archivo.open("Automata.txt");
    archivo.close();
}

void ventanaIngreso::on_nSimbolosQSB_valueChanged(int value){}

void ventanaIngreso::on_nNodosQSB_valueChanged(int value){}

int ventanaIngreso::getNNodos(){
    ui->nNodosQSB->value();
}

int ventanaIngreso::getNSimbolos(){
    ui->nSimbolosQSB->value();
}

ventanaIngreso::~ventanaIngreso(){
    delete ui;
}

void ventanaIngreso::on_buttonBox_accepted(){
    /* - Obtiene datos de interfaz */
    /* - Guarda en archivo 'Automata.txt' */

    ofstream file;
    file.open("Automata.txt", ios_base::app); // Para append

    c_data->n_simbolos = getNSimbolos();
    c_data->n_nodos = getNNodos();
    file << c_data->n_simbolos << std::endl;

    for (int i=0; i < c_data->n_simbolos; ++i){
        if (i < 10){
            file << char(i + 48);
        }
        else if (i >= 10 and i < 36) {
            file << char(i + 55);
        }
        else if (i >= 36 and i <= 62){
            file << char(i + 61);
        }

        file << ' ';
    }
    file << '\n';
    file << c_data->n_nodos << '\n';

    file.close();

    // Se crea siguiente ventana:
    ventanaTabla vT(this, c_data);
    vT.setModal(true);
    vT.exec();

}

void ventanaIngreso::on_bLeerArchivo_clicked(){
    // Se obtiene path desde explorador de archivos:
    QFileDialog qFD;
    qFD.setFileMode(QFileDialog::ExistingFiles);
    QString path = qFD.getOpenFileName(this, "Seleccionar archivo", ".", "Archivos de texto (*.txt)");

    // Se lee .txt, y se crea siguiente ventana:
    c_data->readFromFile((char *) path.toStdString().c_str());
    ventanapalabras vP(this, c_data);
    if(vP.c_data->checkAutom()){
        vP.setModal(true);
        vP.exec();
    }
}
