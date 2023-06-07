#include <iostream>

using namespace std;

int main(){

    int edad;
    char sexo[30]; // Char = Guarda una solo carácter, [] --> permite guardar varías
    float altura;

    cout<<"Digita la edad: "; cin>>edad;
    cout<<"Digita el sexo: "; cin>>sexo;
    cout<<"Digita la altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;


    return 0;

}