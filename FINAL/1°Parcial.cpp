#include <iostream>
using namespace std;

struct Registro
{
    int hsInicio;
    int hsFin;
    int fecha;
    float monto;
};

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, float &valor){
    cout << mensaje << endl;
    cin >> valor;
}

float duracionViajes(int hsFin, int hsInicio){
    int minSalida = (hsFin / 100) * 60 + hsFin % 100;
    int minEntrada = (hsInicio / 100) * 60 + hsInicio % 100;
    return (minSalida - minEntrada)/60;
}

int sumatoria(int n){
    if (n == 0)
    {
        return 1;
    } else {
        return n + sumatoria(n-1);
    }
    
}

int main () {
 
 Registro viajes;

 int diaMax=0;

 int horaMax=0;

 float duracion=0;
 float duracionMax=0;
 float duracionMaxRecaude=0;
 
 float recaude=0;
 float recaudeMax=0;


 leer("HS Inicio:", viajes.hsInicio);

 while (viajes.hsInicio != 0)
 {
    leer("HS Fin:", viajes.hsFin);
    leer("FECHA:", viajes.fecha);
    leer("Recaudacion:", viajes.monto);

    recaude = viajes.monto;

    if (recaude > recaudeMax)
    {
        recaudeMax = recaude;
        diaMax = viajes.fecha;
        horaMax = viajes.hsInicio;
    }    

    duracion = duracionViajes(viajes.hsFin, viajes.hsInicio);

    if (duracion > duracionMax)
    {
        duracionMax = duracion;
        duracionMaxRecaude = viajes.monto;        
    }
    
    leer("HS Inicio:", viajes.hsInicio);
 }

 cout << "DIA MAX RECAUDE: " << recaudeMax << endl;
 cout << "DURACION MAX LARGO: " << duracionMax << " RECAUDE: " << duracionMaxRecaude << endl;
 cout << "HS INICIO VIAJE MAX MONTO: " << horaMax << endl;


 cout << "------------------------" << endl;

 int cantX=0;

 int numX=0;
 int numN=0;

 int sum=0;


 float promedio=0;

 leer("Ingrese un numero natural", numN);
 

 cout << "sumatoria del numero " << numN << ": " << sumatoria(numN) << endl;
 
 cout << "------------------------" << endl;

 leer("Ingrese la cantidad de valores", cantX);

 for (int i = 0; i < cantX; i++)
 {
    cout << "Valor " << i+1 << endl;
    cin >> numX;
    sum += sumatoria(numX);
 }
  promedio = sum / cantX;

  cout << "Promedio: " << promedio << endl;


 system("pause");
 return 0;
}