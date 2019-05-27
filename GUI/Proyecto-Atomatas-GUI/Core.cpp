#include "Core.h"
#include <vector>
#include <queue>

#define PI 3.14159

using namespace std;

/* Definición de funciones */
Core::Core(){

}

void Core::calcularNiveles(){
    if(n_nodos > 0){
        printf("Calculando niveles.\n");
        int i, j, k;

        /* Primer nivel */
        niveles.clear();
        n_niveles = 1;
        nivel *currNivel = new nivel();
        currNivel->setCenter(&nodos[0]);
        currNivel->addNodo(&nodos[0]);

        /* Para iterar: */
        currNivel->porRevisar.push(&nodos[0]);
        nodos[0].visitado = true;
        niveles.push_back(*currNivel);
        nodo *currNodo = nullptr, *enlace = nullptr;

        /*------Calculo de cantidad de niveles-----*/
        for(i = 0; i < n_niveles; ++i){ // Por cada nivel existente
            currNivel = &niveles[i];
            while(!currNivel->porRevisar.empty()){ // Mientras hayan nodos que revisar
                currNodo = currNivel->porRevisar.front();
                currNivel->porRevisar.pop();

                for(j = 0; j < n_simbolos; ++j){ // Por cada conexión
                    enlace = currNodo->enlaces[j];
                    if(
                        enlace != nullptr // Si la conexión existe
                        && !enlace->visitado // y no ha sido visitada:
                    ){
                        if(i == n_niveles - 1){ // Si es que no existe siguiente nivel:
                            niveles.push_back(*(new nivel()));
                            ++n_niveles;
                        }
                        // Se agrega la conexión al siguiente nivel
                        enlace->visitado = true;
                        niveles[i + 1].addNodo(enlace);
                        niveles[i + 1].porRevisar.push(enlace);
                    }
                }
            }
        }

        /* Debug: */
        printf("\nEtapa 1| %d niveles:\n", n_niveles);
        for(j = 0; j < n_niveles; ++j){
            currNivel = &niveles[j];
            for(i = 0; i < currNivel->n_nodos; ++i){
                printf("%s ", currNivel->nodos[i]->id);
            }
            printf("\n");
        }
        /*-----Fin Etapa 1-----*/

        /*------Re-ajuste de niveles-----*/
        for(j = n_niveles - 1; j > 1; --j){ // Cada nivel, menos los dos primeros, desde el último
            if(j == n_niveles - 1){ // Si es el último nivel
                for(i = 0; i < niveles[j].n_nodos; ++i){ // Por cada nodo
                    if(!esFinal(niveles[j].nodos[i])){ // Si no es final, se agrega al nivel anterior
                        niveles[j - 1].addNodo(niveles[j].popNodo(i));
                        --i;
                    }
                }
            }else{ // De no ser el ultimo nivel, se balancea con el nivel anterior
                while(niveles[j].n_nodos - niveles[j  - 1].n_nodos > 1){
                    niveles[j - 1].addNodo(niveles[j].popNodo(0));
                }
            }
        }

        /* Debug: */
        max_cn = 0; // Para número de nodos máximos entre los niveles
        printf("\nEtapa 2| %d niveles:\n", n_niveles);
        for(j = 0; j < n_niveles; ++j){
            currNivel = &niveles[j];
            currNivel->id = j;
            if(currNivel->n_nodos > max_cn) max_cn = currNivel->n_nodos;

            for(i = 0; i < currNivel->n_nodos; ++i){
                printf("%s ", currNivel->nodos[i]->id);
            }
            printf("\n");
        }
        /*-----Fin Etapa 2-----*/

        /*------Calculo de posiciones-----*/
        int centralY = ceil(max_cn * nivel_r / 2); // Para centro en Y
        nodos[0].x = nivel_r;
        nodos[0].y = centralY;
        nodos[0].nivel = 0;
        int sep; // Para la separación entre nodos

        for(j = 1; j < n_niveles; ++j){ // Desde el segundo nivel, hasta el último
            currNivel = &niveles[j];
            sep = ((max_cn) * nivel_r) / (currNivel->n_nodos + 1);

            for(i = 0; i < currNivel->n_nodos; ++i){
                currNodo = currNivel->nodos[i];
                currNodo->nivel = j;
                currNodo->visitado = false; // Reinicia visitado
                currNodo->cU = currNodo->cD = currNodo->cR =currNodo->cL = 0; // Reinicia conexiones por lado
                currNodo->x = nivel_r * (j + 1);
                currNodo->y = (i + 1) * sep;
            }
        }
        /* Debug: */
        printf("\nEtapa 3|\n- Nodos.visitado reiniciado\n- Conexiones reinciadas\n- Sep calculado con max_cn: %d\n", max_cn);
        /*-----Fin Etapa 3-----*/

        /*------Calculo de conexiones por lado-----*/
        int haciaExtremo;
        for(i = 0; i < n_niveles; ++i){ // Por cada nivel
            currNivel = &niveles[i];
            for(j = 0; j < currNivel->n_nodos; ++j){ // Por cada uno de sus nodos
                currNodo = currNivel->nodos[j];

                for(k = 0; k < n_simbolos; ++k){ // Por cada conexión
                    enlace = currNodo->enlaces[k];
                    if(enlace != nullptr){ // Si existe el enlace:
                        haciaExtremo = niveles[enlace->nivel].esExterno(enlace, n_niveles);

                        // Añade conexión lateral a {currNodo}
                        if(i != n_niveles - 1 && (i == 0 || enlace->x < currNodo->x)){ // Si está en el nivel de nodo inicial, o el enlace queda a la izquierda
                            ++currNodo->cL;
                        }else{ // Cualquier otro caso, la conexión será en derecha
                            ++currNodo->cR;
                        }

                        // Añade conexión vertical a {enlace}
                        switch(haciaExtremo){
                            case -1: // Está arriba
                                ++enlace->cU;
                                break;
                            case 1: // Está abajo
                                ++enlace->cD;
                                break;
                            case 0: // No es extremo
                                if(currNodo->y < enlace->y){ // Llega desde arriba (abajo en eje Y)
                                    ++enlace->cU;
                                }else{
                                    ++enlace->cD;
                                }
                                break;
                        }
                    }
                }
            }
        }
        /* Debug: */
        printf("\nEtapa 4| Nodo: (Up, Down, Right, Left)\n");
        for(i = 0; i < n_nodos; ++i){
            currNodo = &nodos[i];
            printf("%s: (%d, %d, %d, %d)\n", currNodo->id, currNodo->cU, currNodo->cD, currNodo->cR, currNodo->cL);
        }
        /*-----Fin Etapa 4-----*/

        /*------Calculo de trayecto de conexiones-----*/

        /*-----Fin Etapa 5-----*/
    }else{
        printf("No existen nodos para calcular niveles.\n");
    }
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
        calcularNiveles();
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
