#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    // El arreglo debe estar ordenado de forma ascendente
    vector<int> numeros = {1, 2, 3, 4, 5};
    int inferior = 0, superior = numeros.size() - 1, mitad, dato;
    bool bandera = false;

    cout << "Digite el dato a buscar: ";
    cin >> dato;

    while (inferior <= superior) {
        mitad = (inferior + superior) / 2;

        if (numeros.at(mitad) == dato) {
            bandera = true;
            break;
        } else if (numeros.at(mitad) > dato) {
            superior = mitad - 1;
        } else {
            inferior = mitad + 1;
        }
    }

    if (bandera) {
        cout << "\nEl dato se encuentra en la posicion " << mitad << " del arreglo";
    } else {
        cout << "\nEl dato no se encuentra en el arreglo";
    }
    cout << endl;

    system("pause");
    return 0;
}
