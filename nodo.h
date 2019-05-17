#ifndef P_HEADERS
#define P_HEADERS
	#include <bits/stdc++.h>

	/* Nuestras cabeceras: */
	#include "nodo.h"
#endif

/*:::::Clase nodo:::::*/

using namespace std;

class nodo{
	public:
		int x, y;
		vector<nodo*> enlaces;

		/* Funciones: */
		void test();
};

/*:::::Definiciones:::::*/

void nodo::test(){
	cout << "Test\n";
}