#include <stdio.h>
#include <stdlib.h>
#define indefinido -9999

typedef int socio; // Represento a cada socio con un numero ID

struct NodoClub
{
    socio id;
    NodoClub* sig;
};

struct Club
{
    NodoClub* cabecera;
    int nroSocios;
};


Club clubVacio(){
    Club C;
    C.cabecera = NULL;
    C.nroSocios = 0;

    return C;
}

Club darAlta(Club C, socio id){
    NodoClub* nuevo = new NodoClub;
    nuevo->id = id; 
    nuevo->sig = C.cabecera;
    C.cabecera = nuevo;
    C.nroSocios++;

    return C;
}

Club darBaja(Club C){
    NodoClub* eliminar;
    eliminar = C.cabecera;
    C.cabecera = C.cabecera->sig;
    delete(eliminar);
    C.nroSocios--;

    return C;
}

bool esClubVacio(Club C)
{
    if (C.cabecera)
    {
        return false;
    }else
    {
        return true;
    }
}

socio ultimoSocio(Club C){
    if (!esClubVacio(C))
    {
        return(C.cabecera->id);
    }else
    {
        return indefinido;
    }
}

int nroSocios(Club C)
{
    return C.nroSocios;
}

bool pertenece(Club C, socio id)
{
    NodoClub* aux = C.cabecera;
    while (aux != NULL)
    {
        if (aux->id == id)
        {
            return true;
        }
        aux = aux->sig;
    }
    return false;
}