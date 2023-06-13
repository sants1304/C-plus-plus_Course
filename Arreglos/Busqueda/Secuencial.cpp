#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int dato, i = 0;
    bool bandera = false;
    vector<int> numeros = {3,4,1,2,5};

    cout<<"Digite el dato a buscar: ";
    cin>>dato;

    i=0;
    while((bandera == false) && (i<numeros.size())){
        if(numeros.at(i) == dato){
            bandera = true;
        }
        i++;
    }

    if(bandera){
        cout<<"\nEl dato se encuentra en la posicion "<<(i-1)<<" del arreglo";
    } else{
        cout<<"\nEl dato no se encuentra en el arreglo";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}