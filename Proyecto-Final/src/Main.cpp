#include <iostream>
#include <string>
#include "Component.h"
#include "InventoryManager.h"
#include "DatabaseManager.h"
#include "ReportGenerator.h"
using namespace std;

int main() {
    InventoryManager inv;
    DatabaseManager db;
    ReportGenerator rep;

    int opcion = 0;

    while (opcion != 8) {
        cout<< "\n===== MENU INVENTARIO =====\n";
        cout<<"1. Agregar componente"<<endl;
        cout<<"2. Mostrar inventario"<<endl;
        cout<<"3. Buscar por nombre"<<endl;
        cout<<"4. Buscar por tipo"<<endl;
        cout<<"5. Eliminar componente"<<endl;
        cout<<"6. Modificar componente"<<endl;
        cout<<"7. Generar archivo CSV"<<endl;
        cout<<"8. Salir"<<endl;
        cout<<"Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            if (inv.lista.size() >= 100) {
                cout << "Inventario lleno.\n";
            } 

            else {
                inv.agregar(inv);
            }
        }

        else if (opcion == 2) {
            if (inv.lista.size() == 0) {
                cout << "Inventario vacío.\n";
            } else {
                cout << "\n--- INVENTARIO ---\n";
                for (int i = 0; i < inv.lista.size(); i++) {
                    cout << i+1 << ". "
                         << inv.lista[i].nombre << " | "
                         << inv.lista[i].tipo << " | "
                         << inv.lista[i].cantidad << " | "
                         << inv.lista[i].ubicacion << " | "
                         << inv.lista[i].fecha_adquisicion << endl;
                }
            }
        }

        else if (opcion == 3) {
            string nombre;
            cout << "Ingrese nombre exacto a buscar: ";
            cin >> nombre;

            db.buscarNombre(inv, nombre);
        }

        else if (opcion == 4) {
            string tipo;
            cout << "Ingrese tipo exacto a buscar: ";
            cin >> tipo;

            db.buscarTipo(inv, tipo);
        }

        else if (opcion == 5) {
            inv.eliminar(inv);
            
        }

        else if (opcion == 6) {
            inv.modificar(inv);
            
        }

        else if (opcion == 7) {
            rep.generarCSV(inv);
            
        }

        else if (opcion != 8) {
            cout << "Opcion invalida.\n";
        }
    }
    cout<<"\n\tFINAL DEL PROGRAMA\n"<<endl;
    return 0;
}