#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int base, exponente;

int main(){
    
    pedirDatos();
    funpot(base,exponente);
    
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite la base: ";
    cin>>base;

    cout<<"Digite el exponente: ";
    cin>>exponente;
}

void funpot(int x, int y){
    long resultado;

    resultado = pow(x,y);

    cout<<"El resultado de la potencia es: "<<resultado<<endl;
}