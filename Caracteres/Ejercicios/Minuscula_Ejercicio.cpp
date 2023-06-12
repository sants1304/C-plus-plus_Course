#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    
    char nombre_mayuscula[1000];

    cout<<"Digite su nombre en mayuscula: ";
    cin.getline(nombre_mayuscula,1000,'\n');
    strupr(nombre_mayuscula);
    
    if(nombre_mayuscula[0] == 'A'){
        strlwr(nombre_mayuscula);
        cout<<nombre_mayuscula;
    }
    cout<<endl;
    
    system("pause");
    return 0;
}