#include<iostream>
#include<stdlib.h>
#include<vector>
#include <iomanip>

using namespace std;

struct empleado{
    char nombre[100];
    int salario;
};

int main(){
    
    int cantidad_empleados, menor_salario, mayor_salario, menor_empleado, mayor_empleado;
    vector<struct empleado> empleados;

    cout<<"Digite la cantidad de empleados: ";
    cin>>cantidad_empleados;

    for(int i = 0; i < cantidad_empleados; i++){
        struct empleado nuevoEmpleado;
        fflush(stdin);
        cout<<"\nEmpleado "<<i<<": "<<endl;
        cout<<"Digite el nombre: ";
        cin.getline(nuevoEmpleado.nombre,100,'\n');
        cout<<"Digite el salario: ";
        cin>>nuevoEmpleado.salario;
        empleados.push_back(nuevoEmpleado);

        if(i == 0){
            menor_salario = empleados.at(i).salario;
            mayor_salario = empleados.at(i).salario;
            menor_empleado = i;
            mayor_empleado = i;
        }

        if(empleados.at(i).salario >= mayor_salario){
            mayor_salario = empleados.at(i).salario;
            mayor_empleado = i;
        } else if(empleados.at(i).salario <= menor_salario){
            menor_salario = empleados.at(i).salario;
            menor_empleado = i;
        }

        cout<<endl;
    }


    cout << fixed; 
    cout << setprecision(2);

    cout<<"\nEl empleado con mayor salario es "<<mayor_empleado<<endl;
    cout<<"\tNombre: "<<empleados.at(mayor_empleado).nombre<<endl;
    cout<<"\tSalario: "<<empleados.at(mayor_empleado).salario<<endl;

    cout<<"\nEl empleado con menor salario es "<<menor_empleado<<endl;
    cout<<"\tNombre: "<<empleados.at(menor_empleado).nombre<<endl;
    cout<<"\tSalario: "<<empleados.at(menor_empleado).salario<<endl;

    system("pause");
    return 0;
}