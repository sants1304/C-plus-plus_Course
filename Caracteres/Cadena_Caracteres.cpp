#include<iostream>
#include<stdlib.h>
#include<string.h>  
//Cadena caracteres. https://es.wikipedia.org/wiki/String.h

using namespace std;

int main(){
    
    char palabra[] = "Santiago"; 
    char nombre_1[20];

    cout<<"Introduzca su nombre: ";
    cin.getline(nombre_1,20,'\n');  //cin.getline(varible,tamaño,comando_salida)

    cout<<palabra<<endl;
    cout<<nombre_1<<endl;
    
    system("pause");
    return 0;
}