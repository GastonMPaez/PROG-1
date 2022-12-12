#include <iostream>
using namespace std;
#define MAX_NRO 5



void buscarMayor(int vec[], int cantidad){
 int nroMayor=0;
 int pos=0;
 
 for (int i = 0; i < cantidad; i++)
 {
    if (vec[i] > nroMayor || nroMayor == 0)
    {
        nroMayor = vec[i];
    }
 }
 
 cout << "Nro Mayor: " << nroMayor << endl;
 cout << "Pos: ";
 for (int i = 0; i < cantidad; i++)
 {
    if (vec[i] == nroMayor)
    {
        cout << i << " ";
    }
 }
}

int main () {
 int vect[MAX_NRO]; // vect[1 5 2 5 2]

 for (int i = 0; i < MAX_NRO; i++)
 {
    cout << "Elem " << i+1 << " de " << MAX_NRO << endl;
    cin >> vect[i];
 }
 
 buscarMayor(vect, MAX_NRO);

 system("pause");
 return 0;
}

/*
24.Dado un arreglo de enteros (Max = 1000) se pide desarrollar:
a) Una rutina que devuelva la posición del elemento mayor en el arreglo. Si el mayor aparece
varias veces devolver la posición de la primera aparición del mismo.

b) Una rutina que devuelva todas las posiciones en que aparece el elemento que es el mayor del
arreglo (no olvide considerar el caso en que todos los elementos sean iguales)
*/