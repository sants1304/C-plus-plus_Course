#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    float num_1, num_2, num_3, resultado_1 = 0, resultado_2 = 0;

    cout<<"Digite el coeficiente de x^2: ";cin>>num_1;
    cout<<"Digite el coeficiente de x: ";cin>>num_2;
    cout<<"Digite la adicion a la expresion cuadratica: ";cin>>num_3;

    resultado_1 = ((-1 * num_2) + sqrt((pow(num_2,2) - (4 * num_1 * num_3)))) / (2 * num_1);
    resultado_2 = ((-1 * num_2) - sqrt((pow(num_2,2) - (4 * num_1 * num_3)))) / (2 * num_1);

    cout.precision(2);
    cout<<"\nLas soluciones a la expresion cuadratica son: "<<endl<<resultado_1<<endl<<resultado_2<<endl;


    return 0;
}