#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    
    int n_1, n_2;
    char letra;

    vector<char> letras_1;
    vector<char> letras_2;
    vector<char> letras_new;


    cout<<"Digite el numero de elementos del primer vector de letras: "; cin>>n_1;
    cout<<"Digite el numero de elementos del segundo vector de letras: "; cin>>n_2;

    cout<<"\n";

    cout<<"Vector 1: "<<endl;
    for (int i = 0; i < n_1; i++){
        cout<<"Digite una letra: "; cin>>letra;
        letras_new.push_back(letra);
    }
    
    cout<<"\n";

    cout<<"Vector 2: "<<endl;
    for (int i = 0; i < n_2; i++){
        cout<<"Digite una letra: "; cin>>letra;
        letras_new.push_back(letra);
    }

    cout<<"\n";

    cout<<"Vector nuevo: "<<endl;
    for (int i = 0; i < (n_1 + n_2); i++){
        cout<<"Indice "<<i<<": "<<letras_new.at(i)<<endl;
    }
    
    system("pause");
    return 0;
}