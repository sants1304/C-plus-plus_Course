#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// 2^1 + 2^2 + 2^3 + ... 2^n

int main(){
    
    int n, suma = 0, potencia = 0;

    cout<<"Digitar el numero de elementos: "; cin>>n;

    for (int i = 1; i <= n; i++){
        
        potencia = pow (2,i);

        suma += potencia;

    }

    cout<<"\nEl resultado de la expresion es: "<<suma<<endl;
    
    system("pause");
    return 0;
}