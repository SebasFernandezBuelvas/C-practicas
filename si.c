#include "Pila.h"
#include <stdlib.h>
#include <stdio.h>


void crear(Pila *p){
    *p=NULL;
}

void mostrar(Pila p){
    Pila aux=p;
    while(aux!=NULL){
        printf("%d", aux->valor);
        aux=aux->sig;
    }
    printf("/n");

}

int pilaVacia(Pila p){
    return p==NULL;
}

void insertar(Pila *pp, int v){
    Pila aux=malloc(sizeof(struct Nodo));
    aux->valor=v;
    aux->sig=*pp;
    *pp=aux;

}

int extraer(Pila *pp){
 
}

void borrar(Pila *pp){ //Borrar es dejar la estructura unitilizada
 

}




