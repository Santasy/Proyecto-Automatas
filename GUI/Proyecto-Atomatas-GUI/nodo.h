#ifndef NODO_H
#define NODO_H


using namespace std;

/*:::::Clase nodo:::::*/
class nodo{
	public:
        char *id = new char[15];  // Identificador normalizado
        vector<nodo*> enlaces;
};
/*::::::::::*/
#endif // NODO_H
