#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int numero, factorial = 1;

    cout<<"Digite un numero: ";cin>>numero;

    for (int i = 1; i <= numero; i++){
        factorial *= i;
    }

    cout<<"\nEl resultado de la factorial es: "<<factorial<<endl;
    
    system("pause");
    return 0;
}