#include <iostream>
#include <fstream>
using namespace std;

class Producto {
public:
    string nombre;
    string tipo;
    int cantidad;
    string ubicacion;
    string fecha;
};

class Inventario {
public:
    Producto lista[50];
    int contador;

    Inventario();
};

// ---------- Tu parte: DatabaseManager (declaración) ----------
class DatabaseManager {
public:
    void buscarNombre(Inventario &inv, string nombre);
    void buscarTipo(Inventario &inv, string tipo);
};

// ---------- Tu parte: ReportGenerator (declaración) ----------
class ReportGenerator {
public:
    void generarCSV(Inventario &inv);
};

// ----------------- Definiciones (implementación abajo) -----------------

// Inventario
Inventario::Inventario() {
    contador = 0;
}

// DatabaseManager -> buscar por nombre
void DatabaseManager::buscarNombre(Inventario &inv, string nombre) {
    int i = 0;
    int encontrado = 0;

    cout << "\n--- RESULTADOS DE BUSQUEDA POR NOMBRE ---\n";

    while (i < inv.contador) {
        if (inv.lista[i].nombre == nombre) {
            cout << "\nProducto encontrado:\n";
            cout << "Nombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha << endl;
            encontrado = 1;
        }
        i++;
    }

    if (encontrado == 0) {
        cout << "\nNo hay productos con ese nombre.\n";
    }
}

// DatabaseManager -> buscar por tipo
void DatabaseManager::buscarTipo(Inventario &inv, string tipo) {
    int i = 0;
    int encontrado = 0;

    cout << "\n--- RESULTADOS DE BUSQUEDA POR TIPO ---\n";

    while (i < inv.contador) {
        if (inv.lista[i].tipo == tipo) {
            cout << "\nProducto encontrado:\n";
            cout << "Nombre: " << inv.lista[i].nombre << endl;
            cout << "Tipo: " << inv.lista[i].tipo << endl;
            cout << "Cantidad: " << inv.lista[i].cantidad << endl;
            cout << "Ubicacion: " << inv.lista[i].ubicacion << endl;
            cout << "Fecha: " << inv.lista[i].fecha << endl;
            encontrado = 1;
        }
        i++;
    }

    if (encontrado == 0) {
        cout << "\nNo hay productos de ese tipo.\n";
    }
}

// ReportGenerator -> generar CSV
void ReportGenerator::generarCSV(Inventario &inv) {
    ofstream archivo("inventario.csv");

    archivo << "Nombre,Tipo,Cantidad,Ubicacion,Fecha\n";

    int j = 0;
    while (j < inv.contador) {
        archivo << inv.lista[j].nombre << ","
                << inv.lista[j].tipo << ","
                << inv.lista[j].cantidad << ","
                << inv.lista[j].ubicacion << ","
                << inv.lista[j].fecha << "\n";
        j++;
    }

    archivo.close();

    cout << "\nArchivo inventario.csv generado.\n";
}

// ----------------- Programa principal -----------------
int main() {

    Inventario inventario;
    DatabaseManager db;
    ReportGenerator reporte;

    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Agregar producto\n";
        cout << "2. Ver inventario\n";
        cout << "3. Buscar por nombre\n";
        cout << "4. Buscar por tipo\n";
        cout << "5. Generar archivo CSV\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {

            if (inventario.contador < 50) {

                cout << "\n--- AGREGAR PRODUCTO ---\n";

                cout << "Nombre: ";
                cin >> inventario.lista[inventario.contador].nombre;

                cout << "Tipo: ";
                cin >> inventario.lista[inventario.contador].tipo;

                cout << "Cantidad: ";
                cin >> inventario.lista[inventario.contador].cantidad;

                cout << "Ubicacion: ";
                cin >> inventario.lista[inventario.contador].ubicacion;

                cout << "Fecha de compra: ";
                cin >> inventario.lista[inventario.contador].fecha;

                inventario.contador++;

                cout << "\nProducto guardado.\n";
            } else {
                cout << "Inventario lleno.\n";
            }
        }

        if (opcion == 2) {

            if (inventario.contador == 0) {
                cout << "\nNo hay productos guardados.\n";
            } else {
                cout << "\n--- INVENTARIO COMPLETO ---\n";
                int i = 0;
                while (i < inventario.contador) {
                    cout << "\nProducto # " << (i + 1) << endl;
                    cout << "Nombre: " << inventario.lista[i].nombre << endl;
                    cout << "Tipo: " << inventario.lista[i].tipo << endl;
                    cout << "Cantidad: " << inventario.lista[i].cantidad << endl;
                    cout << "Ubicacion: " << inventario.lista[i].ubicacion << endl;
                    cout << "Fecha: " << inventario.lista[i].fecha << endl;
                    i++;
                }
            }
        }

        if (opcion == 3) {
            string nombreBuscado;
            cout << "\nNombre a buscar: ";
            cin >> nombreBuscado;
            db.buscarNombre(inventario, nombreBuscado);
        }

        if (opcion == 4) {
            string tipoBuscado;
            cout << "\nTipo a buscar: ";
            cin >> tipoBuscado;
            db.buscarTipo(inventario, tipoBuscado);
        }

        if (opcion == 5) {
            reporte.generarCSV(inventario);
        }

    } while (opcion != 6);

    return 0;
}
