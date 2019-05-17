#ifndef P_HEADERS
#define P_HEADERS
	#include <bits/stdc++.h>

	/* Nuestras cabeceras: */
	#include "nodo.h"
#endif

using namespace std;

/* Variables globales: */
vector<nodo> nodos;
int n_nodos;

// SIMBOLOS;
int n_simbolos;

/* ---------- */

/* Funciones: */
bool readFromFile(char *ruta);
bool saveToFile(char *ruta);

/* ---------- */

/*:::::Programa Principal:::::*/
int main(int argc, char **argv){
	nodo n1;
	n1.test();
	return 0;
}