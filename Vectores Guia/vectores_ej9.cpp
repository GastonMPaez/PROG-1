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

void generarVector(int vecA[], int vecB[], int vecC[], int dimension){
    for (int i = 0; i < dimension; i++)
    {
        vecC[i] = vecA[i] + vecB[dimension-(i+1)];
        cout << " " << vecC[i];
    }
 
}


int main () {
 int valor;

 leer("Ingrese un valor entero menor a 40", valor);
 
 int vectorA[valor];
 int vectorB[valor];
 int vectorC[valor];

 cout << "Vector A:" << endl;
 cargarVector(vectorA, valor);

 cout << "Vector B:" << endl;
 cargarVector(vectorB, valor);

 cout << "C[";
 generarVector(vectorA, vectorB, vectorC, valor);
 cout << " ]" << endl;

 system("pause");
 return 0;
}

/*
9. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente
forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]
*/