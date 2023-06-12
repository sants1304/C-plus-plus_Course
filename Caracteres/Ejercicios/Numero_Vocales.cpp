#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char cadena[1000];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,1000,'\n');

    strlwr(cadena);

    for(int i = 0; i < strlen(cadena); i++){
        switch (cadena[i]){
            case 'a': vocal_a += 1; break;
            case 'e': vocal_e += 1; break;
            case 'i': vocal_i += 1; break;
            case 'o': vocal_o += 1; break;
            case 'u': vocal_u += 1; break;
        }
    }

    cout<<"Cantidad vocales a: "<<vocal_a<<endl;
    cout<<"Cantidad vocales e: "<<vocal_e<<endl;
    cout<<"Cantidad vocales i: "<<vocal_i<<endl;
    cout<<"Cantidad vocales o: "<<vocal_o<<endl;
    cout<<"Cantidad vocales u: "<<vocal_u<<endl;
    
    system("pause");
    return 0;
}