#include <iostream>
using namespace std;

float funcionCollatz(int numero)
{
    cout << numero << " ";

    if (numero == 1)
    {
        return 1;
    }
    
    if (numero % 2 == 0)
    {
       return funcionCollatz(numero/2);
    }else
    {
        return funcionCollatz((numero*3)+1);
    }    
}


int main () {
 
 int nro=0;

 cout << "Ingrese un numero entero" << endl;
 cin >> nro;

 funcionCollatz(nro);
 

 system("pause");
 return 0;
}

/*
* Si el número es par, se lo divide por dos;
* Si es impar, se le multiplica tres y se le suma uno;
* La sucesión termina al llegar a uno.

Ejemplo Para n = 18, la conjetura de Collatz sería:
18 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

*/