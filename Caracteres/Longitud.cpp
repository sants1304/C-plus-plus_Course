#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    int longitud;
    char palabra[] = "Me gusta la pasta";

    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;
    
    system("pause");
    return 0;
}