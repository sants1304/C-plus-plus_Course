#include<iostream>
#include<conio.h>

using namespace std;

int encontrarMax(int x, int y);

int main(){
    int num_1, num_2, numMax;

    cout<<"Digite dos numeros: "<<endl;
    cin>>num_1>>num_2;

    numMax = encontrarMax(num_1,num_2);

    cout<<"El numero mayor es: "<<numMax<<endl;
    cout<<"El numero mayor es: "<<encontrarMax(num_1,num_2)<<endl;

    getch();
    return 0;
}

int encontrarMax(int x, int y){
    int numMax;

    if(x>y){
        numMax = x;
    } else{
        numMax = y;
    }

    return numMax;
}