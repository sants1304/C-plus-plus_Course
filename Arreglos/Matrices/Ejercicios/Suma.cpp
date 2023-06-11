#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int numero, suma;
    vector<vector<int>> matriz_1;
    vector<vector<int>> matriz_2;
    vector<vector<int>> matriz_suma;

    cout<<"\nMatriz 1: "<<endl;
    for(int i = 0; i < 3; i++){
        vector<int> filas_1;
        for(int j = 0; j < 3; j++){
            cout<<"Ingresar el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas_1.push_back(numero);
        }
        cout<<endl;
        matriz_1.push_back(filas_1);
    }

    cout<<"\nMatriz 2: "<<endl;
    for(int i = 0; i < 3; i++){
        vector<int> filas_2;
        for(int j = 0; j < 3; j++){
            cout<<"Ingresar el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas_2.push_back(numero);
        }
        cout<<endl;
        matriz_2.push_back(filas_2);
    }

    cout<<"\nMatriz 1: "<<endl;
    for(int i = 0; i < matriz_1.size(); i++){
        for(int j = 0; j < matriz_1.at(i).size(); j++){
            cout<<matriz_1.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nMatriz 2: "<<endl;
    for(int i = 0; i < matriz_2.size(); i++){
        for(int j = 0; j < matriz_2.at(i).size(); j++){
            cout<<matriz_2.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nSuma Matrices : "<<endl;
    for(int i = 0; i < matriz_1.size(); i++){
        vector<int> suma_filas;
        for(int j = 0; j < matriz_1.at(i).size(); j++){
            suma = matriz_1.at(i).at(j) + matriz_2.at(i).at(j);
            suma_filas.push_back(suma);
        }
        matriz_suma.push_back(suma_filas);
    }
    
    for(int i = 0; i < matriz_suma.size(); i++){
        for(int j = 0; j < matriz_suma.at(i).size(); j++){
            cout<<matriz_suma.at(i).at(j)<<"   ";
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}