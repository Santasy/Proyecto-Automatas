#ifndef NODO_H
#define NODO_H

/*:::::Clase nodo:::::*/
#include <vector>

using namespace std;

class nodo{
	public:
		char *id = new char[10];  // Identificador normalizado
		char *tag = new char[10]; // Identificador personalizado
        int nivel = 0; // Identificador de nivel
        int x, y; // Posición en pantalla
        bool visitado = false; // Para cálculos de niveles
        // Conexiones por lado (Up, Down, Rigth, Left):
        int cU = 0, cD = 0, cR = 0, cL = 0;
        vector<nodo*> enlaces;

		/* Funciones: */
		void test();
};

#endif // NODO_H
