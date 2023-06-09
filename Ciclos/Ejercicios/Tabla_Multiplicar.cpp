#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int num_1;

    do{
        cout<<"Digite un numero: "; cin>>num_1;
    } while ((num_1 < 1) || (num_1 > 10));

    for (int i = 1; i <= 10; i++){
        cout<<num_1<<" x "<<i<<" = "<<(num_1 * i)<<endl;
    }

    system("pause");
    
    return 0;
}