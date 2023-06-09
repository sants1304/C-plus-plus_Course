#include <iostream>
#include <stdlib.h>

using namespace std;

//1! + 2! + 3! + 4! + ... + n!

int main(){
    
    int n, factorial = 1, suma = 0;

    cout<<"Digite el numero de terminos de la serie: "; cin>>n;

    for (int i = 1; i <= n; i++){

        factorial = 1;
        for (int j = 1; j <= i; j++){
            factorial *= j;
        }

        suma += factorial;
    }

    cout<<"\nLa suma de los factoriales es: "<<suma<<endl;


    system("pause");
    return 0;
}