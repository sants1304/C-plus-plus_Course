#include <iostream>

using namespace std;

int main(){

    float num_1, num_2, resultado = 0;

    cout<<"Digite el numero a: "; cin>>num_1;
    cout<<"Digite el numero b: "; cin>>num_2;

    resultado = (num_1/num_2)+1;   

    cout.precision(2); //Redondear el cout
    cout<<"\nEl resultado de la expresion es: "<<resultado<<endl;

    return 0;

}