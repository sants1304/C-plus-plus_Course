#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void pedirDatos();
void parteDecimal(double x);

float numero;

int main(){
    
    pedirDatos();
    parteDecimal(numero);
    
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Escriba un numero: ";
    cin>>numero;
}

void parteDecimal(double x){
    double fraccionaria = modf(x, &fraccionaria);
    cout<<"La parte decimal es: "<<fraccionaria<<endl;
}