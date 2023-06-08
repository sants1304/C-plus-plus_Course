#include<iostream>

using namespace std;

int main(){
    
    int num_1;

    cout<<"Digite el numero: ";cin>>num_1;

    if (num_1 == 0){
        cout<<"\nEl numero es cero";
    } else if (num_1 > 0){
        cout<<"\nEl numero es positivo";
    } else{
        cout<<"\nEl numero es negativo";
    }

    return 0;
}