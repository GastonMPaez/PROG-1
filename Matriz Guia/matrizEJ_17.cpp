#include <iostream>
using namespace std;
#define MAX_FILAS 30
#define MAX_COLS 25


void leer(string mensaje, int &valor){
 cout << mensaje << endl;
 cin >> valor;
}

void cargarMatriz(int matriz[][MAX_COLS], int filas, int columnas){
 for (int i = 0; i < filas; i++)
 {
    for (int j = 0; j < columnas; j++)
    {
        cout << "Ingerse el valor para la posicion (" << i << "," << j << "):";
        cin >> matriz[i][j]; 
    }
 }
}

int main () {
 int filasM;
 int columnasN;
 int matrizA[MAX_FILAS][MAX_COLS];

 leer("Ingrese numero de filas (< 30)", filasM);
 leer("Ingrese numero de columnas (< 25)", columnasN);
 
 cargarMatriz(matrizA, filasM, columnasN);

 //--------------------A-------------------------
 for (int j = 0; j < columnasN; j++)
 {
    for (int i = 0; i < filasM; i++)
    {
        cout << matrizA[i][j]<< "\t";
    }
    cout << endl;
 }
 cout << endl;

 //--------------------B-------------------------
 int suma=0;
 for (int i = 0; i < filasM; i++)
 {
    for (int j = 0; j < columnasN; j++)
    {
        suma += matrizA[i][j];
    }
 }
 cout << "Promedio de los componentes: " << suma / (filasM*columnasN) << endl;

 //--------------------C-------------------------
 int vecSumCol[columnasN];
 
 for (int j = 0; j < columnasN; j++)
 {
    for (int i = 0; i < filasM; i++)
    {
        vecSumCol[j] += matrizA[i][j];
    }
 }
 
 for(int i = 0; i < columnasN; i++)
 {
    cout << vecSumCol[i] << "\t";
 }
 cout << endl;

 //--------------------D-------------------------
 int vecMaxFil[filasM];

 for (int i = 0; i < filasM; i++)
 {
    vecMaxFil[i] = matrizA[i][0];
    for (int j = 1; j < columnasN; j++)
    {
        if(matrizA[i][j] > vecMaxFil[i])
        {
            vecMaxFil[i] = matrizA[i][j];
        }
    }
 }

 for (int i = 0; i < filasM; i++)
 {
    cout << "Maximo de la fila " << i << ": " << vecMaxFil[i] << endl;
 }



 system("pause");
 return 0;
}


/*
17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:

a) Imprima la matriz MATRIZA por columnas.

b) Calcule e imprima el valor promedio de los componentes de la matriz.

c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna homóloga.

d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila.
*/