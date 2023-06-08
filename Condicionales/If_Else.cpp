#include<iostream>

using namespace std;

int main(){
    
    float num, dato = 0;

    cout<<"Digite un numero: "; cin>>num;

    if(num == dato){
        cout<<"El numero es cero"<<endl;
    } else{
        cout<<"El numero no es cero"<<endl;
    }

    if (num != dato){
        cout<<"El numero no es cero"<<endl;
    } else{
        cout<<"El numero es cero"<<endl;
    }
    
    if (num >= dato){ // > -- mayor, >= -- mayor igual
        cout<<"El numero es mayor o igual a cero"<<endl;
    } else{
        cout<<"El numero es menor a cero"<<endl;
    }

    if (num <= dato){ // < -- mayor, <= -- mayor igual
        cout<<"El numero es menor o igual a cero"<<endl;
    } else{
        cout<<"El numero es mayor a cero"<<endl;
    }


    return 0;
}