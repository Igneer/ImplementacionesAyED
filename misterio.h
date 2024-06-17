#include <stdio.h>
#include <stdlib.h>
#define indefinido 9999

typedef int item;

struct NodoM
{
    item dato;
    NodoM* siguiente;
};

struct Misterio
{
    int longitud;
    NodoM* cabecera;
};

Misterio M1() // Primitiva MisterioVacio
{
    Misterio m;
    m.cabecera = NULL;
    m.longitud = 0;

    return m;
}

Misterio M2(Misterio m, item i) // Primitiva MisterioInsertar
{
    NodoM* nuevo = new NodoM;
    nuevo->dato = i;
    if (m.cabecera == NULL)
    {
        m.cabecera = nuevo;
        nuevo->siguiente = nuevo;
    }else{
        nuevo->siguiente = m.cabecera->siguiente;
        m.cabecera->siguiente = nuevo;
    }

    m.longitud++;

    return m;
}

bool M3(Misterio m){  // Test, esMisterioVacio
    if(m.cabecera)
    {
        return false;
    }else{
        return true;
    }
}

item M4(Misterio m){ // Selectora, devuelve el último elemento
    if (m.cabecera == NULL)
    {
        return indefinido;
    }else
    {
        return m.cabecera->dato;
    }   
}

item M5(Misterio m){ // Selectora, devuelve el primer elemento
    if (m.cabecera == NULL)
    {
        return indefinido;
    }else
    {
        return m.cabecera->siguiente->dato;
    }
}

Misterio M6(Misterio m){
    NodoM* aux = m.cabecera;
    NodoM* eliminar;
    if (m.cabecera != NULL)
    {
        for (int i = 1; i < m.longitud; i++)
        {
            aux = aux->siguiente;
        }
        eliminar = aux->siguiente;
        aux->siguiente = aux->siguiente->siguiente;
        m.cabecera = aux;
        delete(eliminar);
    }   

    m.longitud--;

    return m;
}

int M7(Misterio m){
    return m.longitud;
}