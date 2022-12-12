#include <iostream>
using namespace std;

int main () {
 
 //Inicializar variables

 float valor=0;
 
 float maxNeg=0;
 float minPos=0;
 float rango=0;

 float promedio=0;
 float sumaNum=0;

 int contador=0;


 //Pido valores

 cout << "Ingrese un valor (0 para terminar)" << endl;
 cin >> valor;

 
 while (valor != 0)
 {

    contador = contador+1;
    sumaNum = sumaNum + valor;


    // Definir Maximos y Minimos

    if (valor < 0)
    {
       if (maxNeg == 0 || valor > maxNeg)
       {
           maxNeg = valor;
       }
    }

    if (valor > 0)
    {
       if (minPos == 0 || valor < minPos)
       {
           minPos = valor;
       }
    }
    
    if (valor > -17.3 && valor < 26.9)
    {
        if (rango==0 || valor < rango)
        {
            rango = valor;
        }
        
    }
    

   

    cout << "Ingrese un valor (0 para terminar)" << endl;
    cin >> valor;
 }

 promedio = sumaNum / contador;

 // Impresion en pantalla
 
 cout << "A. " << "Valor Maximo Negativo: " << maxNeg << endl;
 cout << "B. " << "Valor Minimo Positivo: " << minPos << endl;
 cout << "C. " << "Valor minimo dentro del rango -17.3 y 26.9: " << rango << endl;
 cout << "D. " << "Promedio Total: " << promedio;

 system("pause");
 return 0;
}


/*

Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.

*/