#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    
    int numero;
    vector<vector<int>> matriz;

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

    cout<<"\nLa diagonal principal es: "<<endl;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j <matriz.at(i).size(); j++){
            if( i == j){
                cout<<matriz.at(i).at(j)<<"  ";
            } else{
                cout<<"x  ";
            }
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}