#include "ReportGenerator.h"
#include <fstream>
#include <iostream>
using namespace std;

void ReportGenerator::generarCSV(Component &inv) {
    ofstream archivo("inventario.csv");

    archivo << "Nombre;Tipo;Cantidad;Ubicacion;Fecha\n";

    int j = 0;
    while (j < inv.lista.size()) {
        archivo << inv.lista[j].nombre << ";"
                << inv.lista[j].tipo << ";"
                << inv.lista[j].cantidad << ";"
                << inv.lista[j].ubicacion << ";"
                << inv.lista[j].fecha_adquisicion << "\n";
        j++;
    }

    archivo.close();

    cout << "\nArchivo inventario.csv generado.\n";
}