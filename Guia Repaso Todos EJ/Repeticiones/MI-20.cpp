#include <iostream>
using namespace std;

int main () {
 int valor=0;
 int valorMax=0;


 for (int i = 0; i < 10; i++)
 {
    cout << "Ingrese un valor" << endl;
    cin >> valor;

    if (valor > valorMax)
    {
        valorMax = valor;
    }
    
 }
 
 cout << "Valor Maximo: " << valorMax << endl;


 system("pause");
 return 0;
}

//Dados 10 valores informar el mayor