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

void insertar(Pila *pp, int v){
    Pila aux=malloc(sizeof(struct Nodo)); // CREAR [(X)VALOR, (X)SIGUIENTE]
    aux->valor=v;                         // [VALOR QUE SEA, X]  
    aux->sig=*pp;                         // [VALOR QUE SEA, PUNTERO DE LA PILA PRINCIPAL ]
    *pp=aux;                             //  [LO PASA AL ARGUMENTO]
                                    
}

int extraer(Pila *pp){
    //suponemos pila no vacaia
    Pila aux= *pp;
    int v=aux->valor;
    *pp=aux->sig;
    free(aux);

    return v;
}

void borrar(Pila *pp){ //Borrar es dejar la estructura unitilizada
    Pila aux;
    while(*pp!=NULL){
        aux = *pp;
        *pp=aux->sig;
        free(aux);
    }

}




