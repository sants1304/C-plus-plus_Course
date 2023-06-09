#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int suma = 0, multiplicacion = 1;
    int numero[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){
        suma += numero [i];
    }

    for (int i = 0; i < 5; i++){
        multiplicacion *= numero[i];
    }

    cout<<"La suma de los numeros es: "<<suma<<endl;
    cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;
    
    system("pause");
    return 0;
}