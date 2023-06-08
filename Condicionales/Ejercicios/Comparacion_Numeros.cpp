#include<iostream>

using namespace std;

int main(){

    float num_1, num_2, num_3, num_buscar;

    cout<<"Digite tres numeros: "<<endl; cin>>num_1>>num_2>>num_3;

    cout<<"Digite un numero a buscar: "; cin>>num_buscar;

    if ((num_buscar == num_1) || (num_buscar == num_2) || (num_buscar == num_3)){
        cout<<"El numero coincide con alguno de los numeros introducidos con anterioridad";
    } else{
        cout<<"El numero no coincide con alguno de los numeros introducidos con anterioridad";
    }

    return 0;
}