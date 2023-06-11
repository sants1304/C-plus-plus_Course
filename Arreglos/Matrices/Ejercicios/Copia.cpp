#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    int numero;
    
    vector <vector<int>> matriz;
    vector <vector<int>> copia;

    for(int i = 0; i < 2; i++){
        vector<int> filas;
        for(int j = 0; j < 2; j++){
            cout<<"Ingresar el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>numero;
            filas.push_back(numero);
        }
        cout<<endl;
        matriz.push_back(filas);
    }

    for(int i = 0; i < matriz.size(); i++){
        vector<int> fila_copia;
        for(int j = 0; j < matriz.at(i).size(); j++){
            fila_copia.push_back(matriz.at(i).at(j));
        }
        copia.push_back(fila_copia);
    }

    cout<<"La matriz copiada es: "<<endl;
    for(int i = 0; i < copia.size(); i++){
        for(int j = 0; j < copia.at(i).size(); j++){
            cout<<copia.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    system("pause");
    return 0;
}