#include <iostream>
using namespace std;
#define MAX_DIAS 31

struct Presentismo
{
    int legajo;
};


void cargarListado(Presentismo empleado[], int cantidad, int maxDias){
    
    int asistencia[cantidad];

    int diasPresente=0;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el legajo" << endl;
        cin >> empleado[i].legajo;
        
        for (int j = 0; j < maxDias; j++)
        {
            int presente=0;
            cout << "Asistencia del dia " << j+1 << " 1 - se presento / 0 - falto" << endl;
            cin >> presente;
        }
        
    }
    
    
}


int main () {
 int cantidadEmpleados=0;

 cout << "Ingrese la cantidad de empleados a cargar" << endl;
 cin >> cantidadEmpleados;

 Presentismo empleado[cantidadEmpleados];


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