#include <iostream>
using namespace std;

int main () {
 int n=0;

 int valor=0;
 int mayor=0;
 int menor=0;

 int posMax=0;
 int posMin=0;

 cout << "Ingrese la cant de valroes" << endl;
 cin >> n;

 for (int i = 0; i < n; i++)
 {
    cout << "Ingrese un valor" << endl;
    cin >> valor;

    if (i == 0)
    {
        mayor = valor;
        posMax = i;

        menor = valor;
        posMin = i;
    }
    

    if (valor > mayor)
    {
        mayor = valor;
        posMax = i;
    }

    if (valor < menor)
    {
        menor = valor;
        posMin = i;
    }
    
 }
 
 cout << "Valor mayor: " << mayor << " Posicion: " << posMax << endl;
 cout << "Valor menor: " << menor << " Posicion: " << posMin << endl;
 

 return 0;
}

/*
Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.
*/