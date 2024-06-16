#include "pila.h"

int main()
{
    Pila P;
    P = pilaVacia();

    if(esPilaVacia(P)){
        printf("Pila vacia\n");
    }else{
        printf("Pila NO vacia\n");
    }

    P = push(P, 1);
    P = push(P, 2);
    P = push(P, 3);

    if(esPilaVacia(P)){
        printf("Pila vacia\n");
    }else{
        printf("Pila NO vacia\n");
    }

    mostrarPila(P);

    printf("Altura: %d\n", altura(P));

    P = pop(P);


    mostrarPila(P);
    printf("Altura: %d\n", altura(P));

    return 0;
}