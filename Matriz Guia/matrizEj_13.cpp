#include <iostream>
using namespace std;
#define CANT_DIAS 31


int main () {

 int cantEmpleados=0;

 cout << "Cantidad de empleados a cargar" << endl;
 cin >> cantEmpleados;

 int legajos[cantEmpleados];
 bool presentismo[cantEmpleados][CANT_DIAS];

 for (int i = 0; i < cantEmpleados; i++)
 {
    
    cin >> legajos[i];
    for (int j = 0; j < CANT_DIAS; j++)
    {
        presentismo[i][j];
    } 
    
 }

 int maxAusentes = -1;
 int diaMaxAusentes=0;
 int ausentes=0;

 for (int j = 0; j < CANT_DIAS; j++)
 {
    for (int i = 0; i < cantEmpleados; i++)
    {
        if (presentismo[i][j] == 0)
        {
            ausentes++;
        }
        if (ausentes > maxAusentes)
        {
            maxAusentes = ausentes;
            diaMaxAusentes = j;
        }
        
    
    }
 }

 system("pause");
 return 0;
}

/*
Una empresa carga los datos del presentismo de sus empleados ingresando por cada empleado:
Legajo (entero de 8 dígitos) y por cada día del mes un 1 si se presentó a trabajar o un 0 si faltó.
Para simplificar, todos los empleados trabajan 31 días. Realizar un programa que permita:

a- Cargar los datos de N empleados, siendo N también informado por el usuario
b- Informar los legajos de los tres empleados con mejor presentismo
c- Informar el número del día con mayor ausentismo.
*/