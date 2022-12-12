
#include <iostream>

using namespace std;

int main () {
    int cantVector1 = 0;
    int cantVector2 = 0;

    cout << "Ingrese la cantidad de numeros del vector 1: ";
    cin >> cantVector1;
    cout << endl;
    int v1[cantVector1];

    cout << "Ingrese la cantidad de numeros del vector 2: ";
    cin >> cantVector2;
    cout << endl;
    int v2[cantVector2];

    if (cantVector1 != cantVector2){
        // termina el programa
        return 1;
    }

    for (int i = 0; i < cantVector1; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v1[i];
        cout << endl;
    }

    for (int i = 0; i < cantVector1; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v2[i];
        cout << endl;
    }

    int s[cantVector1];
    int d[cantVector1];

    int i = 0;
    while (i < cantVector2)
    {
        s[i] = v1[i] + v2[cantVector2-1-i];
        i++;
    }

    cout << "Resultado 1: " << endl;
    for (int h = 0; h < cantVector1; h++)
    {
        cout << s[h] << endl;
    }
    
    int j = 0;
    while (j < cantVector2)
    {
        d[j] = v1[j] - v2[j];
        j++;
    }
    
    cout << "Resultado 2: " << endl;
    for (int h = 0; h < cantVector1; h++)
    {
        cout << d[h] << endl;
    }

    int p[cantVector1] = {0};
    for (int k = 0; k < cantVector1; k++)
    {
        p[k] = p[k] + (v1[k] * v2[k]);
    }

    cout << "Resultado del producto escalar: " << endl;
    for (int h = 0; h < cantVector1; h++)
    {
        cout << p[h] << endl;
    }

        
    return 0;
}

/*
Un programador se encuentra trabajando en un proyecto en el cuál le solicitan que desarrolle una aplicación que permita realizar sumas, restas y producto escalar de vectores. 
El programador liberó el código del programa que se adjunta en el archivo ejercicio1.cpp.

A partir del código dado, se pide:

Mejore el código aplicando modularización, nombre descriptivos, defines, etc. Debe encontrar como mínimo 5 funciones/procedimientos.

Responda: ¿Por qué el vector "p" necesita ser inicializado y los vectores "s" y "d" no?

*/
