#include<iostream>

using namespace std;

int main(){

    int edad;

    cout<<"Digite su edad: "; cin>>edad;

    if ((edad >= 18) && (edad <= 25)){
        cout<<"\nLa edad esta en el rango de [18-25]";
    } else{
        cout<<"\nLa edad esta afuera del rango de [18-25]";
    }
    
    return 0;
}