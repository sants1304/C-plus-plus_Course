#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    float temperatura, suma_temperatura = 0, promedio_temperatura = 0, max_temperatura = -1000, min_temperatura = 1000;

    for ( int i = 1; i <= 24; i++){
        cout<<"Hora "<<i<<endl;

        if (i % 4 == 0){
            cout<<"Introduza la temperatura registrada: ";cin>>temperatura;
            if(temperatura >= max_temperatura){
                max_temperatura = temperatura;
            }

            if(temperatura <= min_temperatura){
                min_temperatura = temperatura;
            }

            suma_temperatura += temperatura;
        }

    }
    
    promedio_temperatura = suma_temperatura / 6.0;

    cout<<"\nPromedio de temperatura: "<<promedio_temperatura;
    cout<<"\nTemperatura mas baja: "<<min_temperatura;
    cout<<"\nTemperatura mas alta: "<<max_temperatura<<endl;

    system("pause");
    
    return 0;
}