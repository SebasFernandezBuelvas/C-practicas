#include "Pila.h"
#include <stdlib.h>
#include <stdio.h>


void crear(Pila *p){
        *p=NULL;
}

void mostrar(Pila p){
   Pila aux = p;
    while(aux!=NULL){   //Queremos mostrar pero hasta que este sea null, que es como lo hemos inicializado.
        printf("%d",aux->valor);
        aux=aux->sig;   //p normal es el puntero a donde apunta el struct, mientras que con el * es a los valores que hay dentro.
    }
    printf("\n");
}

int pilaVacia(Pila p){

}

void insertar(Pila *p, int v){

}

int extraer(Pila *p){

}

void borrar(Pila *p){

}




