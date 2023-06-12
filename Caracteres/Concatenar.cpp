#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char nombre[] = "Santiago";
    char apellidos[] = " Castro Sierra";
    char nombre_completo[1000];

    strcpy(nombre_completo,nombre);

    strcat(nombre_completo,apellidos); //strcat (cad1,cad2) --> Al final de cad1, añade cad2
    
    cout<<nombre_completo<<endl;

    system("pause");
    return 0;
}