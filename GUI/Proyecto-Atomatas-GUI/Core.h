#ifndef CORE_H
#define CORE_H
#include <bits/stdc++.h>
#include "nodo.h"
#include "nivel.h"

class Core{
public:
    /* Atributos: */
    int n_nodos = 0;
    vector<nodo> nodos;

    int n_finales = 0;
    vector<int> nodos_f;

    int n_simbolos = 0;
    vector<pair<char, int>> simbolos;

    int n_niveles = 0;
    vector<nivel> niveles;

    int nodo_r = 15; // Radio del nodo
    int nivel_r = 100; // Radio del nivel
    int max_cn = 0;
    /* ---------- */

    /* Funciones: */
    Core();
    bool readFromFile(char *ruta);
    bool saveToFile(char *ruta);
    bool toLog(char *texto);

    bool checkWord(char *palabra, nodo *actual);
    int getSimIndex(char c);
    bool checkAutom();
    bool esFinal(nodo *n);

    void calcularNiveles();
    /* ---------- */
};

#endif // CORE_H
