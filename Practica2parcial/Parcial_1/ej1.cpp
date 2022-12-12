#include <iostream>
using namespace std;

int distintos(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC){
 
    int i = 0, j = 0;
    cantC=0;

    while (i < cantA && j < cantB) 
    {
        if (vecA[i] == vecB[j])
        {
            i++;
            j++;
        }
        else
        {
            if (vecA[i] < vecB[i])
            {
                vecC[cantC] = vecA[i];
                i++;
            }
            else
            {        
                vecC[cantC] = vecB[j];
                j++;

            }
            cantC++;     
        }
    }

    //relleno con A
    while(i < cantA) 
    {
        vecC[cantC] = vecA[i];
        i++;
        cantC++;
    }
    
    // relleno con B
    while(j < cantB)
    {
        vecC[cantC] = vecB[j];
        j++;
        cantC++;
    }

}

void imprimir(int vecC[], int c){

    for (int i = 0; i < c; i++)
    {
        cout << vecC[i] << " - ";
    }
    cout << endl;
}

int main () {

 int vecA[] = {0,2,4,9};
 int vecB[] = {1,2,3,5,9};
 int vecC[10];

 int cantC=0;

 distintos(vecA, 4, vecB, 5, vecC, cantC);
 imprimir(vecC, cantC);

 system("pause");
 return 0;
}

/*
Ejemplo: vecA = {0,2,4,9}
         vecB = {1,2,3,5,9}
         vecC = {0,1,3,4,5}
*/
