#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    int longitud;
    char cadena[1000];
    char mensaje[] = " Buena broma";
    char final[10];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,1000,'\n');

    longitud = strlen(cadena);
    char copy[longitud];
    
    strcpy(copy,cadena);
    cout<<"Cadena copiada: "<<copy<<endl;

    for(int i = 0; i < 10; i++){
        final[i] = cadena[i];
    }

    if(strlen(final) == 10){
        strcat(final,mensaje);
    }
    
    cout<<"Cadena final: "<<final<<endl;

    system("pause");
    return 0;
}