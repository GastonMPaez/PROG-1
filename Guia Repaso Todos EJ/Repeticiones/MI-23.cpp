#include <iostream>
using namespace std;



int main () {
 

 int valor=0;

 int maxNeg, minPos = 0;

 cout << "Ingrese un valor " << endl;
 cin >> valor;
 
 while (valor != 0)
 {
    if (valor < maxNeg)
    {
        maxNeg = valor;
    }
    




    cout << "Ingrese un valor " << endl;
    cin >> valor;   
 }
 
 system("pause");
 return 0;
}

/*
Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.
*/