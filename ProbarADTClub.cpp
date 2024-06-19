#include "club.h"
#include <iostream>

using namespace std;

int main(){
    Club C;
    C = clubVacio();

    if (esClubVacio(C))
    {
        cout<<"Club vacio"<<endl;
    }else{
        cout<<"Club NO vacio"<<endl;
    }
    
    
    C = darAlta(C, 1);
    C = darAlta(C, 5);
    C = darAlta(C, 3);

    if (esClubVacio(C))
    {
        cout<<"Club vacio"<<endl;
    }else{
        cout<<"Club NO vacio"<<endl;
    }

    cout<<"Ultimo Socio: "<<ultimoSocio(C)<<endl;
    cout<<"Numero de Socios: "<<nroSocios(C)<<endl;

    C = darBaja(C);

    cout<<"Numero de Socios: "<<nroSocios(C)<<endl;

    if (pertenece(C, 5))
    {
        cout<<"El socio con id 5 si pertenece al club "<<ultimoSocio(C)<<endl;
    }else
    {
        cout<<"El socio con id 5 NO pertenece al club "<<ultimoSocio(C)<<endl;
    }
    

    C = darBaja(C);

    if (pertenece(C, 5))
    {
        cout<<"El socio con id 5 si pertenece al club "<<endl;
    }else
    {
        cout<<"El socio con id 5 NO pertenece al club "<<endl;
    }

    C = darBaja(C);

   
    return 0;
}