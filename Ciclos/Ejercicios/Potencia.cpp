#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int base, exponente, potencia = 1;

    do{
        cout<<"Introduzca la base de la potencia: "; cin>>base;
        cout<<"Introduzca el exponente de la potencia: "; cin>>exponente;
    } while ((base <= 0) || (exponente <= 0));

    for (int i = 1; i <= exponente; i++){
        potencia *= base;
    }

    cout<<"El resultado de la potencia es: "<<potencia<<endl;
    
    system("pause");
    return 0;
}