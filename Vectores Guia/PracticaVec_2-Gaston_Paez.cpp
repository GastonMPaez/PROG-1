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

int sacarFactorial(int num){
 int factorial = num;
 
 if(factorial == 0)
 {
    factorial = 1;
 }else{
    for(int i = num - 1; i > 0; i--)
    {
        factorial *= i;
    }
}
    return factorial;
}

void cargaFacto(int vec[], int fac[], int cantidad){
    
    for (int i = 0; i < cantidad; i++)
    {
        fac[i] = sacarFactorial(vec[i]);
    }
    
}


int main () {
    int valorN=0;
    
    leer("Ingrese un valor entero (< 20)", valorN);

    int vec[valorN];
    int fac[valorN];

    llenar(vec, valorN);
    cargaFacto(vec, fac, valorN);

    cout << "___________________________________" << endl;

    cout << "Vector Inicial" << "  " << "Vector factorial" << endl;

    for (int i = 0; i < valorN; i++)
    {
        cout << vec[i] << " \t\t " << fac[i] << endl;
    }
    
    cout << "___________________________________" << endl;
    
 
 system("pause");
 return 0;
}

/*
3. Ingresar un valor entero N (< 20).
A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homólogo de VEC.
Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón
*/