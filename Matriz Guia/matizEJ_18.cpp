#include <iostream>
using namespace std;
#define MAX_FILAS 25
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
 int dimension=0;

 leer("Ingrese la dimension de la matriz (< 25)", dimension);

 int matriz[MAX_FILAS][MAX_COLS];

 cargarMatriz (matriz, dimension, dimension);

 //--------------------A-------------------------
    /*
         1   2   3
    mat  4   5   6
         7   8   9

    diagonalP: 1 - 5 - 9
    diagonalS: 3 - 5 - 7
    */
 int sumatoriaP;
 int sumatoriaS;

 int vecP[dimension];
 int vecS[dimension];


   for (int i = 0; i < dimension; i++)
   {
      for (int j = 0; j < dimension; j++)
      {
        if (i == j)
        {
            sumatoriaP += matriz[i][j];
            vecP[i] = matriz[i][j];
        }
      }
   }

   for (int i = 0; i < dimension; i++)
   {
      for (int j = 0; j < dimension; j++)
      {
        if ((i+j) == (dimension-1))
        {
            sumatoriaS += matriz[i][j];
            vecS[i] = matriz[i][j];
        }
      }
   }

   if (sumatoriaP > sumatoriaS)
   {
       cout << "Diagonal Pin: ";
       for (int i = 0; i < dimension; i++)
       {
           cout << vecP[i] << " ";
       }
   } else {
       cout << "Diagonal Sec: ";
       for (int i = 0; i < dimension; i++)
       {
           cout << vecS[i] << " ";
       }
   }
   cout << endl;
   
 //--------------------B-------------------------


 system("pause");
 return 0;
}

/*
18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y
columnas. Desarrollar un programa que determine e imprima:

a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la sumatoria de elementos.

b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor (considerando que N fuera par).

c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria de elementos.
*/