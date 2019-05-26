#ifndef CORE_H
#define CORE_H
#include <bits/stdc++.h>
#include "nodo.h"

/* Variables globales: */
class Core{
public:
    int n_nodos = 0;
    vector<nodo> nodos;

    int n_finales = 0;
    vector<int> nodos_f;

    int n_simbolos = 0;
    vector<pair<char, int>> simbolos;
    /* ---------- */

    /* Funciones: */
    Core();
    bool readFromFile(char *ruta);
    bool saveToFile(char *ruta);
    bool toLog(char *texto);

    bool checkWord(char *palabra, nodo *actual);
    int getSimIndex(char c);
    bool checkAutom();
    /* ---------- */

    /* ---------- */
};

#endif // CORE_SOURCE
