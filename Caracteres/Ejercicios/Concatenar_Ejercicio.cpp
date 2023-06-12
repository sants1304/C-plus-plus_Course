#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char saludo_inicial[] = "Hola que tal";
    char vacio[] = " ";
    char nombre[1000];
    char saludo_final[1000];

    cout<<"Introduzca su nombre: ";
    cin.getline(nombre,1000,'\n');

    strcpy(saludo_final,saludo_inicial);

    strcat(saludo_final,vacio);

    strcat(saludo_final,nombre);

    cout<<saludo_final<<endl;
    
    system("pause");
    return 0;
}