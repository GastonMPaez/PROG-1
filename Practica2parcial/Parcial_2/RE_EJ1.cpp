#include <iostream>
using namespace std;
#define MAX_CABANIAS 5
#define MAX_DIAS 5


void cargaOcupacion(int complejo[][MAX_DIAS]){

    for (int i = 0; i < MAX_CABANIAS; i++)
    {
        for (int j = 0; j < MAX_DIAS; j++)
        {
            cout << "cabania: " << i+1 << " dia: " << j+1 << endl;
            cout << "Ingrese 1 si la cabania se reservo o 0 si no se reservo para el dia" << endl;
            cin >> complejo[i][j];
        }
    }

}

int main () {

 int complejo[MAX_CABANIAS][MAX_DIAS];
 cargaOcupacion(complejo);

 system("pause");
 return 0;
}

/*

Hacer el programa que le permita al dueño de las cabañas
○ Cargar la ocupación del mes indicando para cada día si la cabaña estuvo o no ocupada.
○ Con la planilla ya cargada saber qué cabaña tuvo la menor ocupación en el mes.
○ Informar la fecha con mayor cantidad de cabañas ocupadas en simultáneo en un día

*/