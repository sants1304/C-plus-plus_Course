#include <iostream>
#include <stdlib.h>
# include <time.h>

using namespace std;

int main(){
    
    int num, num_random, contador = 0;

    srand(time(NULL)); //Genera un numero aleatorio

    num_random = 1 + rand() % (101-1);
    // variable = lim_inferior + rand() % (lim_superior +1 - lim_inferior);

    do{
        cout<<"Digite un numero: "; cin>>num;

        if (num > num_random){
            cout<<"\nDigite un numero menor\n";
        } else if (num < num_random){
            cout<<"\nDigite un numero mayor\n";
        }

        contador += 1;

    } while ( num != num_random);

    cout<<"\nADIVINASTE EL NUMERO. Te tomo "<<contador<<" intentos."<<endl;
    
    system("pause");
    return 0;
}