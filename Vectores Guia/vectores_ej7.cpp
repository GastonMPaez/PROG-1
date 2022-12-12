#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void cargaVector(int vec[], int cantidad){
 
 for (int i = 0; i < cantidad; i++)
 {
    cout << "Ingrese el elemento " << i+1 << " de " << cantidad << endl;
    cin >> vec[i];
 }
}


int main () {
 int dimension;

 leer("Ingrese un valro entero (< 30)", dimension);

 int dato[dimension];

 cargaVector(dato, dimension);

 int mejorDato[2];
 if(dato[0] > dato[1]) {
    mejorDato[0] = dato[0];
    mejorDato[1] = dato[1];
 } else {
     mejorDato[0] = dato[1];
     mejorDato[1] = dato[0];
 }

 for (int i = 2; i < dimension; i++)
 {
    if (dato[i] > mejorDato[0])
    {
        mejorDato[1] = mejorDato[0];
        mejorDato[0] = dato[i];
    }else if (dato[i] > mejorDato[1])
    {
        mejorDato[1] = dato[i];
    }   
 }
 
 for (int i = 0; i < 2; i++)
 {
    cout << i+1 << " -> " << mejorDato[i] << endl;
 }
 
 system("pause");
 return 0;
}

/*
7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.
*/