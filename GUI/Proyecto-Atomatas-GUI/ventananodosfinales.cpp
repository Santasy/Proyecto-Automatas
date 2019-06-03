#include "ventananodosfinales.h"
#include "ui_ventananodosfinales.h"
#include "Core.h"
#include "ventanapalabras.h"

#include <fstream>

ventanaNodosFinales::ventanaNodosFinales(QWidget *parent, Core *_core) :
    QDialog(parent),
    ui(new Ui::ventanaNodosFinales)
{
    ui->setupUi(this);
    c_data = _core;

    int nCol = c_data->n_finales;
    ui->nodosFinales->setColumnCount(nCol);

}

ventanaNodosFinales::~ventanaNodosFinales()
{
    delete ui;
}

void ventanaNodosFinales::on_buttonBox_accepted()
{
    std::ofstream file;
    file.open("Automata.txt", std::ios_base::app);

    int cCount = ui->nodosFinales->columnCount();

    for (int j = 0; j < cCount;j++){

        file << (ui->nodosFinales->item(0,j)->text() + " ").toStdString();

    }

    file << std::endl;

    file.close();

    c_data->readFromFile("Automata.txt");
    ventanapalabras vP(this, c_data);
    vP.setModal(true);
    vP.exec();
}