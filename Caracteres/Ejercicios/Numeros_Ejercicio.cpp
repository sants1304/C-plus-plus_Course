#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char entero[1000];
    char flotante[1000];
    int numero_1;
    float numero_2, suma = 0;

    cout<<"Digite un numero entero: ";
    cin.getline(entero,1000,'\n');
    
    cout<<"Digite un numero flotante: ";
    cin.getline(flotante,1000,'\n');

    numero_1 = atoi(entero);
    numero_2 = atof(flotante);

    suma = numero_1 + numero_2;

    cout<<"La suma de los numeros es: "<<suma<<endl;

    system("pause");
    return 0;
}