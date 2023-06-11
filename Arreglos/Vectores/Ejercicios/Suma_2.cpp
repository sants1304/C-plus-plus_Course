#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int n, num, suma = 0;
    vector<int> numeros;

    cout<<"Digite el numero de elementos: "; cin>>n;
    cout<<"\n";

    for (int i = 0; i < n; i++){
        cout<<"Digite un numero: "; cin>>num;
        numeros.push_back(num);
        suma += num;
    }

    for (int i = 0; i < numeros.size(); i++){
        if(numeros.at(i) == (suma - numeros.at(i))){
            cout<<"\nEl numero "<<numeros.at(i)<<" equivale a la suma del resto de los numeros"<<endl;
        }
    }


    system("pause");
    return 0;
}