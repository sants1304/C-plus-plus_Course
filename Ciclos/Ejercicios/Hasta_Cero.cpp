#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int num_1, positivos = 0;

    do{
        cout<<"Introduzca un numero: "; cin>>num_1;
        if (num_1 > 0){
            positivos ++;
        }
    } while(num_1 != 0);

    cout<<"\nCantidad de numeros mayores que cero: "<<positivos<<endl;
    
    system("pause");

    return 0;
}

