#include "misterio.h"
#include <iostream>

using namespace std;

int main(){
    Misterio m;
    m = M1();

    if (M3(m))
    {
        cout<<"Misterio Vacio\n"<<endl;
    }else{
        cout<<"Misterio NO Vacio\n"<<endl;
    }
    
    m = M2(m, 1);
    m = M2(m, 6);
    m = M2(m, 9);

    if (M3(m))
    {
        cout<<"Misterio Vacio\n"<<endl;
    }else{
        cout<<"Misterio NO Vacio\n"<<endl;
    }

    cout<<"Ultimo elemento: "<<M4(m)<<"\n";
    cout<<"Primer elemento: "<<M5(m)<<"\n";

    m = M6(m);

    cout<<"Ultimo elemento: "<<M4(m)<<"\n";
    cout<<"Primer elemento: "<<M5(m)<<"\n";

    return 0;
}