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

void funcionImprimir (int vec[], int cantidad) {
 int valorFinal=cantidad;

 if (vec[valorFinal - 1] < 10)
 {
    cout << "Valores negativos: " << endl;
    for (int i = 0; i < cantidad; i++)
    {
        if (vec[i] < 0)
        {
            cout << vec[i] << ". ";
        }
        
    }
    
 } else{
    
    cout << "Valores positivos: " << endl;
    for (int i = 0; i < cantidad; i++)
    {
        if (vec[i] >= 0)
        {
            cout << vec[i] << ". ";
        }
    }
 }
}

int main () {
 int valorN=0;
 
 leer("Ingrese un valor entero N (< 30)", valorN);

 int vec[valorN];

 llenar(vec, valorN);
 funcionImprimir(vec, valorN); 


 system("pause");
 return 0;
}

/*
2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos.
Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.
*/