#include<iostream>

using namespace std;

int main(){

    int num_decimal, unidad_mil, unidad_centenas, unidad_decena, unidad;

    cout<<"Digite un numero menor a 4000: ";cin>>num_decimal;

    unidad_mil = num_decimal / 1000; num_decimal %= 1000;
    unidad_centenas = num_decimal / 100; num_decimal %= 100;
    unidad_decena = num_decimal / 10; num_decimal %= 10;
    unidad = num_decimal;

    cout<<"\nEl numero en romano es: "<<endl;

    switch(unidad_mil){
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    }

    switch(unidad_centenas){
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCC"; break;
        case 9: cout<<"CM"; break;
    }

    switch(unidad_decena){
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
    }

    switch(unidad){
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
    }


    return 0;
}