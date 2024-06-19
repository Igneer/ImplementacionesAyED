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

Pila pilaVacia(){ // O(1)
    Pila P;
    P.longitud = 0;
    P.cabecera = NULL;

    return P;
}

Pila push(Pila P, item Aponer) // O(1)
{
    Nodo* nuevo = new Nodo;
    nuevo->dato = Aponer;
    
    nuevo->siguiente = P.cabecera;
    P.cabecera = nuevo;

    P.longitud++;

    return P;
}

bool esPilaVacia(Pila P) // O(1)
{
    if(P.cabecera)
    {
        return false;
    }else
    {
        return true;
    }
}

Pila pop(Pila P){ // O(1)
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

item top(Pila P){ // O(1)
    if (P.cabecera != NULL)
    {
        return P.cabecera->dato;
    }else{
        return indefinido;
    }
}

int altura(Pila P) // O(1)
{
    return P.longitud;
}

void mostrarPila(Pila P){ // O(n), siendo n la cantidad de elementos que tiene la pila
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

bool pertenece(Pila P, item dato){ // O(n), siendo n la cantidad de elementos que tiene la pila
    Nodo* aux = P.cabecera;
    for (int i = 1; i < P.longitud; i++)
    {
        if(aux->dato == dato)
        {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}