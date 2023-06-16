#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void al_cuadrado(float x);

float num_1;

int main(){

    pedirDatos();
    al_cuadrado(num_1);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite un numero: ";
    cin>>num_1;
}

void al_cuadrado(float x){
    float cuadrado;

    cuadrado = x * x;

    cout<<"El numero al cuadrado es: "<<cuadrado<<endl;
}