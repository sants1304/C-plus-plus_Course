#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float num_1, num_2;

int main(){
    
    pedirDatos();

    mult(num_1,num_2);
    
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite dos numeros: "<<endl;
    cin>>num_1>>num_2;
}

void mult(float x, float y){
    float resultado;

    resultado = x * y;

    cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
}