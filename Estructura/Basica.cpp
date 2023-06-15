#include<iostream>
#include<stdlib.h>

using namespace std;

struct Persona{
    char nombre[1000];
    int edad;
}
persona_1={"Santiago",19},
persona_2={"Isabella",13},
persona_3
;

int main(){
    
    cout<<"\tImprimir datos";
    cout<<" \nNombre persona 1: "<<persona_1.nombre<<endl;
    cout<<"Edad persona 1: "<<persona_1.edad<<endl;

    cout<<"\nNombre persona 2: "<<persona_2.nombre<<endl;
    cout<<"Edad persona 2: "<<persona_2.edad<<endl;


    cout<<"\n\tLeer datos";
    cout<<"\nIngresar Nombre persona 3: ";
    cin.getline(persona_3.nombre,1000,'\n');
    cout<<"Ingresar Edad persona 3: ";
    cin>>persona_3.edad;

    cout<<"\nNombre persona 3: "<<persona_3.nombre<<endl;
    cout<<"Edad persona 3: "<<persona_3.edad<<endl;
    
    system("pause");
    return 0;
}

