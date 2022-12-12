#include <iostream>
using namespace std;

void imprimir(int vec[], int cant){
 for (int i = 0; i < cant; i++)
 {
    cout << vec[i] << " ";
 }
}

void apareoVec(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC, int vecD[]){
    int i,j=0;
    int cantD=0;

    cantC=0;

    while (i < cantA)
    {
        if (vecA[i] != 0)
        {
            vecD[cantD] = vecA[i];
            cantD++;
        }
        
        vecC[cantC] = vecA[i];
        cantC++;
        i++;
    }
    
    while (j < cantB)
    {
        if (vecB[j] != 0)
        {
            vecD[cantD] = vecA[i];
            cantD++;
        }
        
        vecC[cantC] = vecB[j];
        cantC++;
        j++;
    }
 imprimir(vecC, cantC);
 cout << endl;
 imprimir(vecD, cantD);
}



int main () {
 int dimA=0;
 int dimB=0;

 cout << "Ingrese la dimension del conjunto A" << endl;
 cin >> dimA;

 cout << "Ingrese la dimension del conjunto B" << endl;
 cin >> dimB;

 int conjuntoA[dimA];
 int conjuntoB[dimB];

 int dimC = dimA + dimB;
 int conjuntoC[dimC];
 int conjuntoD[dimC];
 
 apareoVec(conjuntoA, dimA, conjuntoB, dimB, conjuntoC, dimC, conjuntoD);
 

 system("pause");
 return 0;
}