#include <stdio.h>
#include <stdlib.h>
#define indefinido 9999

typedef int item;

struct Nodo
{
    item dato;
    Nodo* siguiente;
};

struct Pila
{
    int longitud;
    Nodo* cabecera;
};

Pila pilaVacia(){
    Pila P;
    P.longitud = 0;
    P.cabecera = NULL;

    return P;
}

Pila push(Pila P, item Aponer)
{
    Nodo* nuevo = new Nodo;
    nuevo->dato = Aponer;
    
    nuevo->siguiente = P.cabecera;
    P.cabecera = nuevo;

    P.longitud++;

    return P;
}

bool esPilaVacia(Pila P)
{
    if(P.cabecera)
    {
        return false;
    }else
    {
        return true;
    }
}

Pila pop(Pila P){
    if(P.cabecera != NULL)
    {
        Nodo* aux;
        aux = P.cabecera;
        P.cabecera = P.cabecera->siguiente; 
        delete(aux);
        P.longitud--;
    }

    return P;
}

item top(Pila P){
    if (P.cabecera != NULL)
    {
        return P.cabecera->dato;
    }else{
        return indefinido;
    }
}

int altura(Pila P)
{
    return P.longitud;
}

void mostrarPila(Pila P){
    Nodo* aux;
    aux = P.cabecera;
    int longitud = P.longitud; 
    while (aux != NULL)
    {
        printf("elemento %d: %d\n", longitud, aux->dato);
        aux = aux->siguiente;
        longitud--;
    }
}