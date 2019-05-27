#ifndef NIVEL_H
#define NIVEL_H

#include <vector>
#include <queue>
#include "nodo.h"
using namespace std;

class nivel{
public:
    /* Atributos: */
    int id = 0;
    int n_nodos = 0;
    vector<nodo*> nodos;
    int x_c = 0 , y_c = 0; // Centro
    queue<nodo*> porRevisar;
    /* ---------- */

    /* Funciones: */
    nivel();
    void ajustarEspacios();
    void setCenter(nodo *central);
    void setCenter(int x, int y);

    void addNodo(nodo *nuevo);
    nodo* popNodo(int i);

    int esExterno(nodo *n, int n_niveles);
    /* ---------- */
};

#endif // NIVEL_H
