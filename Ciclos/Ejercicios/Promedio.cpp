#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    float nota_1, nota_2, nota_3;
    int all_test = 0, one_test = 0, last_test = 0;

    for (int i = 1; i <= 5; i++){
        cout<<"Introduzca la nota de los tres examenes del estudiante "<<i<<": "<<endl;cin>>nota_1>>nota_2>>nota_3;

        if((nota_1 >= 3.0) && (nota_2 >= 3.0) && (nota_3 >= 3.0)){
            all_test += 1;
            one_test += 1;
        } else if ((nota_1<= 3.0) && (nota_2 <= 3.0) && (nota_3 >= 3.0)){
            last_test += 1;
            one_test += 1;
        } else if ((nota_1 >= 3.0) || (nota_2 >= 3.0) || (nota_3 >= 3.0)){
            one_test += 1;
        }        
    }

    cout<<"\nEstudiantes que aprobaron todos los examenes: "<<all_test<<endl;
        cout<<"\nEstudiantes que aprobaron al menos un examen: "<<one_test<<endl;
        cout<<"\nEstudiantes que aprobaron unicamente el ultimo examen: "<<last_test<<endl;
    
    system("pause");
    return 0;
}