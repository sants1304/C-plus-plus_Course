#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>

using namespace std;

struct persona{
    char nombre[1000];
    bool discapacidad;
};

int main(){
    
    int numero_personas;
    vector<struct persona> personas, personas_discapacidad, personas_sanas;

    cout<<"Digite el numero de personas: ";
    cin>>numero_personas;

    for(int i = 0; i < numero_personas; i++){
        struct persona Nueva_persona;
        cout<<"\n:Persona "<<i<<":\n";

        fflush(stdin);
        cout<<"Nombre: ";
        cin.getline(Nueva_persona.nombre,1000,'\n');

        cout<<"Discapacidad (1: Si, 0:No): ";
        cin>>Nueva_persona.discapacidad;

        personas.push_back(Nueva_persona);

        if(personas.at(i).discapacidad){
            personas_discapacidad.push_back(Nueva_persona);
        } else{
            personas_sanas.push_back(Nueva_persona);
        }

    }
    
    cout<<"\nPersonas con discapacidad: "<<personas_discapacidad.size()<<endl;
    cout<<"Personas sin discapacidad: "<<personas_sanas.size()<<endl;

    cout<<endl;

    system("pause");
    return 0;
}