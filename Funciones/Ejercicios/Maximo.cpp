#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

template <class Plantilla>
void maximo(Plantilla num_1, Plantilla num_2, Plantilla num_3);

int main(){
    
    float num_1, num_2, num_3;
    
    cout<<"Digite un numero: ";
    cin>>num_1;
    cout<<"Digite un numero: ";
    cin>>num_2;
    cout<<"Digite un numero: ";
    cin>>num_3;

    maximo(num_1,num_2,num_3);
    
    getch();
    return 0;
}

template <class Plantilla>
void maximo(Plantilla num_1, Plantilla num_2, Plantilla num_3){
    if(num_1 >= num_2 && num_1 >= num_3){
        cout<<"El valor maximo es: "<<num_1<<endl;
    } else if(num_2 >= num_1 && num_2 >= num_3){
        cout<<"El valor maximo es: "<<num_2<<endl;
    } else if(num_3 >= num_1 && num_3 >= num_2){
        cout<<"El valor maximo es: "<<num_3<<endl;
    }
}