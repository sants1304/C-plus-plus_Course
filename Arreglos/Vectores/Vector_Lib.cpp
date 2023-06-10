//https://www.programiz.com/cpp-programming/vectors

#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    vector<int> vector1 = {1, 2, 3, 4, 5};

    vector<int> vector2{6, 7, 8, 9, 10};

    vector<int> vector3(5, 12);

    cout << "vector1 = ";

    for (const int& i : vector1) {
        cout << i << "  ";
    }

    cout << "\nvector2 = ";

    for (const int& i : vector2) {
        cout << i << "  ";
    }

    cout << "\nvector3 = ";

    for (int i : vector3) {
        cout << i << "  ";
    }

    //https://gist.github.com/hzurita/9ac291eb168372459dacfd329ccca7b1    
    
    system("pause");
    return 0;
}