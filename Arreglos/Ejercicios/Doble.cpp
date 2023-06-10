#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int n, producto, numero;

    vector<int> numeros;
    vector<int> dobles;

    cout<<"Digite el numero de elementos: "; cin>>n;

    cout<<"\nVector 1: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<"Digite un numero: "; cin>>numero;
        numeros.push_back(numero);

        producto = numero * 2;
        dobles.push_back(producto);
    }

    cout<<"\nDoble del Vector 1: "<<endl;
    for (int i = 0; i < dobles.size(); i++){
        cout<<"Indice "<<i<<": "<<numeros.at(i)<<"*2 = "<<dobles.at(i)<<endl;
    }
    
    system("pause");
    return 0;
}