#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    float cateto_1, cateto_2, hipotenusa = 0;

    cout<<"Digita la longitud del primer cateto: "; cin>>cateto_1;
    cout<<"Digita la longitud del segundo cateto: "; cin>>cateto_2;

    cateto_1 = pow(cateto_1, 2);
    cateto_2 = pow(cateto_2, 2);
    hipotenusa = sqrt(cateto_1 + cateto_2);

    cout.precision(2);
    cout<<"\nLa longitud de la hipotenusa es: "<<hipotenusa<<endl;
    
    return 0;
}