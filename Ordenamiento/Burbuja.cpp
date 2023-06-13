#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){

    int aux;
    vector<int> numeros = {3,5,8,1,4};

    for(int i = 0; i < numeros.size(); i++){
        for(int j = 0; j < (numeros.size() - 1); j++){
            if(numeros.at(j) > numeros.at(j+1)){
                aux = numeros.at(j);
                numeros.at(j) = numeros.at(j+1);
                numeros.at(j+1) = aux;
            }
        }
    }

    cout<<"Orden Ascendente: "<<endl;

    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros.at(i)<<" ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}