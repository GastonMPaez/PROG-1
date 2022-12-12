#include <iostream>
using namespace std;
#define MAX_HS 9
#define MAX_PACIENTES 5

struct Insomne
{
    int nroPac;
    int hsDormidas;
    int hsDormidasCorrido;
};

int calcularHS(int hora){
    hora = hora + 22;
    
    if (hora > 23)
    {
        hora = hora - 24;
    }
    
    return hora;
}

void cargarPlanilla(int planilla[][MAX_HS], int cantPacientes){

    for (int j = 0; j < MAX_HS; j++)
    {
        cout << "Ingrese la hora " << calcularHS(j) << ":00 hs" << endl;

        for (int i = 0; i < cantPacientes; i++)
        {
            cout << "Paciente " << i+1 << endl;
            cin >> planilla[i][j];
        }
    }
}

void procesarPlanilla(int planilla[][MAX_HS], int cantPacientes, Insomne insomnes[], int &cantInsomnes){
    
    for (int i = 0; i < cantPacientes; i++)
    {
        int j = 0;
        int hsTotales = 0;
        int hsCorridasTotales = 0;

        while (j < MAX_HS)
        {
            int hsCorridas=0;
        
            while (j < MAX_HS && planilla[i][j] == 1)
            {
                hsCorridas++;
                j++;
            }
            hsTotales += hsCorridas;

            if (hsCorridas > 1)
            {
                hsCorridasTotales += hsCorridas;
            }
            j++;            
        }

        if (hsCorridasTotales < 6)
        {
            cout << "El paciente " << i+1 << " no durmio 6 o mas hs corridas" << endl;
            
            insomnes[cantInsomnes].nroPac = i+1;
            insomnes[cantInsomnes].hsDormidasCorrido = hsCorridasTotales;
            insomnes[cantInsomnes].hsDormidas = hsTotales;
            cantInsomnes++;
        }
    }
    
    int hsMasDespiertos = -1;
    int minDormidos = 99; // valor flag

    for (int j = 0; j < MAX_HS; j++)
    {
        int dormidos=0;
        for (int i = 0; i < cantPacientes; i++)
        {
            dormidos = dormidos + planilla[i][j];
        }
            
        if (dormidos < minDormidos)
        {
            minDormidos = dormidos;
            hsMasDespiertos = j;
        }        
    }
    cout << "La mayor cant de despiertos fue a las " << calcularHS(hsMasDespiertos) << " :00 hs" << endl;
}

void imprimir(Insomne insomnes[], int cant)
{
    cout << "Insomnes: " << endl;
    cout << "PACIENTE\t\tHS CORRIDAS\t\tHS TOTALES" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << insomnes[i].nroPac << "\t\t\t" << insomnes[i].hsDormidasCorrido << "\t\t\t" << insomnes[i].hsDormidas << endl;
    }
}

int main () {
 int estudio [MAX_PACIENTES][MAX_HS] = {0};

 cargarPlanilla(estudio, MAX_PACIENTES);

 int cantInsomnes = 0;
 Insomne insomnes[MAX_PACIENTES];
 procesarPlanilla(estudio, MAX_PACIENTES, insomnes, cantInsomnes);

 imprimir(insomnes, cantInsomnes);
 
 system("pause");
 return 0;
}

/*
 22:00 -- 06:00 ->9hs



*/