#include <iostream>

using namespace std;

int main(){
    
    float nota_practica, nota_teorica, nota_participacion, nota_final=0;

    cout<<"Digite la nota practica del estudiante: "; cin>>nota_practica;
    cout<<"Digite la nota teorica del estudiante: "; cin>>nota_teorica;
    cout<<"Digite la nota teorica del estudiante: "; cin>>nota_participacion;
    
    nota_practica *= 0.3; //nota_practica = nota_practica * 0.3
    nota_teorica *= 0.6;
    nota_participacion *= 0.1;
    
    nota_final = nota_practica + nota_teorica + nota_participacion;

    cout<<"\nLa nota final es: "<<nota_final<<endl;
    
    return 0;
}