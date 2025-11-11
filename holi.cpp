#include <iostream>
#include <string>
using namespace std;


class producto {
public:
    string nombre;
    float precio;
    int stock;
    
    producto() {
        nombre = "";
        precio = 0.0;
        stock = 0;
    }
    
    producto(string _nombre, float _precio, int _stock) {
        nombre = _nombre;
        precio = _precio;
        stock = _stock;
    }
    
    void mostrar() {
        cout << "Producto: " << nombre
             << " | Precio: $" << precio
             << " | Stock: " << stock << " unidades" << endl;
    }
};


class Itemcarrito {
public:
    producto prod;
    int cantidad;
    
    Itemcarrito() {
        cantidad = 0;
    }
    
    Itemcarrito(producto _prod, int _cantidad) {
        prod = _prod;
        cantidad = _cantidad;
    }
    
    void mostrarItem() {
        cout << "  " << prod.nombre 
             << " | Cantidad: " << cantidad 
             << " | Precio unitario: $" << prod.precio
             << " | Subtotal: $" << prod.precio * cantidad << endl;
    }
};

class CarritoCompras {
public:
    Itemcarrito items[100];
    int totalArticulos;
    int numItems;
    
    CarritoCompras() {
        totalArticulos = 0;
        numItems = 0;
    }
    
    void agregar(producto &prod, int cantidad) {
        if (cantidad <= 0) {
            cout << "\nError: La cantidad debe ser mayor a 0" << endl;
            return;
        }
        
        if (cantidad > prod.stock) {
            cout << "\nError: No hay suficiente stock. Stock disponible: " << prod.stock << endl;
            return;
        }
        
        int i = 0;
        bool encontrado = false;
        
        while (i < numItems) {
            if (items[i].prod.nombre == prod.nombre) {
                encontrado = true;
                break;
            }
            i++;
        }
        
        if (encontrado) {
            cout << "\nEl producto ya está en el carrito." << endl;
        } else {
            Itemcarrito nuevoItem(prod, cantidad);
            items[numItems] = nuevoItem;
            numItems++;
            totalArticulos += cantidad;
            prod.stock = prod.stock - cantidad;
            cout << "\n¡Producto agregado al carrito exitosamente!" << endl;
        }
    }
    
    void eliminar(int posicion) {
        if (posicion < 1 || posicion > numItems) {
            cout << "\nPosición inválida." << endl;
            return;
        }
        
        int pos = posicion - 1;
        totalArticulos = totalArticulos - items[pos].cantidad;
        

        int j = pos;
        while (j < numItems - 1) {
            items[j] = items[j + 1];
            j++;
        }
        
        numItems--;
        cout << "\n¡Producto eliminado del carrito!" << endl;
    }
    
    void factura() {
        cout << "\n========================================" << endl;
        cout << "           FACTURA DE COMPRA            " << endl;
        cout << "========================================" << endl;
        
        if (numItems == 0) {
            cout << "\nEl carrito está vacío." << endl;
            cout << "========================================\n" << endl;
            return;
        }
        
        cout << "\nProductos en el carrito:\n" << endl;
        
        int i = 0;
        float total = 0.0;
        
        while (i < numItems) {
            cout << (i + 1) << ". ";
            items[i].mostrarItem();
            total = total + items[i].prod.precio * items[i].cantidad;
            i++;
        }
        
        cout << "\n----------------------------------------" << endl;
        cout << "Total de artículos: " << totalArticulos << endl;
        cout << "TOTAL A PAGAR: $" << total << endl;
        cout << "========================================\n" << endl;
    }
};

class usuario {
public:
    string nombre;
    string apellido;
    int cedula;
    CarritoCompras historialCompras[50];
    int numCompras;
    
    usuario() {
        nombre = "";
        apellido = "";
        cedula = 0;
        numCompras = 0;
    }
    
    usuario(string _nombre, string _apellido, int _cedula) {
        nombre = _nombre;
        apellido = _apellido;
        cedula = _cedula;
        numCompras = 0;
    }
    
    void historial() {
        cout << "\n========================================" << endl;
        cout << "        HISTORIAL DE COMPRAS            " << endl;
        cout << "========================================" << endl;
        cout << "Usuario: " << nombre << " " << apellido << endl;
        cout << "Cédula: " << cedula << endl;
        cout << "========================================" << endl;
        
        if (numCompras == 0) {
            cout << "\nNo hay compras registradas." << endl;
            cout << "========================================\n" << endl;
            return;
        }
        
        int compraNum = 1;
        int i = 0;
        
        while (i < numCompras) {
            cout << "\n--- COMPRA #" << compraNum << " ---" << endl;
            
            int j = 0;
            float totalCompra = 0.0;
            
            while (j < historialCompras[i].numItems) {
                historialCompras[i].items[j].mostrarItem();
                totalCompra += historialCompras[i].items[j].prod.precio * historialCompras[i].items[j].cantidad;
                j++;
            }
            
            cout << "Total de la compra: $" << totalCompra << endl;
            
            compraNum++;
            i++;
        }
        
        cout << "========================================\n" << endl;
    }
};

int main() {
    producto prod1("Camiseta Polo", 45000, 25);
    producto prod2("Jean Levis", 95000, 15);
    producto prod3("Chaqueta de Cuero", 180000, 10);
    producto prod4("Zapatos Deportivos Nike", 220000, 20);
    producto prod5("Sudadera con Capucha", 65000, 30);
    
    string nombre;
    string apellido;
    int cedula;
    
    cout << "\n======== BIENVENIDO A LA TIENDA ========" << endl;
    cout << "Por favor ingrese sus datos:\n" << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Cédula: ";
    cin >> cedula;
    
    usuario user1(nombre, apellido, cedula);
    CarritoCompras carrito1;
    
    int opcion = 0;
    
    while (opcion != 6) {
        cout << "\n======== TIENDA EN LÍNEA ========" << endl;
        cout << "1. Ver productos disponibles" << endl;
        cout << "2. Agregar producto al carrito" << endl;
        cout << "3. Eliminar producto del carrito" << endl;
        cout << "4. Ver carrito (Factura)" << endl;
        cout << "5. Finalizar compra" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        if (opcion == 1) {
            cout << "\n--- PRODUCTOS DISPONIBLES ---\n" << endl;
            prod1.mostrar();
            prod2.mostrar();
            prod3.mostrar();
            prod4.mostrar();
            prod5.mostrar();
            
        } else if (opcion == 2) {
            int prodOpcion = 0;
            int cantidad = 0;
            
            cout << "\n--- AGREGAR PRODUCTO ---" << endl;
            cout << "1. " << prod1.nombre << " - $" << prod1.precio << endl;
            cout << "2. " << prod2.nombre << " - $" << prod2.precio << endl;
            cout << "3. " << prod3.nombre << " - $" << prod3.precio << endl;
            cout << "4. " << prod4.nombre << " - $" << prod4.precio << endl;
            cout << "5. " << prod5.nombre << " - $" << prod5.precio << endl;
            cout << "Seleccione el producto: ";
            cin >> prodOpcion;
            
            cout << "Ingrese la cantidad: ";
            cin >> cantidad;
            
            if (prodOpcion == 1) {
                carrito1.agregar(prod1, cantidad);
            } else if (prodOpcion == 2) {
                carrito1.agregar(prod2, cantidad);
            } else if (prodOpcion == 3) {
                carrito1.agregar(prod3, cantidad);
            } else if (prodOpcion == 4) {
                carrito1.agregar(prod4, cantidad);
            } else if (prodOpcion == 5) {
                carrito1.agregar(prod5, cantidad);
            } else {
                cout << "\nOpción inválida." << endl;
            }
            
        } else if (opcion == 3) {
            if (carrito1.numItems == 0) {
                cout << "\nEl carrito está vacío." << endl;
            } else {
                carrito1.factura();
                int posicion;
                cout << "\nIngrese el número del producto a eliminar: ";
                cin >> posicion;
                carrito1.eliminar(posicion);
            }
            
        } else if (opcion == 4) {
            carrito1.factura();
            
        } else if (opcion == 5) {
            carrito1.factura();
            if (carrito1.numItems > 0) {
                user1.historialCompras[user1.numCompras] = carrito1;
                user1.numCompras++;
                cout << "\n¡Compra registrada en el historial!" << endl;
            }
            cout << "\n¿Desea ver el historial de compras? (1=Sí, 0=No): ";
            int verHistorial;
            cin >> verHistorial;
            if (verHistorial == 1) {
                user1.historial();
            }
            
            carrito1 = CarritoCompras();
            
        } else if (opcion == 6) {
            cout << "\n¡Gracias por su compra!" << endl;
        } else {
            cout << "\nOpción inválida. Intente de nuevo." << endl;
        }
    }
    
    return 0;
}