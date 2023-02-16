#include "Pila.h" //Nos lo dan pero se puede editar.
#include "Pila.c"
#include <stdio.h>

int main(){
    Pila p;
    crear(&p);
    insertar(&p, 25); //Por referencia si es un puntero
    mostrar(p);
    for(int i=0; i<10; i++)
        insertar(&p, i);

    mostrar(p);
    while(!pilaVacia(p)){
        printf("%d ", extraer(&p));
    };
    printf("\n");
    mostrar(p);

}