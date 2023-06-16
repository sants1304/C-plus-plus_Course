#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo funcion
template <class Ejemplo> //template <class name>
void mostrarAbs(Ejemplo numero);

int main(){

    int num_1 = 4;
    float num_2 = -10.4;

    mostrarAbs(num_1);
    mostrarAbs(num_2);

    getch();
    return 0;
}

template <class Ejemplo> //template <class name>
void mostrarAbs(Ejemplo numero){
    if(numero < 0){
        numero = numero * -1;
    }

    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}