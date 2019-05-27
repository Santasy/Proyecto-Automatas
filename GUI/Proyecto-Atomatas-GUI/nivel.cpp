#include "nivel.h"

nivel::nivel()
{

}

void nivel::setCenter(nodo *centro){
    x_c = centro->x;
    y_c = centro->y;
}

void nivel::setCenter(int x, int y){
    x_c = x;
    y_c = y;
}

void nivel::addNodo(nodo *nuevo){
    nodos.push_back(nuevo);
    ++n_nodos;
}

nodo* nivel::popNodo(int i){
    nodo* n = nodos[i];
    nodos.erase(nodos.begin() + i);
    --n_nodos;
    return n;
}

int nivel::esExterno(nodo *n, int n_niveles){
    /* Valores:
     * -1 : Está en extremo inf, o nodos finales
     *  0 : No es extremo
     *  1 : Está en extremo sup
     */
    if(n->id == this->nodos[0]->id || n->nivel == n_niveles - 1){
        return -1;
    }
    if(n->id == this->nodos[n_nodos - 1]->id){
        return 1;
    }
    return 0;
}
