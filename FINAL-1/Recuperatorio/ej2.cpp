#include <iostream>
using namespace std;

int interseccion(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC){
    int i=0;
    cantC = 0;

    int j = cantB - 1;

    while (i < cantA && j >= 0)
    {
        if (vecA[i] == vecB[j])
        {
            vecC[cantC] = vecA[i];
            i++;
            j--;
            cantC++;
        }
        
        if (vecA[i] < vecB[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    
}

int main () {
    int vecA[] = {0, 2, 4, 9};
    int vecB[] = {9, 5, 3, 2, 1};
    int vecC[9];

    int cantidad=0;
    interseccion(vecA, 4, vecB, 5, vecC, cantidad);

    for (int i = 0; i < cantidad; i++)
    {
        cout << vecC[i] << " ";
    }
    cout << endl;
    
 system("pause");
 return 0;
}

/*
Realizar diagrama del procedimiento interseccion que dados dos arreglos de entrada
uno de N y otro de M elementos genere un nuevo arreglo de salida sólo con
los elementos comunes a ambos.

Ejemplo: vecA = {0, 2, 4, 9} y vecB = {9, 5, 3, 2, 1) => vecC = {2, 9}

Consideraciones: Ambos arreglos de entrada están ordenados pero uno en forma
ascendente y el otro en forma descendente. Ambos son conjuntos sin elementos repetidos

Restricciones: Sólo se puede recorrer una vez cada vector de entrada
*/