#ifndef NODO_H
#define NODO_H

/*:::::Clase nodo:::::*/
#include <vector>

using namespace std;

class nodo{
	public:
		char *id = new char[10];  // Identificador normalizado
		char *tag = new char[10]; // Identificador personalizado
		int x, y;
        vector<nodo*> enlaces;

		/* Funciones: */
		void test();
};

#endif // NODO_H
