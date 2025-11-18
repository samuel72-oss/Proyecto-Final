#include <iostream>
#include "DatabaseManager.h"
using namespace std;

void DatabaseManager::buscarNombre(Inventario &inv, string nombre) {
    int i = 0;
    int encontrado = 0;

    cout << "\n--- RESULTADOS DE BUSQUEDA POR NOMBRE ---\n";

    while (i < inv.contador) {
        if (inv.lista[i].nombre == nombre) {
            cout << "\nNombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha << endl;
            encontrado = 1;
        }
        i++;
    }

    if (!encontrado) {
        cout << "\nNo hay productos con ese nombre.\n";
    }
}

void DatabaseManager::buscarTipo(Inventario &inv, string tipo) {
    int i = 0;
    int encontrado = 0;

    cout << "\n--- RESULTADOS DE BUSQUEDA POR TIPO ---\n";

    while (i < inv.contador) {
        if (inv.lista[i].tipo == tipo) {
            cout << "\nNombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha << endl;
            encontrado = 1;
        }
        i++;
    }

    if (!encontrado) {
        cout << "\nNo hay productos de ese tipo.\n";
    }
}
