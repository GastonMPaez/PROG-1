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


void determinarMayor(int vec[], int cantidad){
    int valorMax=0;
    int posMax=0;
    
    int otrosVal=0;

    for (int i = 0; i < cantidad; i++)
    {
        if (vec[i] > valorMax)
        {
            valorMax = vec[i];
            posMax = i;
        }

        if (vec[i] == valorMax)
        {
            otrosVal++;
        }        
    }

     
    cout << "valor Max: " << valorMax << endl;
    
    if (otrosVal == 0)
    {
        cout << "pos: " << posMax << endl;
    }   
    
}

int main () {
 int dimension;

 leer("Ingrese un valor entero (< 30)", dimension);

 int valor[dimension];

 cargaVector(valor, dimension);

 determinarMayor(valor, dimension);


 system("pause");
 return 0;
}

/*
6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra.
*/