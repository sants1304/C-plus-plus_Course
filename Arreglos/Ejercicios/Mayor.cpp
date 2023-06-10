#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int n, num, mayor ;
    vector<int> numero;
    
    cout<<"Introduzca el numero de elementos: "; cin>>n; 
    cout<<endl;

    for(int i = 0; i < n; i++){
        cout<<"Introduzca un numero: "; cin>>num;
        numero.push_back(num);

        if((i == 0) || (num >= mayor)){
            mayor = numero.at(i);
        }

    }

    cout<<"\nEl mayor numero del vector es: "<<mayor<<endl;
    
    system("pause");
    return 0;
}