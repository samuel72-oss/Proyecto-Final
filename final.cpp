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

    Inventario() {
        contador = 0;
    }
};

// ===============================
//   TU PARTE: DatabaseManager
// ===============================
class DatabaseManager {
public:

    void buscarPorNombre(Inventario &inv, string nombreBuscado) {
        int i = 0;
        int encontrado = 0;

        cout << "\n--- RESULTADOS DE BUSQUEDA POR NOMBRE ---\n";

        while (i < inv.contador) {
            if (inv.lista[i].nombre == nombreBuscado) {
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

    void buscarPorTipo(Inventario &inv, string tipoBuscado) {
        int i = 0;
        int encontrado = 0;

        cout << "\n--- RESULTADOS DE BUSQUEDA POR TIPO ---\n";

        while (i < inv.contador) {
            if (inv.lista[i].tipo == tipoBuscado) {
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
};

// ===============================
//   TU PARTE: ReportGenerator
// ===============================
class ReportGenerator {
public:

    void generarCSV(Inventario &inv) {

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
};


// ===============================
//         PROGRAMA PRINCIPAL
// ===============================
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
            }
        }

        if (opcion == 2) {

            if (inventario.contador == 0) {
                cout << "\nNo hay productos guardados.\n";
            } else {
                cout << "\n--- INVENTARIO COMPLETO ---\n";
                int i = 0;
                while (i < inventario.contador) {
                    cout << "\nProducto #
