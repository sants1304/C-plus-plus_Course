#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char cadena[] = "PROGRAMACION EN C++";

    strlwr(cadena);

    cout<<cadena<<endl;
    
    system("pause");
    return 0;
}