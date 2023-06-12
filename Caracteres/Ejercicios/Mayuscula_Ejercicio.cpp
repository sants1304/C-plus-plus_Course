#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char cadena_1[1000];
    char cadena_2[1000];

    cout<<"Digite la cadena de caracteres 1: ";
    cin.getline(cadena_1,1000,'\n');

    cout<<"Digite la cadena de caracteres 2: ";
    cin.getline(cadena_2,1000,'\n');

    cout<<cadena_1<<" --> ";
    strupr(cadena_1);
    cout<<cadena_1<<endl;

    cout<<cadena_2<<" --> ";
    strupr(cadena_2);
    cout<<cadena_2<<endl;

    if(strcmp(cadena_1,cadena_2) == 0){
        cout<<"Las cadenas son iguales";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}