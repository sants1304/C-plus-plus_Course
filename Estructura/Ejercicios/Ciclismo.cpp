#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>

using namespace std;

struct Etapas{
    int horas, minutos, segundos;
};

int main(){
    
    int numero_etapas, total_horas, total_minutos, total_segundos;
    vector<struct Etapas> etapas;

    cout<<"Digite el numero de etapas: ";
    cin>>numero_etapas;

    for(int i = 0; i < numero_etapas; i++){
        struct Etapas etapa_n;
        cout<<"\n:Etapa "<<i<<":\n";
        
        fflush(stdin);
        cout<<"Horas: "; cin>>etapa_n.horas;
        cout<<"Minutos: "; cin>>etapa_n.minutos;
        cout<<"Segundos: "; cin>>etapa_n.segundos;

        etapas.push_back(etapa_n);

        total_horas += etapas.at(i).horas;
        total_minutos += etapas.at(i).minutos;
        total_segundos += etapas.at(i).segundos;

        if(total_segundos >= 60){
            total_segundos -= 60;
            total_minutos += 1;
        }

        if(total_minutos >= 60){
            total_minutos -= 60;
            total_horas += 1;
        }

    }
    cout<<endl;
    cout<<"Horas Totales: "<<total_horas<<endl;
    cout<<"Minutos Totales: "<<total_minutos<<endl;
    cout<<"Segundos Totales: "<<total_segundos<<endl;

    cout<<endl;
    
    system("pause");
    return 0;
}