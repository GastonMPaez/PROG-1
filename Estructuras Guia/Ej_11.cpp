#include <iostream>
using namespace std;
#define MAX_CANTIDAD 3

struct Episodio{
    int idSerie;
    int idTemporada;
    int cantidadDescargas;
    string tituloEpisodio;
    int idEpisodio;
    int fechaUltimaDescarga;
};

void leer(string mensaje, float &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

/*
int obtenerFechaFormateada(int fecha){

    int anio = fecha / 10000;
    int mes = (fecha % 10000) / 100;
    int dia = fecha % 100;

    cout << dia << "/" << mes << "/" << anio;
    
    return;
}
*/

void registro(Episodio episodios[], int cantidad){
 
 int i=0;
 int serie;
 int temporada;
 
 int totalEpisodiosSerie=0;
 int totalDescargasSerie=0;

 int totalEpisodiosTemporada=0;
 int totalDescargasTemporada=0;

 int totalGeneralSerie=0;

 while (i < cantidad)
 {
    totalDescargasSerie=0;
    totalEpisodiosSerie=0;

    serie=episodios[i].idSerie;

    cout << "Serie: " << serie << endl;

    while (i < cantidad && serie == episodios[i].idSerie)
    {
        totalDescargasTemporada = 0;
        totalEpisodiosTemporada = 0; 

        temporada = episodios[i].idTemporada;
        
        cout << "Temporada: " << temporada << endl;
        cout << "N. de Episodio"  << " "  << "Titulo del Episodio"  << " "  << "Cant. descargas"  << " "  << "Fecha" << endl;

        while (i < cantidad && serie == episodios[i].idSerie &&
               temporada == episodios[i].idTemporada)
        {
            totalEpisodiosTemporada++;
            totalDescargasTemporada = totalDescargasTemporada + episodios[i].cantidadDescargas;

            cout << episodios[i].idEpisodio << " " << episodios[i].tituloEpisodio << " " << episodios[i].cantidadDescargas << " " << episodios[i].fechaUltimaDescarga << endl;
            i++;
        }
        cout << "---------------------------------------------------" << endl;
        cout << "Cantidad Total de Ep de la temporada: " << totalEpisodiosTemporada << endl;
        cout << "Cantidad Total de Descargas de la temporada: " << totalDescargasTemporada << endl;
        cout << endl;

        totalDescargasSerie = totalDescargasSerie + totalDescargasTemporada;
        totalEpisodiosSerie = totalEpisodiosSerie + totalEpisodiosTemporada;
    }
    
    cout << "---------------------------------------------------" << endl;
    cout << "Cantidad Total de EP de la serie " << totalEpisodiosSerie << endl;
    cout << "Cantidad Total de Descargas de la serie " << totalDescargasSerie << endl;
 
    totalGeneralSerie++;
 }
cout << "---------------------------------------------------" << endl;
cout << "Cantidad total de series: " << totalGeneralSerie << endl; 

}


int main () {

 Episodio episodios[MAX_CANTIDAD];

 registro(episodios, MAX_CANTIDAD);

 system("pause");
 return 0;
}

/*
Ej. 11: Una aplicaci??n para descargas de Series posee la informaci??n en un conjunto de datos Episodios,
con un registro por cada episodio, ordenado ascendente por Id_Serie y N??mero de temporada, con el
siguiente dise??o:

XXX --- 1) Id_Serie ( 9 d??gitos ) --- XXX
3) N??mero de temporada (1..12)
5) Cantidad de descargas (long)
2) T??tulo del episodio (cadena)
4) N??mero de episodio (int)
6) Fecha de ??ltima descarga (aaaammdd)
*/