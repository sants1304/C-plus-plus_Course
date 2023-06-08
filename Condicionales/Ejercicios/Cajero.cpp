#include<iostream>

using namespace std;

int main(){
    
    int saldo_inicial = 1000, option;
    float saldo, extra, retirar;

    cout<<"\tBienvenido a su Cajero Automatico."<<endl; //  \t --> Tab
    cout<<"1. Ingresar dinero a la cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione alguna de las opciones: "; cin>>option;

    switch (option){
        case 1:
            cout<<"\nDigite la cantidad de dinero a ingresar: "; cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Dinero en cuenta: "<<saldo; break;
        case 2:
            cout<<"\nDigite la cantidad de dinero a retirar: "; cin>>retirar;
            if (retirar <= saldo_inicial){
                saldo = saldo_inicial - retirar;
                cout<<"Dinero en cuenta: "<<saldo; break;
            }else{
                cout<<"Saldo insuficiente";
            }
        case 3:
            break;
        default: cout<<"Opcion no valida";
    }

    return 0;
}