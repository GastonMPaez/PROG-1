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

void unirVector(int vec1[], int vec2[], int vec3[], int cantidad){
 
 for (int i = 0; i < cantidad; i++)
 {
    if (i % 2 == 0)
    {
        vec3[i] = vec1[i];
    }else{
        vec3[i] = vec2[i];
    }    
 }
}

int main () {
 int valor;
 
 leer("Ingrese un valor entero (< 30)", valor);
 
 int uno[valor] = {0};
 int dos[valor] = {0};
 
 int tres[valor] = {0};

 // cargo los vectores UNO y DOS

 cout << "Vec UNO:" << endl;
 cargaVector(uno, valor);

 cout << "Vec DOS:" << endl;
 cargaVector(dos, valor);

 unirVector(uno, dos, tres, valor);

 // imprimo vector TRES
 
 for (int i = 0; i < valor; i++)
 {
    cout << "Vec TRES[" << tres[i] << " " <<"]";
 }

 system("pause");
 return 0;
}

/*
5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.
*/