#include "framepainter.h"
#include "nodo.h"
#include "ventanaprincipal.h"

FramePainter::FramePainter(QWidget *parent) : QFrame(parent)
{

}

void FramePainter::paintEvent(QPaintEvent *event){
    if(c_data->n_nodos == 0) return;

    printf("Pintando %d nodos\n", c_data->n_nodos);
    QPainter fPainter(this);
    nodo *curr;
    for(int i = 0; i < c_data->n_nodos; ++i){
        curr = &(c_data->nodos[i]);
        printf("(%d, %d): %s\n", curr->x, curr->y, curr->id);
        fPainter.drawEllipse(curr->x, curr->y, 30, 30);
    }
    printf("Frame actualizado.\n");
}
