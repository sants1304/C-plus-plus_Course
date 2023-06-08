#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num_1, cubo = 0;
    int opcion;
    
    cout<<"\tSelecciona alguna de las siguientes opciones: "<<endl;
    cout<<"1. Cubo del numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;

    cout<<"Opcion: ";cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Digite un numero entero: ";cin>>num_1;
            cubo = pow(num_1,3);
            cout<<"\nEl cubo del numero es: "<<cubo; break;
        case 2:
            cout<<"Digite un numero entero: ";cin>>num_1;
            if( num_1 % 2 == 0){
                cout<<"\nEl numero es par";
            } else{
                cout<<"\nEl numero es impar";
            }
            break;
        case 3:
            break;
        default: 
            cout<<"Opcion no valida";
    }   

    return 0;
}