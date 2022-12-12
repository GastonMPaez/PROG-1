#include <iostream>
using namespace std;

int fiboRecur(int num) {
    if (num == 0)
    {
       return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    return fiboRecur(num-1) + fiboRecur(num-2);
       
}

int main () {
 
// int nro=0;

// cout << "Ingrese el nro" << endl;
// cin >> nro;

 int nro=5;

 for (int i = 0; i < nro; i++)
 {
    cout << fiboRecur(i) << " ";
 }
 
 system ("pause");
 return 0;
}


/*

Desarrolle una función recursiva que permita obtener la serie de Fibonacci a un determinado término.

Ejemplo: Para N = 5, la serie de Fibonacci será 0 , 1 , 1 , 2 , 3

*/