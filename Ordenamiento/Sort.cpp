#include<iostream>
#include<stdlib.h>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> numeros = {3,5,8,1,4};

    sort(numeros.begin(), numeros.end());

    cout<<"Orden Ascendente: "<<endl;

    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros.at(i)<<" ";
    }
    cout<<endl;

    cout<<"Orden Descendente: "<<endl;

    for(int i = numeros.size(); i > 0; i--){
        cout<<numeros.at(i-1)<<" ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}