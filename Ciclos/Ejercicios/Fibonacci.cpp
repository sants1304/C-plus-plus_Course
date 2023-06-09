#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int n, num_1 = 0, num_2 = 1, num_3 = 1;

    cout<<"Digite el numero de elementos: "; cin>>n;
    cout<<"1 ";

    for (int i = 1; i <= n; i++){
        num_3 = num_1 + num_2;
        cout<<num_3<<" ";
        num_1 = num_2;
        num_2 = num_3;
    }    
    
    cout<<"\n";
    
    system("pause");
    return 0;
}