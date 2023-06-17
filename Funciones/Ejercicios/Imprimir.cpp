#include<iostream>
#include<conio.h>

using namespace std;

template <class Plantilla>
void despliegue(Plantilla dato);

int main(){

    int num_1 = 4;
    float num_2 = 15.67;
    double num_3 = 53.29402;
    char dato = 'a';

    despliegue(num_1);
    despliegue(num_2);
    despliegue(num_3);
    despliegue(dato);

    getch();
    return 0;
}

template <class Plantilla>
void despliegue(Plantilla dato){
    cout<<"El dato es: "<<dato<<endl;
}