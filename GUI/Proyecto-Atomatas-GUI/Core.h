#ifndef CORE_H
#define CORE_H

#include <QListWidget>
#include <vector>
#include "nodo.h"

using namespace std;

/*:::::Clase Core:::::*/
class Core{
public:
    /* Atributos: */
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

    int getSimIndex(char c);
    bool checkAutom();
    bool esFinal(nodo *n);

    bool precheckWord(char *palabra);
    bool checkWord(char *palabra, nodo *actual, QListWidget *tabla);
    /* ---------- */
};
/*::::::::::*/
#endif // CORE_H
