#include <iostream>
using namespace std;

// 1-
struct FICHADA_MES
{
    int legajo;
    int fecha;
    int hsEntrada;
    int hsSalida;
};

struct FICHADA_DIARIA
{
    int fecha;
    int legajo;
    int hora;
    char evento; // 'E' -> entrada  'S' -> salida
};


//2-
void ordenXLegajo(FICHADA_DIARIA dia[], int cantDia) {

}

FICHADA_MES obtenerFicha(FICHADA_DIARIA empleado, FICHADA_DIARIA otroEmpleado){

}

//apareo
void procedimiento(FICHADA_MES mes[], int cantMes, FICHADA_DIARIA dia[], int cantDia, FICHADA_MES act[], int &cantAct){
    ordenXLegajo(dia, cantDia);
   
    int i, j = 0;

    cantAct=0;

    while (i < cantMes && j < (cantDia -1))
    {
        if (mes[i].legajo <= dia[i].legajo)
        {
            act[cantAct] = mes[i];
            i++;
        } else {
            act[cantAct] = obtenerFicha(dia[j], dia[j+1]);
            j+2;
        }
        cantAct++;
    }
    
    while (i < cantMes)
    {
        act[cantAct] = mes[i];
        cantAct++;
        i++;
    }
    
    while (j < (cantDia -1))
    {
        act[cantAct] = obtenerFicha(dia[j], dia[j+1]);
        cantAct++;
        j+2;
    }
    return;
}


int main () {
 

 return 0;
}