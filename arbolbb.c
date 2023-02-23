#include <stdio.h>
#include <stdlib.h>
#include "arbolbb.h"

void Crear(T_Arbol* arbol){
    *arbol=NULL;
}


void Destruir(T_Arbol* arbol);


void Insertar(T_Arbol* arbol,unsigned num);

void Mostrar(T_Arbol arbol){
    if(arbol!=NULL){
        Mostrar(arbol->izq);
        printf("%d ", arbol->dato);
        Mostrar(arbol->der);
    }
}

void Salvar(T_Arbol arbol, FILE* fichero);
