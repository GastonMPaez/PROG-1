#include <iostream>
using namespace std;

int factorial(int val){

    int fac=1;
    for (int i = 1; i <= val ; i++)
    {
        fac = fac*i;
    }
    return fac;
}

int factorialRec(int val){

    if (val <= 1)
    {
        return 1;
    }
    return factorialRec(val - 1) * val;
}

int main () {
 
 cout << factorial(4) << endl;
 cout << factorialRec(5) << endl;

 system("pause");
 return 0;
}