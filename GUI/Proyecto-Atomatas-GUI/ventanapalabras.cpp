#include "ventanapalabras.h"
#include "ui_ventanapalabras.h"
#include <string>
#include <iostream>
//#include <Qt>

ventanapalabras::ventanapalabras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanapalabras)
{
    ui->setupUi(this);

        // Setup tabla:
    ui->tablaResults->setColumnCount(2);
    QTableWidgetItem *nItem = new QTableWidgetItem();
    nItem->setText("Resultado");
    ui->tablaResults->setHorizontalHeaderItem(0, nItem);
    nItem = new QTableWidgetItem();
    nItem->setText("Palabra");
    ui->tablaResults->setHorizontalHeaderItem(1, nItem);
        //Lock de tamaños
    ui->tablaResults->setColumnWidth(0, 80);
    ui->tablaResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->tablaResults->setRowCount(0);
}

ventanapalabras::~ventanapalabras()
{
    delete ui;
}

void ventanapalabras::on_bCheckPalabra_clicked()
{
    char *palabra = new char[100];
    strcpy(palabra, ui->boxPalabra->text().toStdString().c_str());
    if((int) palabra[0] == 0){
        printf("Palabra vacía.\n");
        return;
    }
    if(!(c_data->precheckWord(palabra))){
        printf("Palabra no válida.\n");
        return;
    }
        // Se lee la palabra:
    ui->tablaLog->clear();
    ++currPalabra;

    printf("Se leerá palabra %s\n", palabra);
    QListWidgetItem *nItem;
    bool aceptada = c_data->checkWord(palabra, &(c_data->nodos[0]), ui->tablaLog);
    if(aceptada){ // Si la palabra se aceptó
        nItem = new QListWidgetItem("Palabra aceptada.");
        nItem->setBackground(Qt::green);
    }else{ // Si no se aceptó
        nItem = new QListWidgetItem("Palabra no aceptada.");
        nItem->setBackground(Qt::red);
    }
    addLog(nItem);
    addResult(palabra, aceptada);
}

void ventanapalabras::addLog(QListWidgetItem *nItem){
    ui->tablaLog->addItem(nItem);
    ui->tablaLog->scrollToBottom();
}

void ventanapalabras::addResult(char *texto, bool aceptada){
    int nRow = ui->tablaResults->rowCount();
        // Palabra:
    ui->tablaResults->insertRow(nRow);
    QTableWidgetItem *nItem = new QTableWidgetItem(texto);
    ui->tablaResults->setItem(nRow, 1, nItem);

        // Color de resultado:
    nItem = new QTableWidgetItem("");
    if(aceptada){
        nItem->setBackground(Qt::green);
    }else{
        nItem->setBackground(Qt::red);
    }
    ui->tablaResults->setItem(nRow, 0, nItem);
}

void ventanapalabras::on_boxPalabra_textChanged(const QString &arg1)
{

}
