#include <iostream>
using namespace std;
#define MAX_SERIE 5


struct ST_EPISODIO
{
    int id_Serie;
    int numeroTemporada;
    int cantDescargas;
    string tituloEp;
    int numEpisodio;
    int fechaUltDescarga;
};

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void emitirListado(ST_EPISODIO episodio[], int cantEpisodio){
    int i=0;

    int temporada=0;

    int totalEpisodiosSeries=0;
    int totalDescargasSeries=0;

    int totalEpisodiosTemporadas=0;
    int totalDescargasTemporada=0;

    int totalGeneralSeries=0;

    while (i < cantEpisodio)
    {
        totalDescargasSeries=0;
        totalEpisodiosSeries=0;

        int key = episodio[i].id_Serie;

        cout << "Serie: " << key << endl;
        while (i < cantEpisodio && key == episodio[i].id_Serie)
        {
            totalEpisodiosTemporadas=0;
            totalDescargasTemporada=0;

            temporada = episodio[i].numeroTemporada;
            
            cout << "Temporada: " << temporada << endl;
            cout << "N. de Episodio\t\tTitulo del Episodio\t\tCant. Descargas\t\tFecha de ultima descarga" << endl;

            while (i < cantEpisodio && key == episodio[i].id_Serie && temporada == episodio[i].numeroTemporada)
            {
                totalEpisodiosTemporadas++;
                totalDescargasSeries += episodio[i].cantDescargas;
                cout << episodio[i].numEpisodio << "\t\t" << episodio[i].tituloEp << "\t\t" << episodio[i].cantDescargas << "\t\t" << episodio[i].fechaUltDescarga << endl;
                i++;
            }
            
        }
        
    }
    
}

int main () {


 system("pause");
 return 0;
}

/*
Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios,
con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el
siguiente diseño:

1) Id_Serie ( 9 dígitos )
3) Número de temporada (1..12)
5) Cantidad de descargas (long)
2) Título del episodio (cadena)
4) Número de episodio (int)
6) Fecha de última descarga (aaaammdd)
*/