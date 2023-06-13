#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int aux, minimo;
    vector<int> numeros = {4,5,1,9,6};

    for(int i = 0; i < numeros.size(); i++){
        minimo = i;
        for(int j = i+1; j<numeros.size(); j++){
            if(numeros.at(j) < numeros.at(minimo)){
                minimo = j;
            }
        }

        aux = numeros.at(i);
        numeros.at(i) = numeros.at(minimo);
        numeros.at(minimo) = aux;

    }

    cout<<"Orden Ascendente: "<<endl;
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros.at(i)<<" ";
    }
    cout<<endl;

    cout<<"Orden Descendete: "<<endl;
    for(int i = numeros.size(); i > 0; i--){
        cout<<numeros.at(i-1)<<" ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}