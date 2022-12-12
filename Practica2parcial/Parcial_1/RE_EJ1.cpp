#include <iostream>
using namespace std;
#define N 4
#define M 5

void distinto(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC)
{    
    int i=0;
    int j=0;

    while (i < cantA && j < cantB)
    {
        if (vecA[i] == vecB[j])
        {
            i++;
            j++;
        } else{
            if (vecA[i] < vecB[j])
            {
                vecC[cantC] = vecA[i];
                i++;
            } else {
                vecC[cantC] = vecB[j];
                j++;
            }
            cantC++;
        }
        
    }
    

    // Paso todos los elementos restantes de A
    while(i < cantA) {
        vecC[cantC] = vecA[i];
        i++;
        cantC++;
    }

    // Paso todos los elementos restantes de B
    while(j < cantB) {
        vecC[cantC] = vecB[j];
        j++;
        cantC++;
    }

}

void imprimir(int vecC[], int cantC){
    
    for (int i = 0; i < cantC; i++)
    {
        cout << vecC[i] << " ";
    }
    cout << endl;
}

int main () {
 int cantC=0;

 int vecA[N] = {0,2,4,9};
 int vecB[M] = {1,2,3,5,9};
 int vecC[10];

 distinto(vecA, N, vecB, M, vecC, cantC);
 imprimir(vecC, cantC);


 system("pause");
 return 0;
}