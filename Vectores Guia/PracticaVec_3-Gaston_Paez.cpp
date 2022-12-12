#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void llenar(int vec[], int cantidad){
 for (int i = 0; i < cantidad; i++)
 {
    cout << "Ingrese el elemento " << i+1 << " de " << cantidad << endl;

    cin >> vec[i];
 }

}

int sumaComponentes(int vec[], int cantidad){
 int sumaTotal=0;

 for (int i = 0; i < cantidad; i++)
 {
    sumaTotal += vec[i];
 }
 
 return sumaTotal; 
}

void imprimirImpares(int vec[], int cantidad){
        cout << "Elementos con Indice Impar: ";
        for (int i = 0; i < cantidad; i++)
        {
            if (i % 2 != 0)
            {
                cout << vec[i] << " - ";
            }
        }
}

void imprimirPares(int vec[], int cantidad){
        cout << "Elementos con Indice Par: ";
        for (int i = 0; i < cantidad; i++)
        {
            if (i % 2 == 0)
            {
                cout << vec[i] << " - ";
            } 
        }
}

int main () {
    int valorN=0;
    int suma=0;
    
    leer("Ingrese un valor entero (< 25)", valorN);

    int vec[valorN];

    llenar(vec, valorN);

    suma = sumaComponentes(vec, valorN);
    
    if (suma > 0)
    {
        imprimirImpares(vec, valorN);
    } else 
        imprimirPares(vec, valorN);


 system("pause");
 return 0;
}

/*
4. Ingresar un valor entero N (< 25). 
A continuación ingresar un conjunto VEC de N componentes.
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros elementos.
*/