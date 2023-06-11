#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    int longitud;
    char nombre[1000];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(nombre,1000,'\n');

    longitud = strlen(nombre);
    char nombre_copia[longitud];

    strcpy(nombre_copia,nombre); //strcpy(cadena_vacia,cadena_datos)

    cout<<nombre_copia<<endl;
    
    system("pause");
    return 0;
}