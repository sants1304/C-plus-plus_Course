#include<iostream>

using namespace std;

int main(){
    
    int num_1;

    cout<<"Digite un numero: "; cin>>num_1;

    if (num_1 == 0){
        cout<<"\nEl numero es cero";
    } else if (num_1 % 2 == 0){
        cout<<"\nEl numero es par";
    } else{
        cout<<"\nEl numero es impar";
    }
    
    return 0;
}