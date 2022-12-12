#include <iostream>
using namespace std;

int suma(int A, int B) {
 int resultado=0;

    resultado=A+B;

 return resultado;
}

int resta(int A, int B) {
 int resultado=0;

    resultado=A-B;

 return resultado;
}

int producto(int A, int B) {
 int resultado=0;

    resultado=A*B;

 return resultado;
}

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

int main () {
  int valorA=0;
  int valorB=0;

 leer("Ingrese un valor entero", valorA);
 leer("Ingrese un valor entero", valorB);
  
  cout << "Suma: " << suma(valorA, valorB) << endl;
  cout << "Resta: " << resta(valorA, valorB) << endl;
  cout << "Producto: " << producto(valorA, valorB) << endl;

 system("pause");
 return 0;
}

// Dados dos valores enteros A y B, informar la suma, la resta y el producto.