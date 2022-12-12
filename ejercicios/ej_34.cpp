#include <iostream>
using namespace std;


 int factorial (int valor) {
    int fact = 1;

    for (int i = 1; i < valor; i++)
    {
        fact = fact * (i + 1);
    }
    

  return fact;
 }

int main () {
 
 int numero=0;

 cout << "ingrese un numero entero positivo" << endl;
 cin >> numero;

 cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;

 
 system("pause");
 return 0;
}


// Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial.