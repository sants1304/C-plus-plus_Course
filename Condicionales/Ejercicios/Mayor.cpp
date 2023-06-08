#include<iostream>

using namespace std;

int main(){

    float num_1, num_2, num_3;

    //cout<<"Digite el primer numero: "; cin>>num_1;
    //cout<<"Digite el segundo numero: "; cin>>num_2;
    //cout<<"Digite el tercer numero: "; cin>>num_3;

    cout<<"Digite tres numeros: "<<endl; cin>>num_1>>num_2>>num_3;

    if (num_1 == num_2 && num_2 == num_3){
        cout<<"\nLos tres numeros son iguales";
    } else{
        if (num_1 >= num_2){
            if (num_1 >= num_3){
                cout<<"\nEl primer numero es el mayor";
            } else{
                cout<<"\nEl tercer numero es el mayor";
            }
        } else{
            if (num_2 >= num_3){
                cout<<"\nEl segundo numero es el mayor";
            } else{
                cout<<"\nEl tercer numero es el mayor";
            }
        }
    }


    return 0;
}