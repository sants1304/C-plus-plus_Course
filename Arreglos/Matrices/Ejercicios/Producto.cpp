#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int numero;
    vector<vector<int>>matriz_1;
    vector<vector<int>>matriz_2;
    vector<vector<int>>multiplicacion;

    cout<<"Matriz 1:"<<endl;
    for(int i = 0; i < 3; i++){
        vector<int> filas_1;
        for(int j = 0; j < 3; j++){
            cout<<"Digite el valor de la posicion ["<<i<<"]["<<j<<"]: ";
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
            cout<<"Digite el valor de la posicion ["<<i<<"]["<<j<<"]: ";
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

    for(int i = 0; i < matriz_1.size(); i++){
        vector<int> filas_m;
        for(int j = 0; j < matriz_1.at(i).size(); j++){
            numero = matriz_1.at(i).at(j) * matriz_2.at(i).at(j);            
            filas_m.push_back(numero);
        }
        multiplicacion.push_back(filas_m);
    }

    cout<<"\nMatriz multiplicacion: "<<endl;
    for(int i = 0; i < multiplicacion.size(); i++){
        for(int j = 0; j < multiplicacion.at(i).size(); j++){
            cout<<multiplicacion.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;

    system("pause");
    return 0;
}