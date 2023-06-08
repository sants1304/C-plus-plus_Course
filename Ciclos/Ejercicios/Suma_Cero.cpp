#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int num_1, suma = 0;

    do{
        cout<<"Introduzca un numero: "; cin>>num_1;

        if( num_1 > 0){
            suma += num_1;
        }

    } while(!((num_1 == 0) || ((num_1 >= 20) && (num_1 <= 30))));
    
    cout<<"\nLa suma es: "<<suma<<endl;

    system("pause");
    return 0;
}