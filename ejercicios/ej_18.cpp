#include <iostream>
using namespace std;

int main () {
 
    int valorM=0;
    int nro=0;
    int contador=0;

    cout << "Ingrese la cantidad de numeros que desea obtener multiplos de 3 que no lo sean de 5" << endl;
    cin >> valorM;

    cout << "---------------------------" << endl;

    while (contador < valorM)
    {
        if ((nro%3==0) & (nro%5 !=0))
        {
            cout << nro << endl;
            contador++;
        }
        
        nro++;
    }
    


 system ("pause");
 return 0;
}

/*

Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.

*/