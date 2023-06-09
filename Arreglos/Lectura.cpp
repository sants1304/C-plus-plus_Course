#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int numeros[100], n;

    cout<<"Digite el numero de elementos que va a tener el arreglo: "; cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"Digite un numero: "; cin>>numeros[i];
    }

    for (int i = 0; i < n; i++){
        cout<<"\nIndice: "<<i<<", Numero: "<<numeros[i];
    }

    cout<<"\n";
    
    for (int i = (n - 1); i >= 0; i--){
        cout<<"\nIndice: "<<i<<", Numero: "<<numeros[i];
    }
    
    cout<<"\n";

    system("pause");
    return 0;
}