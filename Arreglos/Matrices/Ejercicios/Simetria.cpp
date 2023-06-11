#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    bool simetria = true;
    int numero, numero_filas, numero_columnas;
    vector<vector<int>> matriz;
    vector<vector<int>> matriz_traspuesta;

    cout<<"Digite el numero de filas: ";cin>>numero_filas;
    cout<<"Digite el numero de columnas: ";cin>>numero_columnas;

    for(int i = 0; i < numero_filas; i++){
        vector<int>filas;
        for(int j = 0; j < numero_columnas; j++){
            cout<<"Digite el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas.push_back(numero);
        }
        cout<<endl;
        matriz.push_back(filas);
    }

    for(int j = 0; j < numero_columnas; j++){
        vector<int>filas_traspuesta;
        for(int i = 0; i < numero_filas; i++){
            numero = matriz.at(i).at(j);
            filas_traspuesta.push_back(numero);
        }
        matriz_traspuesta.push_back(filas_traspuesta);
    }

    cout<<"\nMatriz original: "<<endl;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz.at(i).size(); j++){
            cout<<matriz.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nMatriz traspuesta: "<<endl;
    for(int i = 0; i < matriz_traspuesta.size(); i++){
        for(int j = 0; j < matriz_traspuesta.at(i).size(); j++){
            cout<<matriz_traspuesta.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }

    if(numero_filas == numero_columnas){
        for(int i = 0; i < matriz.size(); i++){
            for(int j = 0; j < matriz.at(i).size(); j++){
                if(matriz.at(i).at(j) != matriz_traspuesta.at(i).at(j)){
                    simetria = false;
                    break;
                }
            }
        }
    }else{
        simetria = false;
    }

    if(simetria == true){
        cout<<"\nLa matriz es simetrica"<<endl;
    }else{
        cout<<"\nLa matriz no es simetrica"<<endl;
    }
    
    system("pause");
    return 0;
}