#include <iostream>


using namespace std;

int main(){

    float n1, n2, suma = 0, resta = 0, multiplicacion = 0 , division;

    cout<<"Introduzca el numero uno: "<<endl;
    cin>>n1;

    cout<<"Introduzca el numero dos: "<<endl; cin>>n2;

    suma = n1 + n2; 
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La divison es: "<<division<<endl;

    return 0;

}