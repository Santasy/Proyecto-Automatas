#include "Core.h"
#include <vector>
#include <queue>

#define PI 3.14159

using namespace std;

/* Definición de funciones */
Core::Core(){

}

bool Core::esFinal(nodo *n){
    for(int i = 0; i < n_finales; ++i){
        if(nodos_f[i] == atoi(n->id + 1)) return true;
    }

    return false;
}

bool Core::checkWord(char *palabra, nodo *actual){
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

bool Core::checkAutom(){
    int i, j;
    bool resultado = true;
    printf("Verificando integridad de autómata.\n");

        /*---Check Simbolos---*/
            /* Cantidad: */
    if(n_simbolos != (int) simbolos.size()){
        printf("Existen %d de %d simbolos.\n", (int) simbolos.size(), n_simbolos);
        resultado = false;
    }
            /* Repeticiones: */
    for(i = 0; i < (int) simbolos.size(); ++i){
        for(j = 0; j < (int) simbolos.size(); ++j){
            if(i == j) continue;
            if(simbolos[i].first == simbolos[j].first){
                printf("Se encontró símbolo '%c' repetido.\n", simbolos[i].first);
                resultado = false;
            }
        }
    }
        /*---Check Nodos---*/
            /* Cantidad: */
    if(n_nodos != (int) nodos.size()){
        printf("Existen %d de %d nodos.\n", (int) nodos.size(), n_nodos);
        resultado = false;
    }
            /* Enlaces: */
    for(i = 0; i < (int) nodos.size(); ++i){
        if((int) nodos[i].enlaces.size() != n_simbolos){
            printf("Nodo %s tiene %d/%d enlaces.\n", nodos[i].id, (int) nodos[i].enlaces.size(), n_simbolos);
            resultado = false;
        }
    }

        /*---Check Finales---*/
            /* Cantidad */
    if(n_finales != (int) nodos_f.size()){
        printf("Existen %d de %d nodos finales.\n", (int) nodos_f.size(), n_finales);
        resultado = false;
    }
            /* Repetidos */
    for(i = 0; i < (int) nodos_f.size(); ++i){
        for(j = 0; j < (int) nodos_f.size(); ++j){
            if(i == j) continue;
            if(nodos_f[i] == nodos_f[j]){
                printf("Se encontró nodo final %d repetido.\n", nodos_f[i]);
                resultado = false;
            }
        }
    }

    if(!resultado) printf("Autómata no está definido correctamente.\n");
    else printf("Autómata está definido correctamente.\n");
    return resultado;
}

int Core::getSimIndex(char c){
    for(int i = 0; i < n_simbolos; ++i){
        if(c == simbolos[i].first) return i;
    }
    return -1;
}

bool Core::readFromFile(char *ruta){
    int i, j;

    ifstream archivo;
    try{
        archivo.open(ruta);

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
            nuevoN.x = 50 * (i + 1);
            nuevoN.y = 50;
            sprintf(nuevoN.id, "q%d", i);
            nodos.push_back(nuevoN);
        }
        int id;
        for(i = 0; i < n_nodos; ++i){ // Se crea cada conexión
            for(j = 0; j < n_simbolos; ++j){ // Por cada símbolo
                archivo >> id;
                if(id >= 0) nodos[i].enlaces.push_back(&nodos[id]);
                else nodos[i].enlaces.push_back(nullptr);
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

bool Core::saveToFile(char *ruta){
    int i, j;

    ofstream archivo;
    try{
        archivo.open(ruta);
            /* Simbolos */
        archivo << n_simbolos << '\n';
        for(i = 0; i < n_simbolos; ++i)
            archivo << simbolos[i].first << ' ';
        archivo << '\n';

            /* Nodos y conexiones*/
        archivo << n_nodos << '\n';
        for(j = 0; j < n_nodos; ++j){
            for(i = 0; i < n_simbolos; ++i){
                if(nodos[j].enlaces[i] == nullptr)
                    archivo << "-1 ";
                else
                    archivo << atoi(nodos[j].enlaces[i]->id + 1) << ' ';
            }
            archivo << '\n';
        }

            /* Nodos finales */
        archivo << n_finales << '\n';
        for(i = 0; i < n_finales; ++i)
            archivo << nodos_f[i] << ' ';
        archivo << '\n';

        archivo.close();
        return true;
    }catch(exception &exc){
        printf("%s\n", exc.what());
        return false;
    }
}
