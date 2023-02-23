#include <stdio.h>
#include <stdlib.h>
#include "arbolbb.h"


typedef struct T_Nodo* T_Arbol;

	struct T_Nodo {
			unsigned dato;
			T_Arbol izq, der;
		};

void Crear(T_Arbol* arbol){
    *arbol=NULL;
}


void Destruir(T_Arbol* arbol){
    if(*arbol!=NULL){
        Destruir(&(*arbol)->izq);
        Destruir(&(*arbol)->der);
        free(*arbol);
        *arbol=NULL;
    }
}


void Insertar(T_Arbol* arbol,unsigned num){
    if(*arbol==NULL){
        T_Arbol aux = malloc(sizeof(struct T_Nodo));
        aux->dato=num;
        aux->izq=NULL;
        aux->der=NULL;
        *arbol = aux;
    }else{
        if(num<(*arbol)->dato){
            Insertar(&(*arbol)->izq, num);
        }else{
            Insertar(&(*arbol)->der, num);
        }
    }
}

void Mostrar(T_Arbol arbol){
    if(arbol!=NULL){
        Mostrar(arbol->izq);
        printf("%d ", arbol->dato);
        Mostrar(arbol->der);
    }
}

void Salvar(T_Arbol arbol, FILE* fichero);
