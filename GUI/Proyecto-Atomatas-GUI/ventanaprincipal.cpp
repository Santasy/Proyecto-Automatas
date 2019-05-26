#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

ventanaPrincipal::ventanaPrincipal(QWidget *parent) :
    QMainWindow(parent),

/* Carga de ventanaPrincipal */
ui(new Ui::ventanaPrincipal){
    ui->setupUi(this);

    ui->frameDibujo->c_data = new Core();
}

ventanaPrincipal::~ventanaPrincipal()
{
    delete ui;
}

void ventanaPrincipal::on_button01_clicked(){
    /* Lee automata desde archivo */
    FramePainter *fPainter = (FramePainter *) ui->frameDibujo;

    fPainter->c_data->readFromFile((char *) "entrada.txt");
    fPainter->repaint();
}
