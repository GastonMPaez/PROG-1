#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
 cout << mensaje << endl;
 cin >> valor;
}

void leer(string mensaje, char &valor){
 cout << mensaje << endl;
 cin >> valor;
}

void cargaVector(int vec[], int cantidad){
 
 for (int i = 0; i < cantidad; i++)
 {
    cout << "Ingrese el elemento " << i+1 << " de " << cantidad << endl;
    cin >> vec[i];
 }
}

void invertirArray(int vec[], int vecExtra[], int cantidad){
 
 for(int i=0; i<cantidad; i++) 
 {
     vecExtra[i] = vec[cantidad-(i+1)];
 }
 
}

void imprimirVector(int vec[], int cantidad, char opcion){
 
 switch (opcion)
 {
 case 'a':
    for (int i = 0; i < cantidad; i++)
    {
        cout << vec[i] << endl;
    }
    break;
 case 'b':
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << vec[i] << endl;
        }
        
    }
    break;
 case 'c':
    for (int i = 0; i < cantidad; i++)
    {
        cout << i << " -> " << vec[i] << endl;
    }
    

 }
}

int main () {
    int dimension;
    char opcion;

    leer("Ingrese un valor entero (< 25)", dimension);

    int GG[dimension];
    
    cargaVector(GG, dimension);
    
    int vecInv[dimension];

    invertirArray(GG, vecInv, dimension);
    cout << endl;
    int cantXLinea=0;

    //leer("Seleccione la forma de impresion: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación", opcion);

    for (int i = 0; i < dimension; i++)
    {
        cout << vecInv[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < dimension; i++)
    {
        cout << vecInv[i] << " ";
        cantXLinea++;
        if (cantXLinea % 10 == 0)
        {
            cout << endl;
            cantXLinea=0;
        }
    }
    cout << endl;

    for (int i = 0; i < dimension; i++)
    {
        cout << i << " -> " << vecInv[i] << " / ";
        cantXLinea++;        
        if (cantXLinea % 5 == 0)
        {
            cout << endl;
            cantXLinea=0;
        }
    }
    cout << endl;
 
 system("pause");
 return 0;
}

/*
8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación
*/