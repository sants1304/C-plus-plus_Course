#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int n, suma = 0, multiplicacion = 1, num;
    vector <int> numeros;

    cout<<"Ingrese el numero de elementos del vector: "; cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"Ingrese un numero: "; cin>>num;
        numeros.push_back(num);
    }

    cout<<"\nOrden ascendente: "<<endl;
    for (int i = 0; i < numeros.size(); i++){
        cout<<"Elemento del indice "<<i<<" = "<<numeros.at(i)<<endl;
    }

    cout<<"\nOrden descendente: "<<endl;
    for (int i = (numeros.size()-1); i >= 0; i--){
        cout<<"Elemento del indice "<<i<<" = "<<numeros.at(i)<<endl;
    }

    cout<<"\n";

    system("pause");
    return 0;
}