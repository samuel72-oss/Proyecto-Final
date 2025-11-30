#include "DatabaseManager.h"
#include <iostream>
using namespace std;

void DatabaseManager::buscarNombre(Component &inv, string nombre) {
    bool encontrado = false;

    for (int i = 0; i < inv.lista.size(); i++) {
        if (inv.lista[i].nombre == nombre) {
            cout << "\n--- Resultado ---\n";
            cout << "Nombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha_adquisicion << endl;
            encontrado = true;
        }
    }

    if (encontrado==false) {
        cout << "\n No se encontró un componente con ese nombre.\n";
    }
}

void DatabaseManager::buscarTipo(Component &inv, string tipo) {
    bool encontrado = false;

    for (int i = 0; i < inv.lista.size(); i++) {
        if (inv.lista[i].tipo == tipo) {
            cout << "\n--- Resultado ---\n";
            cout << "Nombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha_adquisicion << endl;
            encontrado = true;
        }
    }

    if (encontrado==false) {
        cout << "\n No se encontró un componente con ese tipo.\n";
    }
}