#include <stdio.h>
#include <stdlib.h>
#define indefinido 9999

typedef int item;

struct Nodo
{
    item dato;
    Nodo* siguiente;
};

struct listaCircular
{
    Nodo* cabecera;
    int longitud;
};

listaCircular LCVacia()
{
    listaCircular LC;

    LC.longitud = 0;
    LC.cabecera = NULL;
    
    return LC;  
}

listaCircular LCInsertar(listaCircular LC, item dato){
    Nodo* nuevo;

    nuevo->dato = dato;
    nuevo->siguiente= NULL;

    if (LC.longitud == 0)
    {
        LC.cabecera = nuevo;
        nuevo->siguiente = nuevo;
    }else{
        nuevo->siguiente = LC.cabecera->siguiente;
        LC.cabecera->siguiente = nuevo;
    }
    
    LC.longitud++;

    return LC;
}

listaCircular LCBorrar(listaCircular LC){
    if (LC.cabecera != NULL)
    {
        Nodo* aux;
        aux = LC.cabecera->siguiente;
        LC.cabecera->siguiente = LC.cabecera->siguiente->siguiente;
        delete(aux);
    }
    
    return LC;
}

item LCValor(listaCircular LC){
    if (LC.cabecera != NULL)
    {
        return LC.cabecera->siguiente->dato;
    }else
    {
        return indefinido;
    }
}

bool EsLCVacia(listaCircular LC){
    if(LC.cabecera){
        return false;
    }else{
        return true;
    }
}

listaCircular LCRotar(listaCircular LC){
    if (LC.cabecera != NULL)
    {
        LC.cabecera = LC.cabecera->siguiente;
    }
    
    return LC;
}

bool pertenece(listaCircular LC, item dato){
    Nodo* aux = LC.cabecera->siguiente;
    for (int i = 1; i < LC.longitud; i++)
    {
        if(aux->dato == dato)
        {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}