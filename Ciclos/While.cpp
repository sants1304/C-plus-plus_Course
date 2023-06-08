#include<iostream>
#include<conio.h>   //lib getch()

using namespace std;

int main(){
    
    int i;

    i = 1;

    while(i <= 10){
        cout<<i<<endl;
        i++;    // i = i + 1
    }


    i = 10;

    while (i >= 1){
        cout<<i<<endl;
        i--;    // i = i -1
    }
    
    getch();    // Break del ejecutable

    return 0;
}