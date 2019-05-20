#ifndef P_HEADERS
#define P_HEADERS
	#include <bits/stdc++.h>

	/* Nuestras cabeceras: */
	#include "nodo.h"
#endif

using namespace std;

/* Variables globales: */
int n_nodos;
vector<nodo> nodos;
int n_finales;
vector<int> nodos_f;

// SIMBOLOS;
int n_simbolos;
vector<pair<char, int>> simbolos;
/* ---------- */

/* Funciones: */
bool readFromFile(char *ruta);
bool saveToFile(char *ruta);

bool checkWord(char *palabra, nodo *actual);
int getSimIndex(char c);
/* ---------- */

/*:::::Programa Principal:::::*/
int main(int argc, char **argv){
		/* Inicio del programa */
	if(argc == 2 && atoi(argv[1]) == 1){
		printf("Se leerán datos desde archivo.\n");
		readFromFile((char*) "entrada.txt");
	}else{
		// TODO: Se deben ingresar los datos desde terminal
		printf("Característica no terminada.\n");
		printf("Ejecutar como './core 1' .\n");
		return 0;
	}

		/* Lectura de palabras */
	printf("Nota: Para finalizar la ejecución, entregar 'x.'\n");
	char *palabra = new char[20];
	int c_palabras = 0, c_aceptadas = 0; // Contadores
	while(printf("\n\nIngrese palabra: ") && cin >> palabra && strcmp(palabra, "x.") != 0){
		++c_palabras;
		printf("Analizando -%s-\n", palabra);
		bool resultado = checkWord(palabra, &nodos[0]);
		if(resultado){
			printf("Palabra aceptada por el autómata.\n");
			++c_aceptadas;
		}else{
			printf("Palabra no aceptada por el autómata.\n");
		}
	}

		/* Término de ejecución */
	printf("%d de %d palabra(s) aceptada(s).\n", c_aceptadas, c_palabras);
	// saveToFile((char*) "automata01.txt"); // Test de función
	printf("Terminando ejecución.\n");
	return 0;
}
/* ---------- */

/* Definición de funciones */
bool checkWord(char *palabra, nodo *actual){
	int i;
	if((int) palabra[0] != 0){
		printf("Nodo %s analizando %c.\n", actual->id, palabra[0]);
		return checkWord(palabra + 1, actual->enlaces[getSimIndex(palabra[0])]);
	}else{
		printf("Finalizado en nodo %s.\n", actual->id);
		int id = atoi(actual->id + 1); // Obtiene el índice del nodo
		for(i = 0; i < n_finales; ++i){ // Lo busca dentro de los finales
			if(id == nodos_f[i])
				return true;
		}
		return false;
	}
}

int getSimIndex(char c){
	for(int i = 0; i < n_simbolos; ++i){
		if(c == simbolos[i].first) return i;
	}
	return -1;
}

bool readFromFile(char *ruta){
	int i, j; // Iteradores
	ifstream archivo;
	archivo.open(ruta);
	try{
			/* Simbolos: */
		archivo >> n_simbolos;
		simbolos.clear();
		char sim;
		for(i = 0; i < n_simbolos; ++i){
			archivo >> sim;
			simbolos.push_back(*(new pair<char, int>(sim, i)));
		}
			/* Nodos: */
		archivo >> n_nodos;
		nodos.clear();
		for(i = 0; i < n_nodos; i++){ // Se crea cada nodo
			nodo nuevoN;
			sprintf(nuevoN.id, "q%d", i);
			nodos.push_back(nuevoN);
		}
		int id;
		for(i = 0; i < n_nodos; ++i){ // Se crea cada conexión
			for(j = 0; j < n_simbolos; ++j){ // Por cada símbolo
				archivo >> id;
				nodos[i].enlaces.push_back(&nodos[id]);
			}
		}
		archivo >> n_finales;
		for(i = 0; i < n_finales; ++i){
			archivo >> id;
			nodos_f.push_back(id);
		}
		printf("Se ha(n) cargado %d símbolo(s).\n", n_simbolos);
		printf("Se ha(n) cargado %d nodo(s).\n", n_nodos);
		printf("Se ha(n) cargado %d nodo(s) final(es).\n", n_finales);
		printf("----------\n");
	}catch(exception &exc){
		printf("%s\n", exc.what());
		return false;
	}
	archivo.close();
	return true;
}

bool saveToFile(char *ruta){
	int i, j;
	
	ofstream archivo;
	archivo.open(ruta);
		/* Simbolos */
	archivo << n_simbolos << '\n';
	for(i = 0; i < n_simbolos; ++i)
		archivo << simbolos[i].first << ' ';
	archivo << '\n';

		/* Nodos y conexiones*/
	archivo << n_nodos << '\n';
	for(j = 0; j < n_nodos; ++j){
		for(i = 0; i < n_simbolos; ++i)
			archivo << atoi(nodos[j].enlaces[i]->id + 1) << ' ';
		archivo << '\n'; 
	}

		/* Nodos finales */
	archivo << n_finales << '\n';
	for(i = 0; i < n_finales; ++i)
		archivo << nodos_f[i] << ' ';
	archivo << '\n';

	archivo.close();
	return true;
}
/* ---------- */