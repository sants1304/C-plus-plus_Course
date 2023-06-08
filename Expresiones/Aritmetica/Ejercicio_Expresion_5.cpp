#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    float num_1, num_2, resultado = 0;

    cout<<"Digite el valor de x: "; cin>>num_1;
    cout<<"Digite el valor de y: "; cin>>num_2;
    
    resultado = (sqrt(num_1))/(pow(num_2,2)-1);

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}