#include<iostream>

using namespace std;

int main(){
    
    float nota_1, nota_2, nota_3, nota_4, promedio = 0;

    cout<<"Digite la nota del primer estudiantes: ";cin>>nota_1;
    cout<<"Digite la nota del segundo estudiantes: ";cin>>nota_2;
    cout<<"Digite la nota del tercer estudiantes: ";cin>>nota_3;
    cout<<"Digite la nota del cuarto estudiantes: ";cin>>nota_4;

    promedio = (nota_1 + nota_2 + nota_3 + nota_4)/4;

    cout.precision(2);
    cout<<"\nEl promedio del salon es: "<<promedio<<endl;
    
    return 0;
}