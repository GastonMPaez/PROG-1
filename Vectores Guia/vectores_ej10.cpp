#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
 cout << mensaje << endl;
 cin >> valor;
}

void cargarVector(int vec[], int dimension){
 for (int i = 0; i < dimension; i++)
 {
    cout << "Pos " << i << " de " << dimension-1 << endl;
    cin >> vec[i];
 }
}

void unirVectores(int vecA[], int vecB[], int vecC[], int dimensionM, int dimensionN, int dimensionD){
    
}

void imprimirVector(int vec[], int dimension){
    for (int i = 0; i < dimension; i++)
    {
        cout << vec[i];
        cout << " " <<endl;
    }
    
}

int main () {
 int longitudM;
 int longitudN;

 int contadorA=0;
 int contadorB=0;

 leer("Ingrese valor de M (< 10)", longitudM);
 leer("Ingrese valor de N (< 15)", longitudN);
 
 int longitudC= longitudM + longitudN;


 int vectorA[longitudM];
 int vectorB[longitudN];

 cout << "Vector A:" << endl;
 cargarVector(vectorA, longitudM);

 cout << "Vector B:" << endl;
 cargarVector(vectorB, longitudN);

 int vectorC[longitudC];

 //a)
 imprimirVector(vectorC, longitudC);

 //b)
 for (int i = 0; i < longitudM; i++)
 {
     if (vectorA[i] != 0)
     {
        contadorA++;
     }
 }

 for (int i = 0; i < longitudN; i++)
 {
    if (vectorB[i] != 0)
    {
        contadorB++;
    }
 }
 
 int longitudD = contadorA+contadorB;

 int vectorD[longitudD];

 unirVectores(vectorA, vectorB, vectorD, longitudM);

 imprimirVector(vectorD, longitudD);
 

 system("pause");
 return 0;
}

/*
10. Ingresar dos valores enteros M (< 10) y N (< 15). A continuación ingresar un conjunto A de M
elementos y luego otro B de N elementos. Generar e imprimir:
a) Un conjunto C resultante de la anexión de A y B.
b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B.
*/