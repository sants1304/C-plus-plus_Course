#include<iostream>
#include<stdlib.h>
#include<vector>
#include<time.h>

using namespace std;

int main(){

    int num_filas, num_columnas, num_random;
    vector<vector<int>> matriz;
    vector<vector<int>> copia;
    

    cout<<"Digite el numero de filas: "; cin>>num_filas;
    cout<<"Digite el numero de columnas: "; cin>>num_columnas;

    srand(time(NULL));

    for(int i = 0; i < num_filas; i++){
        vector<int> filas;
        for(int j = 0; j < num_columnas; j++){
            num_random = 0 + rand() % (10-0);
            filas.push_back(num_random);            
        }
        matriz.push_back(filas);
    }

    cout<<"La matriz generada es: "<<endl;
    for(int i = 0; i < matriz.size(); i++){
        vector<int>fila_copia;
        for(int j = 0; j < matriz.at(i).size(); j++){
            fila_copia.push_back(matriz.at(i).at(j));
        }
        copia.push_back(fila_copia);
    }

    for(int i = 0; i < copia.size(); i++){
        for(int j = 0; j < copia.at(i).size(); j++){
            cout<<copia.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}
