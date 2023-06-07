#include <iostream>

using namespace std;

int main(){
    
    float num_1, num_2, num_3, num_4, num_5, num_6, resultado = 0;

    cout<<"Digite el valor de a: "; cin>>num_1;
    cout<<"Digite el valor de b: "; cin>>num_2;
    cout<<"Digite el valor de c: "; cin>>num_3;
    cout<<"Digite el valor de d: "; cin>>num_4;
    cout<<"Digite el valor de e: "; cin>>num_5;
    cout<<"Digite el valor de f: "; cin>>num_6;

    resultado = (num_1 + (num_2/num_3))/(num_4 + (num_5/num_6));

    cout.precision(2);
    cout<<"\nEl resultado de la expresion es: "<<resultado<<endl;

    return 0;

}