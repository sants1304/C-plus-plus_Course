#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int filas, columnas, numero;

    cout<<"Introduzca el numero de filas: "; cin>>filas;
    cout<<"Introduzca el numero de columnas: "; cin>>columnas;

    vector<vector<int>> matriz;

    for (int i = 0; i < filas; i++){
        vector<int> filas;
        for (int j = 0; j < columnas; j++){
            cout<<"Introduzca el valor correspondiente de la casilla ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas.push_back(numero);
        }
        matriz.push_back(filas);
    }


    cout<<"\nMatriz: "<<endl;
    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz.at(i).size(); j++){
            cout<<"Posicion ["<<i<<"]["<<j<<"]: "<<matriz.at(i).at(j)<<endl;
        }
    }
    
    cout<<"\n";

    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz.at(i).size(); j++){
            cout<<matriz.at(i).at(j)<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}