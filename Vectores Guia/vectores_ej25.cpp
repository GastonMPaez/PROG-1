#include <iostream>
using namespace std;
#define MAX_NRO 10

void ordenarAscendente(int vec[], int cantidad){

    int i, j, aux;
    i = 0;
    bool ordenado = false;
    
    while (i < cantidad && !ordenado) {
        ordenado = true;

        for (j = 0; j < cantidad-i-1; j++) {
            if (vec[j] > vec[j+1]) {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
    cout << endl;
}

void imprimirVect(int vec[], int cant){
 for (int i = 0; i < cant; i++)
 {
    cout << vec[i] << endl;
 }
}

void bSecuencial(int matrizA[], int n, int dato){
    int i=0;
    char band = 'F';
    
    while ((band == 'F') && (i < n))
    {
        if (matrizA[i] == dato)
        {
            band = 'V';
        }
        i++;
    }

    if (band == 'F')
    {
        cout << "El numero deseado no existe" << endl;
    }
    else if (band == 'V')
    {
      cout << "El numero: " << dato << " se encuenta en la posicion: " << i-1 << endl;
    }
}

void bBinaria(int matrizA[], int n, int dato){
    int inferior = 0;
    int superior = n;
    int mitad = 0;
    char band= 'F';
    
    while ((inferior+1) !=superior)
    {
       mitad = (inferior + superior)/2;
       
       if (matrizA[mitad] == dato)
       {
           band= 'V';
           break;
       }

       if (matrizA[mitad] > dato)
       {
           superior = mitad;
           mitad = (inferior+superior)/2;
       }

       if (matrizA[mitad] < dato)
       {
           inferior = mitad;
           mitad = (inferior+superior)/2;
       }
    }
    
    if (band == 'V')
    {
        cout << "El numero " << dato << " se encuenta en la posicion " << mitad << endl;
    }
    else{
        cout << "El numero no existe en el vector." << endl;
    }
}


int main () {
 int vect[MAX_NRO];
 int dato=0;

 for (int i = 0; i < MAX_NRO; i++)
 {
    cout << "Elem " << i+1 << " de " << MAX_NRO << endl;
    cin >> vect[i];
 }

 ordenarAscendente(vect, MAX_NRO);
 imprimirVect(vect, MAX_NRO);

 cout << "Ingrese el valor que desa buscar" << endl;
 cin >> dato;

 cout << "------------------------------------" << endl;
 cout << "Busqueda Secuencial" << endl;
 bSecuencial(vect, MAX_NRO, dato);

 cout << endl << endl;

 cout << "------------------------------------" << endl;
 cout << "Busqueda Binaria" << endl;
 bBinaria(vect, MAX_NRO, dato);

 system("pause");
 return 0;
}

/*
25. Dado un veceglo de enteros (Max = 1000) ordenado en forma ascendente y otro entero (DATO)
se pide desvecollar:

a) Una rutina que indique si DATO es o no elemento del veceglo y si lo es devuelva la posición de 
la primera aparición del mismo (Búsqueda Secuencial en veceglo Ordenado)

b) Una rutina que indique si DATO es o no elemento del veceglo y si lo es devuelva su posición
(Búsqueda Binaria o Dicotómica)
*/