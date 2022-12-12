#include <iostream>
using namespace std;
#define HORAS_MAX 9
#define PACIENTES_MAX 5

struct Insomne
{
    int nroPaciente;
    int hrsDormidasTotales;
    int hrsDormidasCorridas;
};

int calcularHS(int hora) {
    hora = hora + 22;
    if (hora > 23)
    {
        hora = hora - 24;
    }
    return hora;    
}

void cargarPlanillaXHora(int planilla[][HORAS_MAX], int cantPacientes) {
    
    for (int j = 0; j < HORAS_MAX; j++)
    {
        cout << "Cargando resultados para la hora " << calcularHS(j) << ":00 hrs" << endl;

        for (int i = 0; i < PACIENTES_MAX; i++)
        {
            cout << "Paciente " << i+1 << ": ";
            cin >> planilla[i][j];
        }
    }
}

void procesarPlanilla(int planilla[][HORAS_MAX], int cantPacientes, Insomne insomnes[], int &cantInsomnes) {
    
    for (int i = 0; i < cantPacientes; i++)
    {
        int j=0, hrsTotales=0, hrsCorridasTotales=0;

        while (j < HORAS_MAX)
        {
            int hrsCorridas=0;
            while (j < HORAS_MAX && planilla[i][j] == 1)
            {
                hrsCorridas++;
                j++;
            }

            hrsTotales += hrsCorridas;
            
            if (hrsCorridas > 1)
            {
                hrsCorridasTotales += hrsCorridas;
            }
            j++;
        }

        if (hrsCorridasTotales < 6)
        {
            cout << "El paciente " << i+1 << " no logro dormir 6 o mas hs de corrido" << endl;
            insomnes[cantInsomnes].nroPaciente = i+1;
            insomnes[cantInsomnes].hrsDormidasCorridas = hrsCorridasTotales;
            insomnes[cantInsomnes].hrsDormidasTotales = hrsTotales;
            cantInsomnes++;
        }
    }
    int horaMasDespues=-1, minDormidos = 99;
}

void imprimir(Insomne insomnes[], int cant){
    cout << "Insomnes: " << endl;
    cout << "¨PACIENTE\t\tHRS CORRIDAS\t\tHRS TOTALES" << endl;

    for (int i = 0; i < cant; i++)
    {
        cout << insomnes[i].nroPaciente << "\t\t\t" <<
        insomnes[i].hrsDormidasCorridas << "\t\t\t" <<
        insomnes[i].hrsDormidasTotales << endl;
    }
    return;
}

int main () {
    int estudio[PACIENTES_MAX][HORAS_MAX] = {
        {0,0,0,1,1,0,1,1,0},
        {1,1,0,1,1,0,1,1,1},
        {1,1,0,1,1,1,1,1,0},
        {0,0,0,1,1,1,1,1,1},
        {0,0,1,1,1,0,0,1,1}
    };
 
    int cantInsomnes=0;
    Insomne insomnes[PACIENTES_MAX];
    procesarPlanilla(estudio, PACIENTES_MAX, insomnes, cantInsomnes);

    imprimir(insomnes, cantInsomnes);

 system("pause");
 return 0;
}
