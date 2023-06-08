#include<iostream>

using namespace std;

int main(){
    
    int num_1;

    cout<<"Digite un numero entre 1-5: "<<endl;cin>>num_1;

    switch(num_1){
        case 1: cout<<"Es el numero 1"; break;
        case 2: cout<<"Es el numero 2"; break;
        case 3: cout<<"Es el numero 3"; break;
        case 4: cout<<"Es el numero 4"; break;
        case 5: cout<<"Es el numero 5"; break;
        default: cout<<"El numero no esta en el rango de 1-5"; break;
    }
    
    return 0;
}