#include <iostream>
using namespace std;
#define CANT_INFRACCIONES 20

struct Infraccion
{
    int tipoInfraccion;
    string motivo;
    int valorMulta;
    char gravedad;
};

void corteControl(Infraccion infracciones[], int cantInfracciones){
    int i=0;
    int contador=0;
    int valorTotalMulta=0;

    while (i < cantInfracciones)
    {
        int key = infracciones[i].tipoInfraccion;

        while (i < cantInfracciones && key == infracciones[i].tipoInfraccion)
        {
            valorTotalMulta = valorTotalMulta + infracciones[i].valorMulta;

            if (infracciones[i].tipoInfraccion == 3 || infracciones[i].tipoInfraccion == 4  && infracciones[i].gravedad == 'G')
            {
                contador++;
            }

            i++;
        }
        
    }

    cout << "Valor total: " << valorTotalMulta << endl;
    if (contador >= 3)
    {
        cout << "Cerrar Fabrica " << endl;
    }
    
    
}

int main () {
 Infraccion infracciones[]= {
    {1, "color", 400, 'G'},
    {1, "color", 800, 'G'},
    {1, "color", 900, 'G'},
    {2, "falla", 35, 'L'},
    {2, "falla", 66, 'L'},
    {3, "cantidad", 100, 'G'},
    {3, "cantidad", 100, 'G'},
    {3, "cantidad", 100, 'G'},
    {3, "caducidad", 150, 'M'},
    {3, "caducidad", 300, 'M'},

 };

 corteControl(infracciones, CANT_INFRACCIONES);

 system("pause");
 return 0;
}
/*

Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se
tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
• Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
• La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.

*/