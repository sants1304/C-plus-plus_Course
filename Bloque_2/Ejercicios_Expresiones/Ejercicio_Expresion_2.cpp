#include<iostream>

using namespace std;

int main (){

    float num_1, num_2, num_3, num_4, resultado = 0;

    cout<<"Digite el numero a: "; cin>>num_1;
    cout<<"Digite el numero b: "; cin>>num_2;
    cout<<"Digite el numero c: "; cin>>num_3;
    cout<<"Digite el numero d: "; cin>>num_4;

    resultado = (num_1 + num_2)/(num_3 + num_4);

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;


    return 0;

}