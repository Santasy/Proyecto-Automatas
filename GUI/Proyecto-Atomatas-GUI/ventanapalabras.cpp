#include "ventanapalabras.h"
#include "ui_ventanapalabras.h"

ventanapalabras::ventanapalabras(QWidget *parent, Core *_core) :
    QDialog(parent),
    ui(new Ui::ventanapalabras){

    ui->setupUi(this);
    c_data = _core;

        // Headers tabla de resultados:
    ui->tablaResults->setColumnCount(2);
    QTableWidgetItem *nItem = new QTableWidgetItem();
    nItem->setText("Resultado");
    ui->tablaResults->setHorizontalHeaderItem(0, nItem);
    nItem = new QTableWidgetItem();
    nItem->setText("Palabra");
    ui->tablaResults->setHorizontalHeaderItem(1, nItem);

        // Lock de tamaños:
    //  Primera columna más pequeña:
    ui->tablaResults->setColumnWidth(0, 80);
    ui->tablaResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tablaResults->setRowCount(0); // Limpia las líneas

        // Datos de autómata:
    char *texto = new char[100];
    char *aux = new char[5];

        // - Número de Símbolos
    sprintf(texto, "[%d]: ", c_data->n_simbolos);
    for(int i = 0; i < c_data->n_simbolos; ++i){
        sprintf(aux, "%c ", c_data->simbolos[i].first);
        strcat(texto, aux);
    }
    ui->lNS->setText(texto);

        // - Número de Nodos
    sprintf(texto, "%d", c_data->n_nodos);
    ui->lNN->setText(texto);

        // - Nodos Finales:
    sprintf(texto, "[%d]: ", c_data->n_finales);
    for(int i = 0; i < c_data->n_finales; ++i){
        sprintf(aux, "%d ", c_data->nodos_f[i]);
        strcat(texto, aux);
    }
    ui->lNF->setText(texto);
}

ventanapalabras::~ventanapalabras(){
    delete ui;
}

void ventanapalabras::on_bCheckPalabra_clicked(){
        // Obtiene palabra de box:
    ui->lNoValida->setText("");
    char *palabra = new char[100];
    strcpy(palabra, ui->boxPalabra->text().toStdString().c_str());
        // Filtros:
    if((int) palabra[0] == 0){ // Palabra vacía
        printf("Palabra vacía.\n");
        return;
    }
    if(!(c_data->precheckWord(palabra))){ // Palabra fuera del alfabeto
        printf("Palabra no válida.\n");
        ui->lNoValida->setText("Palabra no válida");
        return;
    }

        // Se lee la palabra:
    printf("Se leerá palabra %s\n", palabra);
    ui->tablaLog->clear(); // Limpia tabla de log
    ++currPalabra;

    QListWidgetItem *nItem;
    bool aceptada = c_data->checkWord(
        palabra,              // Palabra original
        &(c_data->nodos[0]),  // Dirección de memoria del primer nodo (inicial)
        ui->tablaLog          // Referencia a la tabla de log
    ); // Se procesa la palabra

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
    /* Añade línea a tablaLog */

    ui->tablaLog->addItem(nItem);
    ui->tablaLog->scrollToBottom(); // Va al final de la lista
}

void ventanapalabras::addResult(char *texto, bool aceptada){
    /* Añade línea a tablaResults */

    int nRow = ui->tablaResults->rowCount();
        // Agrega palabra:
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
        // Agrega:
    ui->tablaResults->setItem(nRow, 0, nItem);
}

void ventanapalabras::on_boxPalabra_textChanged(const QString &arg1)
{

}
