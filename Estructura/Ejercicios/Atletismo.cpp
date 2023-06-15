#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct corredor{
    char Nombre[100];
    int edad;
    char sexo;
    char club[100];
    char categoria[100];
} corredor_1;

int main(){
    
    cout<<"Digite el nombre del corredor: ";
    cin.getline(corredor_1.Nombre,100,'\n');
    
    fflush(stdin);
    cout<<"Digite la edad del corredor: ";
    cin>>corredor_1.edad;

    fflush(stdin);
    cout<<"Digite el sexo del corredor (F/M): ";
    cin>>corredor_1.sexo;

    fflush(stdin);
    cout<<"Digite el nombre del club del corredor: ";
    cin.getline(corredor_1.club,100,'\n');

    if(corredor_1.edad <= 18){
        strcpy(corredor_1.categoria,"Juvenil");
    }else if(corredor_1.edad <= 40){
        strcpy(corredor_1.categoria,"Senior");
    }else if(corredor_1.edad > 40){
        strcpy(corredor_1.categoria,"Veterano");
    }

    cout<<"\n\nDatos registrados: "<<endl;
    cout<<"Nombre: "<<corredor_1.Nombre<<endl;
    cout<<"Edad: "<<corredor_1.edad<<endl;
    cout<<"Sexo: "<<corredor_1.sexo<<endl;
    cout<<"Club: "<<corredor_1.club<<endl;
    cout<<"Categoria: "<<corredor_1.categoria<<endl;

    system("pause");
    return 0;
}
