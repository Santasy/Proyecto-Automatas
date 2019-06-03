#ifndef NODO_H
#define NODO_H

/*:::::Clase nodo:::::*/
#include <vector>

using namespace std;

class nodo{
	public:
        char *id = new char[10];  // Identificador normalizado
        vector<nodo*> enlaces;
};

#endif // NODO_H
