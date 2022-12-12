#include <iostream>
using namespace std;

void cargarVector(int vec[], int n){
 for (int i = 0; i < n; i++)
 {
    cout << "Valor " << i+1 << endl;
    cin >> vec[i];
 }
}

void imprimir(int vec[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}


void ordenarAscendente(int vec[], int cantidad){
    int i, j, aux;
    i=0;
    bool ordenado = false;

    while (i < cantidad && !ordenado)
    {
        ordenado = true;
        for (j = 0; i < cantidad-i-1; j++)
        {
            if (vec[j] > vec[j+1])
            {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
                ordenado=false;
            }
        }
        i++;
        
    }
    
}

void apareoVector(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC){
    int i=0;
    int j=0;

    cantC=0;

   // ordenarAscendente(vecA, cantA);
   // ordenarAscendente(vecB, cantB);

    while (i < cantA && j < cantB)
    {
        if (vecA[i] = vecB[j])
        {
            vecC[cantC] = vecA[i];
            i++;
            j++;
            cantC++;
        } 
        else if (vecA[i] < vecB[j])
        {
            vecC[cantC] = vecA[i];
            i++;
            cantC++;
        }
        else
        {
            vecC[cantC] = vecB[j];
            j++;
            cantC++;
        }
    }

    while (i < cantA)
    {
        vecC[cantC] = vecA[i];
        i++;
        cantC++;
    }
    
    while (j < cantB)
    {
        vecC[cantC] = vecB[j];
        j++;
        cantC++;
    }    

    cout << "VECTOR C" << endl;
    imprimir(vecC, cantC);

}

int main () {
 
 int valorM=0;
 int valorN=0;
 int valorT=0;

 cout << "Ingrese un valor M" << endl;
 cin >> valorM;

 cout << "Ingrese un valor N" << endl;
 cin >> valorN;

 valorT = (valorM+valorN);

 int vecA[valorM];
 int vecB[valorN];
 int total[valorT];

 cout << "Conjunto A" << endl;
 cargarVector(vecA, valorM);
 
 cout << "Conjunto B" << endl; 
 cargarVector(vecB, valorN);
 
 apareoVector(vecA, valorM, vecB, valorN, total, valorT);


 system("pause");
 return 0;
}