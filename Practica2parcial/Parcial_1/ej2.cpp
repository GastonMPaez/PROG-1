#include <iostream>
using namespace std;

struct Estacion
{
    char idEstacion;
    string nombre;
    int cantMax;
    int cantDisponibles;
};

struct Usuario
{
    int dni;
    string nombreApellido;
};


struct Prestamo
{
    int dni;
    char idestacion;
    char idDevolucion;
    int tiempoUso;
};

void procesarPrestamos(){

}


int main () {
 
 system("pause");
 return 0;
}