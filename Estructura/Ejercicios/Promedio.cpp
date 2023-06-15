#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string.h>

using namespace std;

struct promedio{
    float nota_1, nota_2, nota_3, promedio;
};

struct alumno{
    char nombre[1000], sexo;
    int edad;
    struct promedio prom;
};

int main(){
    
    int numero_estudiantes, mejor_estudiante;
    float promedio_alumno, mejor_promedio = 0;
    vector<struct alumno> alumnos;

    cout<<"Digite el numero de estudiantes: ";
    cin>>numero_estudiantes;

    for(int i = 0; i < numero_estudiantes; i++){
        struct alumno alumno_1;
        cout<<"\n:Estudiante "<<i<<":\n";

        fflush(stdin);
        cout<<"Digite el nombre del estudiante: ";
        cin.getline(alumno_1.nombre,1000,'\n');
        cout<<"Digite el sexo del estudiante (F/M): ";
        cin>>alumno_1.sexo;
        cout<<"Digite la edad del estudiante: ";
        cin>>alumno_1.edad;
        
        cout<<"\n:Notas del alumno "<<i<<":\n";
        cout<<"Nota 1: ";
        cin>>alumno_1.prom.nota_1;
        cout<<"Nota 2: ";
        cin>>alumno_1.prom.nota_2;
        cout<<"Nota 3: ";
        cin>>alumno_1.prom.nota_3;

        alumno_1.prom.promedio = (alumno_1.prom.nota_1+alumno_1.prom.nota_2+alumno_1.prom.nota_3)/3;

        alumnos.push_back(alumno_1);

        if((i == 0) || (mejor_promedio <= alumnos.at(i).prom.promedio)){
            mejor_estudiante = i;
            mejor_promedio = alumnos.at(i).prom.promedio;
        }
        
    }

    cout.precision(2);
    cout<<"\n:Alumno con mejor promedio:\n";
    cout<<"Nombre: "<<alumnos.at(mejor_estudiante).nombre<<endl;
    cout<<"Sexo: "<<alumnos.at(mejor_estudiante).sexo<<endl;
    cout<<"Edad: "<<alumnos.at(mejor_estudiante).edad<<endl;
    cout<<"Promedio: "<<alumnos.at(mejor_estudiante).prom.promedio<<endl;

    cout<<endl;

    system("pause");
    return 0;
}
