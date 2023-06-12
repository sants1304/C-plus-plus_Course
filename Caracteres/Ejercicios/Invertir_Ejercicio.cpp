#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char cadena_inicial[1000];
    char cadena_final[1000];

    cout<<"Digite una cadena de texto: ";
    cin.getline(cadena_inicial,1000,'\n');

    strcpy(cadena_final,cadena_inicial);

    strrev(cadena_final);

    if(strcmp(cadena_inicial,cadena_final) == 0){
        cout<<"La palabra es polindroma";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}