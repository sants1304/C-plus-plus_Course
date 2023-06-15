#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

struct alumno{
    char nombre[100];
    int edad;
    float promedio;
};

int main(){
    
    float mejor_promedio = 0, mejor_estudiante;
    vector<struct alumno> alumnos(3);

    for(int i = 0; i < alumnos.size(); i++){
        fflush(stdin);
        cout<<"Estudiante "<<i+1<<": ";
        cout<<"\nNombre: ";
        cin.getline(alumnos.at(i).nombre,100,'\n');
        cout<<"Edad: ";
        cin>>alumnos.at(i).edad;
        cout<<"Promedio: ";
        cin>>alumnos.at(i).promedio;

        if(alumnos.at(i).promedio >= mejor_promedio){
            mejor_promedio = alumnos.at(i).promedio;
            mejor_estudiante = i;
        }

        cout<<endl;

    }

    cout.precision(2);
    cout<<"\nEl estudiante "<<mejor_estudiante<<" tiene el mejor promedio"<<endl;
    cout<<"Nombre: "<<alumnos.at(mejor_estudiante).nombre<<endl;
    cout<<"Edad: "<<alumnos.at(mejor_estudiante).edad<<endl;
    cout<<"Promedio: "<<alumnos.at(mejor_estudiante).promedio<<endl;
    
    cout<<endl;

    system("pause");
    return 0;
}