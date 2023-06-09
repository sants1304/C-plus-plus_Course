#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int numero, num_auxiliar, producto = 1, i = 0;

    cout<<"Digite un numero: "; cin>>numero;

    num_auxiliar = numero;

    cout<<numero<<" = ";

    do{

        if ( i != 0){
            cout<<"*";
        }

        if (num_auxiliar % 2 == 0){
            cout<<"2";
            producto *= 2;
            num_auxiliar /= 2;
        } else if (num_auxiliar % 3 == 0){
            cout<<"3";
            producto *= 3;
            num_auxiliar /= 3;
        } else if (num_auxiliar % 5 == 0){
            cout<<"5";
            producto *= 5;
            num_auxiliar /= 5;
        } else if (num_auxiliar % 7 == 0){
            cout<<"7";
            producto *= 7;
            num_auxiliar /= 7;
        } else if (num_auxiliar % 11 == 0){
            cout<<"11";
            producto *= 11;
            num_auxiliar /= 11;
        } else if (num_auxiliar % 13 == 0){
            cout<<"13";
            producto *= 13;
            num_auxiliar /= 13;
        } else if (num_auxiliar % 17 == 0){
            cout<<"17";
            producto *= 17;
            num_auxiliar /= 17;
        } else if (num_auxiliar % 19 == 0){
            cout<<"19";
            producto *= 19;
            num_auxiliar /= 19;
        } else if (num_auxiliar % 23 == 0){
            cout<<"23";
            producto *= 23;
            num_auxiliar /= 23;
        } else if (num_auxiliar % 29 == 0){
            cout<<"29";
            producto *= 29;
            num_auxiliar /= 29;
        } else{
            cout<<numero<<endl;
            cout<<"Tiene numeros primos mayores a 29";
            break;
        }

        i++;
    } while (producto !=  numero);
    
    if ( i == 1){
        cout<<"\nEl numero es primo\n";
    } else{
        cout<<"\n";
    }

    system("pause");
    return 0;
}