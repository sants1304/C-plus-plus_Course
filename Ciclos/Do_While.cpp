#include<iostream>
#include<stdlib.h>  // Lib System("Pause")

using namespace std;

int main(){

    int i;

    i = 1;

    do{
        cout<<i<<endl;
        i++;
    } while(i <= 10);

    i = 10;

    do{
        cout<<i<<endl;
        i--;
    } while(i >= 10);

    system("pause");
    return 0;
}