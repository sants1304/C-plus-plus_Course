#include <iostream>

using namespace std;

int main(){

    float x, y, auxiliar;

    cout<<"Digite el valor de la primera variable:"; cin>>x;
    cout<<"Digite el valor de la segunda variable:"; cin>>y;

    auxiliar = x;
    x = y;
    y = auxiliar;

    cout<<"\nEl valor de la primera variable es: "<<x<<endl;
    cout<<"El valor de la segunda variable es: "<<y<<endl;

    return 0;

}