#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    // 0 == iguales, !0 == diferentes

    char palabra_1[] = "Hola";
    char palabra_2[] = "Hola";
    
    if(strcmp(palabra_1,palabra_2) == 0){       
        cout<<"Las cadenas son iguales"<<endl;
    }

    char palabra_3[] = "Hola";
    char palabra_4[] = "hola";

    if(strcmp(palabra_3,palabra_4) != 0){
        cout<<"Las cadenas son diferentes"<<endl;
    }

    // < 0 == primero alfabeticamente, > 0 == segundo alfabeticamente

    char palabra_5[] = "Avion";
    char palabra_6[] = "Patio";

    if(strcmp(palabra_5,palabra_6) < 0){
        cout<<palabra_5<<" es primero alfabeticamente"<<endl;
    }

    if(strcmp(palabra_6,palabra_5) > 0){
        cout<<palabra_6<<" es el segundo alfabeticamente"<<endl;
    }


    
    system("pause");
    return 0;
}