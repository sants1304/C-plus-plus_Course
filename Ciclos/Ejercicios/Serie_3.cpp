#include <iostream>
#include<stdlib.h>

using namespace std;

//1-2+3-4+5-6...n

int main(){
    
    int n, suma = 0;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            suma -= i;
        } else{
            suma += i;
        }
    }

    cout<<"\nEl resultado de la expresion es: "<<suma<<endl;
    
    system("pause");
    return 0;
}