#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char numero_cadena[] = "123";
    char flotante_cadena[] = "123.45";
    int numero;
    float flotante;

    numero = atoi(numero_cadena);
    flotante = atof(flotante_cadena);

    cout<<numero<<endl;
    cout<<flotante<<endl;
    
    system("pause");
    return 0;
}