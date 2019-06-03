#include "ventananodosfinales.h"
#include "ui_ventananodosfinales.h"

#include <fstream>
#include "ventanapalabras.h"

using namespace std;

ventanaNodosFinales::ventanaNodosFinales(QWidget *parent, Core *_core) :
    QDialog(parent),
    ui(new Ui::ventanaNodosFinales){

    ui->setupUi(this);

    c_data = _core;
    ui->nodosFinales->setColumnCount(c_data->n_finales);
}

ventanaNodosFinales::~ventanaNodosFinales(){
    delete ui;
}

void ventanaNodosFinales::on_buttonBox_accepted()
{
    // Agrega la info. al final de 'Automata.txt'
    ofstream file;
    file.open("Automata.txt", ios_base::app); // Para append

    int cCount = ui->nodosFinales->columnCount();
    for (int j = 0; j < cCount;j++){
        file << (ui->nodosFinales->item(0,j)->text() + " ").toStdString();
    }

    file << '\n';
    file.close();
    printf("Se ha terminado creación de 'Automata.txt'\n");

        // Crea siguiente ventana:
    c_data->readFromFile((char*) "Automata.txt");
    ventanapalabras vP(this, c_data);
    vP.setModal(true);
    vP.exec();
}
