#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int n, suma = 0;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for(int i = 1; i <= n; i++){
        suma += i;
    }

    cout<<"La suma es: "<<suma<<endl;
    
    system("pause");
    return 0;
}