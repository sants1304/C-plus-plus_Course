#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char palabra_1[1000];
    char palabra_2[1000];

    cout<<"Digite la cadena #1: ";
    cin.getline(palabra_1,1000,'\n');

    cout<<"Digite la cadena #2: ";
    cin.getline(palabra_2,1000,'\n');

    cout<<endl;

    if(strcmp(palabra_1,palabra_2) == 0){
        cout<<"Las cadenas son iguales";
    } else if (strcmp(palabra_1,palabra_2) > 0){
        cout<<"La cadena '"<<palabra_1<<"' es mayor alfabeticamente";
    } else{
        cout<<"La cadena '"<<palabra_2<<"' es mayor alfabeticamente";
    }

    cout<<endl;
    
    system("pause");
    return 0;
}
