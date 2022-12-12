#include <iostream>
#include <math.h>
using namespace std;

int sistOctal(int n, int p=0)
{
    const int base = 8;

    if (n == 0)
    {
        return 0;
    }

    return (n % base) * pow(10, p) + sistOctal(n / base, ++p);
}

int main () {
 
    int decimal=0;

   cout << "Ingrese un numero decimal" << endl;
   cin >> decimal;

    cout << "numero decimal: " << decimal << endl;
    cout << "numero octal: " << sistOctal(decimal) << endl;

 system("pause");
 return 0;
}

/*
Desarrolle una función recursiva que permita convertir un número decimal en su equivalente en sistema octal.

Como el sistema de numeración octal usa la notación posicional entonces para el número octal 3452 tenemos que:

38^3 + 48^2 + 58^1 + 28^0 = 3512 + 464 + 40 + 2 = 1536 + 256 + 40 + 2 = 1834 en decimal

768 decimal
768/8 = 96/8 = 12/8 = 1
  0      0      4     1 = 1400 octal
*/