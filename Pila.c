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
    return p==NULL;
}

void insertar(Pila *p, int v){
    Pila aux=malloc(sizeof(struct Nodo)); // me devuelve en la direccion en la que empieza a esa estructura, malloc puede delvolver 0 si no hay memoria suficiente
    aux->valor=v;                                     //Queremos el nodo para almacenar el numero v.
                                        //crear un nodo que tenga el numero que queramos
}

int extraer(Pila *p){

}

void borrar(Pila *p){

}




