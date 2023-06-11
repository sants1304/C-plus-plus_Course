#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char palabra[1000];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(palabra,1000,'\n');

    if(strlen(palabra) > 10){
        cout<<"La cadena '"<<palabra<<"' supera los 10 caracteres"<<endl;
    }
    
    system("pause");
    return 0;
}