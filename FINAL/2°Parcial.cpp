#include <iostream>
using namespace std;

struct FICHADA
{
    int legajo;
    int fecha;
    int hsEntrada;
    int hsSalida;
}; //ord. legajo empleado

struct REGISTRO
{
    int fecha;
    int legajo;
    int hora;
    char evento;
}; // ord. hs

void ordenarXLegajo(REGISTRO arr[], int cantidad){
    int i, j=0;
    REGISTRO aux;
    bool ordenado = false;

    while (i < cantidad && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (arr[j].legajo > arr[j+1].legajo)
            {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
    return;
}

FICHADA obtenerFichadaDiaria(REGISTRO fichaEmpleado, REGISTRO fichaOtroEmpleado){
    FICHADA fichada;

    fichada.fecha = fichaEmpleado.fecha;
    fichada.legajo = fichaEmpleado.legajo;

    if (fichaEmpleado.evento == 'E')
    {
        fichada.hsEntrada = fichaEmpleado.hora;
        fichada.hsSalida = fichaOtroEmpleado.hora;
    } else {
        fichada.hsEntrada = fichaOtroEmpleado.hora;
        fichada.hsSalida = fichaEmpleado.hora;
    }
    return fichada;
}

float calcularHS(int hsSalida, int hsEntada){
    int minSalida = (hsSalida / 100) * 60 + hsSalida % 100;
    int minEntrada = (hsEntada / 100) * 60 + hsEntada % 100;
    return (minSalida - minEntrada)/60;
}

void imprimirFecha(int fecha){
    cout << fecha % 100 << "/" << (fecha % 10000) / 100 << "/" << fecha / 10000;
    return;
}

void fichadasActualizadas(FICHADA fichadaMes[], int cantMes, REGISTRO fichadaDiaria[], int cantDiaria, FICHADA fichadaMesAct[], int &cantAct){
    cantAct=0;

    ordenarXLegajo(fichadaDiaria, cantDiaria);

    int i=0;
    int j=0;

    while (i < cantMes && j < (cantDiaria-1))
    {
        if (fichadaMes[i].legajo <= fichadaDiaria[j].legajo)
        {
            fichadaMesAct[cantAct] = fichadaMes[i];
            i++;
        } else {
            fichadaMesAct[cantAct] = obtenerFichadaDiaria(fichadaDiaria[j], fichadaDiaria[j+1]);
            j = j + 2;
        }
        cantAct++;
    }
    
    while (i < cantMes)
    {
        fichadaMesAct[cantAct] = fichadaMes[i];
        cantAct++;
        i++;
    }

    while (j < (cantDiaria-1))
    {
        fichadaMesAct[cantAct] = obtenerFichadaDiaria(fichadaDiaria[j], fichadaDiaria[j+1]);
        cantAct++;
        j = j + 2;
    }
    
}

void imprimirListado(FICHADA fichadaMes[], int cantidad, int valorHora){
    int i = 0;
    int cantEmpleados=0;
    float remuneracionTotal=0;

    while (i < cantidad)
    {
        float remuneracion=0;
        int legajo = fichadaMes[i].legajo;

        cout << "Legajo: " << legajo << endl;
        cout << "\tFECHA\t\tHORAS TRABAJADAS\tJORNAL" << endl;

        while (i < cantidad && legajo == fichadaMes[i].legajo)
        {
            float horas = calcularHS(fichadaMes[i].hsSalida, fichadaMes[i].hsEntrada);
            cout << "\t";
            imprimirFecha(fichadaMes[i].fecha);
            cout << "\t\t" << horas << "\t\t" << horas*valorHora << endl;
            remuneracion += (horas * valorHora);
            i++;
        }
        cantEmpleados++;
        remuneracionTotal += remuneracion;

        cout << "REMUNERACION: " << remuneracion << endl;
        cout << endl;
    }
    cout << endl;
    cout << "CANTIDAD EMPLEADOS: " << cantEmpleados << endl;
    cout << "TOTAL REMUNERACION: $" << remuneracionTotal << endl;
    cout << "REMUNERACION PROMEDIO: $" << remuneracionTotal / cantEmpleados << endl;

}

int main () {
 FICHADA fichada_Mes[]={
    {1,20220706,800,1800}, 
    {1,20220705,815,1800},
    {1,20220704,800,1800}, 
    {2,20220705,815,1800},
    {3,20220706,800,1800}, 
    {3,20220705,815,1800},
    {6,20220703,900,1800},
 };

 REGISTRO fichada_Diaria[]={
    {20220707, 1 , 730, 'E'},
    {20220707,2,740,'E'},
    {20220707,3,810,'E'},
    {20220707,4,930,'E'},
    {20220707,3,1601,'S'},
    {20220707,2,1740,'S'},
    {20220707,1,1810,'S'},
    {20220707,5,1900,'E'},
    {20220707,4,2000,'S'},
    {20220707,5,2330,'S'},
 };

 FICHADA fichada_Act[20];
 int cantAct=0;

 float valorHora=300;

 fichadasActualizadas(fichada_Mes, 7, fichada_Diaria, 10, fichada_Act, cantAct);
 
 imprimirListado(fichada_Mes, 7, valorHora);
 cout << "------------------------" << endl;
 
 imprimirListado(fichada_Act, cantAct, valorHora);



 system("pause");
 return 0;
}