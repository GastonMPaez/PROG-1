#include <iostream>
using namespace std;

struct FICHADA_MES
{
    int legajo;
    int fecha;
    int hsEntrada;
    int hsSalida;
};

float calcularHoras(int horaSalida, int horaEntrada){
    int minutosSalida = (horaSalida / 100) * 60 + horaSalida % 100;
    int minutosEntrada = (horaEntrada / 100) * 60 + horaEntrada % 100;
    return (minutosSalida-minutosEntrada) / 60;
}

void imprimirFecha(int fechaAAAAMMDD) {
    cout << fechaAAAAMMDD % 100 << "/" << (fechaAAAAMMDD % 10000) / 100 << "/" << fechaAAAAMMDD / 10000;
    return;
}

void corteControl(FICHADA_MES fichaMes[], int cantMes, float valorHora) {
    int i=0;
    int cantEmpleados=0;
    float remuneracionTot=0;

    while (i < cantMes)
    {
        int key = fichaMes[i].legajo;
        cout << "Legajo: " << key << endl;
        cout << "FECHA:\t\tHORAS TRABAJADAS\t\tJORNAL" << endl;
        float remuneracion = 0;

        while (i < cantMes && key == fichaMes[i].legajo)
        {
            float horas = calcularHoras(fichaMes[i].hsSalida, fichaMes[i].hsEntrada);
            imprimirFecha(fichaMes[i].fecha);
            cout << "\t\t";
            cout << horas << "\t\t\t";
            cout << horas * valorHora << endl;
            remuneracion = remuneracion + horas * valorHora;
            i++;
        }
        cantEmpleados++;
        remuneracionTot = remuneracionTot + remuneracion;
        cout << "REMUNERACION: " << remuneracion << endl << endl;
    }
    cout << "CANTIDAD EMPLEADOS: " << cantEmpleados << endl;
    cout << "TOTAL REMUNERACIONES: $" << remuneracionTot << endl;
    cout << "REMUNERACION PROMEDIO: $" << remuneracionTot / cantEmpleados << endl;
    return;
    
}

int main () {
 
    FICHADA_MES fichaMes[] = {
        {1,20220706,800,1800}, 
        {1,20220705,815,1800},
        {1,20220704,800,1800}, 
        {2,20220705,815,1800},
        {3,20220706,800,1800}, 
        {3,20220705,815,1800},
        {6,20220703,900,1800},
    };

    float valorHora = 500;
    cout << "FICHADAS DEL MES" << endl;
    corteControl(fichaMes, 7, valorHora);
    cout << endl;

 system("pause");
 return 0;
}