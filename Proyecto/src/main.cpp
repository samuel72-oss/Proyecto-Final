
int main() {

    Inventario inventario;
    DatabaseManager db;
    ReportGenerator reporte;

    int opcion = 0;
    while (opcion != 7) {

        cout << "\n--- MENU ---\n";
        cout << "1. Agregar producto\n";
        cout << "2. Ver inventario\n";
        cout << "3. Buscar por nombre\n";
        cout << "4. Buscar por tipo\n";
        cout << "5. Generar archivo CSV\n";
        cout << "6. Modificar inventario\n";
        cout << "7. Salir\n";
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
            else {
                cout << "Inventario lleno.\n";
            }
        }


        if (opcion == 2) {

            if (inventario.contador == 0) {
                cout << "\nNo hay productos guardados.\n";
            } 
            else {
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


        if (opcion == 6) {
            cout << "\nEsta todavía no\n";
        }

    }

}

