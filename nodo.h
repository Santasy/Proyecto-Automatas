#ifndef P_HEADERS
#define P_HEADERS
	#include <bits/stdc++.h>

	/* Nuestras cabeceras: */
	#include "nodo.h"
#endif

using namespace std;

/*:::::Clase nodo:::::*/

class nodo{
	public:
		char *id = new char[10];  // Identificador normalizado
		char *tag = new char[10]; // Identificador personalizado
		int x, y;
		vector<nodo*> enlaces;

		/* Funciones: */
		void test();
};

/*:::::Definiciones:::::*/

void nodo::test(){
	cout << "Test\n";
}