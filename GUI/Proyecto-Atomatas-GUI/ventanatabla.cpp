#include "ventanatabla.h"
#include "ui_ventanatabla.h"
#include <QSpinBox>

#include "ventanaingreso.h"
#include "QChar"

#include "ventananodosfinales.h"

#include <fstream>
#include "ventanaingreso.h"

ventanaTabla::ventanaTabla(QWidget *parent, Core *_core) :  //constructor
    QDialog(parent),
    ui(new Ui::ventanaTabla)
{
    ui->setupUi(this);
    c_data = _core;

    QStringList filas;
    QStringList columnas;
    if(c_data == nullptr){
        printf("c_data no existe\n");
    }

    int nCol = c_data->n_simbolos;
    int nFil = c_data->n_nodos;
    std::string estado;
    ui->tableWidget->setColumnCount(nCol);
    ui->tableWidget->setRowCount(nFil);

    for (int i = 0; i<nCol;i++){
        if (i<10){
            estado = char(i+48);
        }
        else if (i>=10 and i<36) {
            estado = char(i+55);
        }
        else if (i>=36 and i<=62){
            estado = char(i+61);
        }
        columnas.append(QString::fromStdString(estado));
    }

    for (int i = 0; i<nFil;i++){

        estado = "q" + std::to_string(i);
        filas.append(QString::fromStdString(estado));
    }
    ui->tableWidget->setVerticalHeaderLabels( filas );

    ui->tableWidget->setHorizontalHeaderLabels( columnas );
}

int ventanaTabla::getNNodosFinales(){
    return ui->nFinales->value();
}


ventanaTabla::~ventanaTabla()
{
    delete ui;

}


void ventanaTabla::on_buttonBox_accepted()
{
    std::ofstream file;
    file.open("test.txt", std::ios_base::app);

    int rCount = ui->tableWidget->rowCount();
    int cCount = ui->tableWidget->columnCount();

    for (int i = 0; i < rCount; i++){
        for (int j = 0; j < cCount;j++){

            file << (ui->tableWidget->item(i,j)->text() + " ").toStdString();

        }

        file << std::endl;
    }

    c_data->n_finales = getNNodosFinales();
    file << c_data->n_finales << std::endl;

    file.close();

    ventanaNodosFinales vNF(this, c_data);
    vNF.setModal(true);
    vNF.exec();
}
