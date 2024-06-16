#include <stdio.h>
#include <stdlib.h>
#define indefinido 9999

typedef int item;

struct Nodo
{
    item dato;
    Nodo* siguiente;
};

struct Fila
{
    Nodo* frente;
    Nodo* final;
    int longitud;
};

Fila filaVacia(){
    Fila F;

    F.final = NULL;
    F.frente = NULL;
    F.longitud = 0;

    return F;
}

Fila enfila(Fila F, item dato)
{
    Nodo* nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->siguiente == NULL;
    if (F.longitud == 0)
    {
        F.final = nuevo;
        F.frente = nuevo;
    }else
    {
        F.final->siguiente = nuevo;
        F.final = nuevo; 
    }
    F.longitud++;

    return F;
}

bool esFilaVacia(Fila F)
{
    if(F.frente)
    {
        return false;
    }else
    {
        return true;
    }    
}

Fila defila(Fila F){
    if(!esFilaVacia(F))
    {
        Nodo* aux = F.frente;
        F.frente = F.frente->siguiente;
        delete(aux);    
    }

    F.longitud--;

    return F;
}

item frente(Fila F)
{
    if (F.frente != NULL)
    {
        return F.frente->dato;
    }else
    {
        return indefinido;
    }
}
