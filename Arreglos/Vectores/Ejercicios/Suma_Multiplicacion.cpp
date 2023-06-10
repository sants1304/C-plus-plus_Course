#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int n, num, suma = 0, multiplicacion = 1;
    vector<int> numeros;

    cout<<"Ingrese el numero de elementos: "; cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Introduzca un numero: "; cin>>num;
        numeros.push_back(num);
        suma += num;
        multiplicacion *= num;
    }

    cout<<"\nLa suma de los elementos es: "<<suma;
    cout<<"\nLa multiplicacion de los elemetos es: "<<multiplicacion<<endl;
    
    system("pause");
    return 0;
}