#include "framepainter.h"
#include "nodo.h"
#include "Core.h"
#include "ventanaprincipal.h"

FramePainter::FramePainter(QWidget *parent) : QFrame(parent)
{

}

void FramePainter::paintEvent(QPaintEvent *event){
    if(c_data->n_nodos == 0) return;

    int i;
    QPainter fPainter(this);
    nodo *curr;

    // Se dibujarán las elipses con un {centro}, {radiox}, y {radioy}

    fPainter.setPen(Qt::black);
    for(i = 0; i < c_data->n_nodos; ++i){
        curr = &(c_data->nodos[i]);
        fPainter.drawEllipse(
            *(new QPoint(round(curr->x * zoom), round(curr->y * zoom))),
            round(c_data->nodo_r * zoom),
            round(c_data->nodo_r * zoom)
        );
    }
}
