#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void cargarArr(int arr[], int n){

 for (int i = 0; i < n; i++)
 {
    leer ("Ingrese un valor", arr[i]);
 }
}


// a) b)
int buscarDato(int arr[], int n, int dato){
 
 for (int i = 0; i < n; i++)
 {
    if(arr[i] == dato) {
        return i;
    }
 }
    return -1;
}
//c) d)
int mostrarTodasPosDato(int arr[], int n, int dato) {
    
    int primeraPos = -1;
    int ultimaPos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == dato)
        {
            if (primeraPos == -1)
            {
                primeraPos = i;
            }

            cout << i << endl;

            ultimaPos = i;
        }
        
    }
    cout << "Primera pos que aparece el numero: " << primeraPos << endl;
    cout << "Ultima pos que aparece el numero: " << ultimaPos << endl;
}

int main () {
 int dato=0;
 
 int cantNum=0;

 leer("Ingrese la cantidad de valores (max. 1000)", cantNum);

 int arr[cantNum];
 //     0    1   2   3   4   5   6    7
 // arr[2   9   10  55   3   55  9   55]

 cargarArr(arr, cantNum);

 leer("Ingrese el DATO que desea buscar:", dato);

 buscarDato(arr, cantNum, dato);

 int posDato = buscarDato(arr, cantNum, dato);

 if(posDato >= 0)
 {
    cout << "Esta en el conjunto en la posicion " << posDato  << endl;
    cout << endl;
    cout << "Todas las posiciones del dato: " << endl;
    mostrarTodasPosDato(arr, cantNum , dato);
 } else {
    cout << "El dato no esta en el conjunto" << endl;
 }

 system("pause");
 return 0;
}
