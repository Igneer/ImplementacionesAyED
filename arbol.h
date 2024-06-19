#include <stdio.h>
#include <stdlib.h>
#define indefinido ' '

typedef char item;

struct NodoAB
{
    item raiz;
    Arbol der;
    Arbol izq;
};

typedef NodoAB* Arbol;

Arbol ABVacio()
{
    Arbol AB;
    AB = NULL;

    return AB;
}

Arbol armarArbol(Arbol izq, item raiz, Arbol der){
    Arbol AB = new NodoAB;
    AB->raiz = raiz;
    AB->izq = izq;
    AB->der = der;

    return AB;
}

bool esABVacio(Arbol AB){
    if(AB)
    {
        return false;
    }else
    {
        return true;
    }
}

Arbol izquierdo(Arbol AB){
    return AB->izq;
}

Arbol derecho(Arbol AB){
    return AB->der;
}

item raiz(Arbol AB){
    if (AB != NULL)
    {
        return AB->raiz;    
    }else
    {
        return indefinido;
    }    
}

bool pertenece(Arbol AB, item dato){
    if (AB == NULL)
    {
        return false;
    }else{
        if (AB->raiz == dato){
            return true;
        }else{
            return((pertenece(AB->izq, dato) || pertenece(AB->der, dato)));
        }
    }
}