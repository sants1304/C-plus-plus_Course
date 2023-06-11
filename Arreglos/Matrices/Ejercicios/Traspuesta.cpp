#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int numero;
    vector<vector<int>> matriz;
    vector<vector<int>> matriz_traspuesta;

    for(int i = 0; i < 3; i++){
        vector<int> filas;
        for(int j = 0; j < 3; j++){
            cout<<"Ingresar el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas.push_back(numero);
        }
        cout<<endl;
        matriz.push_back(filas);
    }

    cout<<"\nLa matriz es: "<<endl;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz.at(i).size(); j++){
            cout<<matriz.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    for(int j = 0; j < 3; j++){
        vector<int> filas_traspuesta;
        for(int i = 0; i < 3; i++){
            numero = matriz.at(i).at(j);
            filas_traspuesta.push_back(numero);
        }
        matriz_traspuesta.push_back(filas_traspuesta);
    }

    cout<<"\nLa matriz traspuesta es: "<<endl;
    for(int i = 0; i < matriz_traspuesta.size(); i++){
        for(int j = 0; j < matriz_traspuesta.at(i).size(); j++){
            cout<<matriz_traspuesta.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}