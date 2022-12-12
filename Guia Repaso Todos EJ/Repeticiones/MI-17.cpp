#include <iostream>
using namespace std;

void leer(string msj, float &valor){
    cout<<msj<<endl;
    cin>>valor;
}

int main () {
 
 float sueldo=0;
 
 int contadorA=0;
 int contadorC=0;
 int contadorB=0;
 int contadorD=0;

 leer("Sueldo: ", sueldo);

 while (sueldo != 0)
 {
    if (sueldo < 1520)
    {
        contadorA++;
    } else if (sueldo >= 1520 && sueldo < 2780)
    {
        contadorB++;
    } else if (sueldo >= 2780 && sueldo < 5999)
    {
        contadorC++;
    } else {
        contadorD++;
    }

    leer("Sueldo: ", sueldo);
 }
 
 cout << "A) " << contadorA << endl;
 cout << "B) " << contadorB << endl;
 cout << "C) " << contadorC << endl;
 cout << "D) " << contadorD << endl;


 system("pause");
 return 0;
}

/*
Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/