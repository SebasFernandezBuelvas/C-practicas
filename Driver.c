#include "Pila.h" //Nos lo dan pero se puede editar.

int main(){
    Pila p;
    crear(&p);
    insertar(&p, 25); //Por referencia si es un puntero
    mostrar(p);

}