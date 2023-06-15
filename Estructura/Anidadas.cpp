#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <iomanip> // Para std::fixed y std::setprecision

using namespace std;

struct infor_direccion{
    char direccion[100];
    char ciudad[20];
    char provincia[40];
};

struct empleado{
    char nombre[1000];
    struct infor_direccion dir_empleado;
    double salario;
};

int main(){

    vector<struct empleado> empleados(2);

    for(int i = 0;i < empleados.size(); i++){
        fflush(stdin); //Vaciar el buffer
        cout<<"Digite su nombre: ";
        cin.getline(empleados.at(i).nombre,1000,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados.at(i).dir_empleado.direccion,100,'\n');
        cout<<"Digite la ciudad: ";
        cin.getline(empleados.at(i).dir_empleado.ciudad,20,'\n');
        cout<<"Digite la provincia: ";
        cin.getline(empleados.at(i).dir_empleado.provincia,40,'\n');
        cout<<"Digite el salario: ";
        cin>>empleados.at(i).salario;
        cout<<"\n";
    }

    cout << fixed; // Establecer el formato de salida en notación fija (no científica)
    cout << setprecision(2); // Establecer la precisión decimal a 2 lugares

    for(int i = 0; i < empleados.size(); i++){
        cout<<"Empleado "<<i+1<<endl;
        cout<<"Nombre:"<<empleados.at(i).nombre<<endl;
        cout<<"Direccion:"<<empleados.at(i).dir_empleado.direccion<<endl;
        cout<<"Ciudad:"<<empleados.at(i).dir_empleado.ciudad<<endl;
        cout<<"Provincia:"<<empleados.at(i).dir_empleado.provincia<<endl;
        cout<<"Salario:"<<empleados.at(i).salario<<endl;
        cout<<"\n";
    }
    
    system("pause");
    return 0;
}