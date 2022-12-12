#include <iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main () {


    cout << factorial(4) << endl;

    system("pause");
    return 0;
}

/*
problema: --n reduce n antes de ser comparada.
solucion: remplazar --n con n-1.
*/