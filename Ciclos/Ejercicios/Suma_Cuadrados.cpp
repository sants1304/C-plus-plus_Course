#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int suma = 0, cuadrado;

    for(int i = 1; i <= 10; i++){
        cuadrado = i * i;
        suma += cuadrado;
    }

    cout<<"La suma de los cuadrados es: "<<suma<<endl;

    system("pause");
    
    return 0;
}