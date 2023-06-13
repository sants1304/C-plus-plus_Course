#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int aux, posicion;
    vector<int> numeros = {6,8,5,2,1};

    for(int i = 0; i < numeros.size(); i++){
        posicion = i;
        aux = numeros.at(i);
        
        while((posicion > 0) && (numeros.at(posicion-1) > aux)){
            numeros.at(posicion) = numeros.at(posicion-1);
            posicion--;
        }

        numeros.at(posicion) = aux;
    }

    cout<<"Orden Ascendente: "<<endl;
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros.at(i)<<" ";
    }
    cout<<endl;

    cout<<"Orden Descendente: "<<endl;
    for(int i = numeros.size(); i > 0; i--){
        cout<<numeros.at(i-1)<<" ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}