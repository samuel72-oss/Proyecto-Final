#include <iostream>
#include <string>
using namespace std;

class libro {
    public:
        string titulo;
        string autor;
        string isbn;
        bool disponible;
        libro(string, string, string, bool);
};

libro::libro(string _titulo, string _autor, string _isbn, bool _disponible) {
    titulo = _titulo;
    autor = _autor;
    isbn = _isbn;
    disponible = _disponible;
};


class biblioteca {
    private: 
        string titulo[100];
        string autor[100];
        string isbn[100];
        bool disponible[100];
        int cantidad=0;
    public:
        biblioteca();
        void agregar(string, string, string, bool);
        void eliminar(string);
        void mostrar();

};

biblioteca::biblioteca(){
    cantidad = 0;
};

void biblioteca::agregar(string _titulo, string _autor, string _isbn, bool _disponible){
    if(cantidad < 100){
        titulo[cantidad] = _titulo;
        autor[cantidad] = _autor;
        isbn[cantidad] = _isbn;
        disponible[cantidad] = _disponible;
        cantidad++;
    } else {
        cout<<"La biblioteca esta llena\n";
    }
}

void biblioteca::eliminar(string _titulo){
    bool encontrado = false;
    int i = 0;

    while(i < cantidad && encontrado == false){
        if(titulo[i] == _titulo){
            encontrado = true;
        } else {
            i++;
        }
    }

    if (encontrado == true) {
        int j;
        j = i;
        while (j < cantidad - 1) {
            titulo[j] = titulo[j + 1];
            autor[j] = autor[j + 1];
            isbn[j] = isbn[j + 1];
            disponible[j] = disponible[j + 1];
            j++;
        }
        cantidad--;
        cout << "Libro eliminado\n";
    } else {
        cout << "No se encontró el libro\n";
    }
}

void biblioteca::mostrar(){
    if (cantidad==0){
        cout<<"No hay libros en la biblioteca\n";
    } else {
        cout <<"\n---Libros disponibles---\n";
        int i=0;
        while(i < cantidad){
            if(disponible[i]==true){
                cout <<i+1<<"."<<titulo[i]<<"| Autor: "<<autor[i]<<" | ISBN: "<<isbn[i]<<endl;
            }
            i++;
        }
    }


}

int main() {
    int opcion=0;
    string t;
    string a;
    string i;
    string tituloeliminar;
    biblioteca b1; 


    while (opcion != 4) {
        cout << "\n===== MENU BIBLIOTECA =====\n";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Mostrar libros disponibles\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese el titulo del libro (use _ en lugar de espacios): ";
            cin >> t;
            cout << "Ingrese el autor (use _ en lugar de espacios): ";
            cin >> a;
            cout << "Ingrese el ISBN: ";
            cin >> i;
            libro l1(t, a, i, true);
            b1.agregar(l1.titulo, l1.autor, l1.isbn, l1.disponible);
            cout<<"\n";
            cout<<"Libro agregado exitosamente\n";

            
        }

        else if (opcion == 2) {
            cout << "Ingrese el titulo del libro para eliminar: ";
            cin >> tituloeliminar;
            b1.eliminar(tituloeliminar);
            cout<<"\n";
            cout<<"Libro eliminado exitosamente\n";
            
        }

        else if (opcion == 3) {
            b1.mostrar();
        } 
        else if (opcion == 4) {
            cout << "Gracias por usar el programa\n";

        } 

        else {
            cout << "Opcion invalida\n";
        }
    }
}
