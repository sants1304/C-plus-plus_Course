#include <iostream>

using namespace std;

int main(){

    float precio_sin_impuesto, iva=0, precio_con_impuesto=0;

    cout<<"Introduzca el precio del producto: "; cin>>precio_sin_impuesto;
    cout<<"Introduzca el valor porcentual del IVA: "; cin>>iva;

    iva = iva / 100;

    precio_con_impuesto = precio_sin_impuesto * (1+iva);

    cout<<"El precio con IVA aplicado es: "<<precio_con_impuesto<<endl;



    return 0;

}