#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    int divisores=0;

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main () {
 
 int numero, primoAnterior;

 cout << "Ingrese numero" << endl;
 cin >> numero;

 bool ordenado = true;
 bool ascendente = true;

 while (numero != 0)
 {

    if (esPrimo(numero))
    {
        if (numero > primoAnterior && !ascendente)
        {
            ordenado = false;
        }
        
        if(numero < primoAnterior && ascendente)
        {
            ordenado = false;
        }
        
        primoAnterior = numero;
    }
    

    cout << "Ingrese numero (0 para terminar)" << endl;
    cin >> numero;

 }
 

 system("pause");
 return 0;
}