#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>

using namespace std;

struct atleta{
    char nombre[100];
    char pais[100];
    int numero_medallas;
};

int main(){
    
    int numero_atletas, mayor_medalla, mayor_atleta;
    vector<struct atleta> atletas;

    cout<<"Digite el numero de atletas: ";
    cin>>numero_atletas;

    for(int i = 0; i < numero_atletas; i++){
        struct atleta nuevoAtleta;
        cout<<"\nAtleta "<<i<<": "<<endl;
        fflush(stdin);
        cout<<"Digite el nombre: ";
        cin.getline(nuevoAtleta.nombre,100,'\n');
        cout<<"Digite el pais: ";
        cin.getline(nuevoAtleta.pais,100,'\n');
        cout<<"Digite el numero de medallas: ";
        cin>>nuevoAtleta.numero_medallas;

        atletas.push_back(nuevoAtleta);

        if(i == 0){
            mayor_medalla = atletas.at(i).numero_medallas;
            mayor_atleta = i;
        } else if(atletas.at(i).numero_medallas >= mayor_medalla){
            mayor_medalla = atletas.at(i).numero_medallas;
            mayor_atleta = i;
        }

        cout<<endl;

    }

    cout<<"\nEl atleta "<<mayor_atleta<<" tiene la mayor cantidad de medallas"<<endl;
    cout<<"\tNombre: "<<atletas.at(mayor_atleta).nombre<<endl;
    cout<<"\tPais: "<<atletas.at(mayor_atleta).pais<<endl;

    
    system("pause");
    return 0;
}