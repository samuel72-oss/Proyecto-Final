#include "InventoryManager.h"
#include "Component.h"
#include <vector>

 void InventoryManager::agregar(Component &inv){

    string aa;
    string bb;
    int c;
    string cc;
    string dd;
    string ee;

    int r;
    int i=0;
    cout<<"\nCuantos Componentes deseas agregar: ";
    cin>>r;
    Component temp;

    while(i<r){
        cout<<"Ingresa el nombre del componente "<<i+1<<": ";
        cin>>aa;
        cout<<"El tipo: ";
        cin>>bb;
        cout<<"La cantidad: ";
        cin>>c;
        cout<<"Su ubicación: ";
        cin>>dd;
        cout<<"Que fecha lo adquiriste: ";
        cin>>ee;
        cout<<"\n";

        cc=c;

        if(c>5){
            cout<<"\n     --Componente agregado--\n"<<endl;
        }

        else if(c<=5){
            cout<<"\n     --Componente agregado--"<<endl;
            cout<<"\t-.-.-Alerta-.-.-"<<endl;
            cout<<"La cantidad de componentes es baja"<<endl;
            cout<<"------ ¡ ¡ ¡ CUIDADO ! ! ! -------\n"<<endl;
        }

        temp.setNombre(aa);
        temp.setTipo(bb);
        temp.setCantidad(cc);
        temp.setUbicacion(dd);
        temp.setFecha_adquisicion(ee);

        inv.lista.push_back(temp);
        i++;
    }
}

void InventoryManager::eliminar(Component &inv){

    string n;
    cout<<"\nIngresa el nombre del Componente que deseas eliminar: ";
    cin>>n;
    bool encontrado=false;

    for (int i = 0; i < inv.lista.size(); i++) {
        if (inv.lista[i].nombre == n) {
            inv.lista.erase(inv.lista.begin() + i);
            i--;
            cout << "\n\t--- Resultado ---\n";
            cout << "Su Componente a sido eliminado\n";
            encontrado=true;
        }
    }
    if (encontrado==false) {
        cout << "\n No se encontró un componente con ese nombre.\n";
    }
}

void InventoryManager::modificar(Component &inv){

    int c;
    string n;
    int r;
    bool encontrado=false;

    cout<<"\nIngresa el nombre del Componente que deseas modificar: ";
    cin>>n;

    for (int i = 0; i < inv.lista.size(); i++) {
        if (inv.lista[i].nombre == n) {
            cout<<"Que deseas modificar"<<endl;
            cout<<"1. Nombre"<<endl;
            cout<<"2. Cantidad"<<endl;
            cout<<"3. Todo"<<endl;
            cout<<"Selecciona la opcion que deseas: ";
            cin>>r;
            switch(r){
                case 1:
                    cout<<"Ingresa el nuevo nombre de este componente: ";
                    cin>>inv.lista[i].nombre;
                    cout<<"\n     --Componente modificado--\n";
                    break;
                case 2:
                    cout<<"Ingresa el nuevo cantidad de este componente: ";
                    cin>>c;
                    
                    inv.lista[i].cantidad=c;

                    if(c > 5){
                        cout<<"\n     --Componente modificado--\n"<<endl;
                    }

                    else if(c <= 5){
                        cout<<"\n     --Componente modificado--\n"<<endl;
                        cout<<"\t-.-.-Alerta-.-.-"<<endl;
                        cout<<"La cantidad de componentes es baja"<<endl;
                        cout<<"------ ¡ ¡ ¡ CUIDADO ! ! ! -------\n"<<endl;
                    }
                    break;

                case 3:
                    cout<<"Ingresa el nuevo nombre de este componente: ";
                    cin>>inv.lista[i].nombre;
                    cout<<"Ingresa el nuevo tipo de este componente: ";
                    cin>>inv.lista[i].tipo;
                    cout<<"Ingresa la nueva cantidad de este componente: ";
                    cin>>c;
                    inv.lista[i].cantidad=c;
                    cout<<"Ingresa la nueva ubicacion de este componente: ";
                    cin>>inv.lista[i].ubicacion;
                    cout<<"Ingresa la nueva fecha de este componente: ";
                    cin>>inv.lista[i].fecha_adquisicion;

                    if(c > 5){
                        cout<<"\n     --Componente modificado--\n"<<endl;
                    }

                    else if(c <= 5){
                        cout<<"\n     --Componente modificado--\n"<<endl;
                        cout<<"\t-.-.-Alerta-.-.-"<<endl;
                        cout<<"La cantidad de componentes es baja"<<endl;
                        cout<<"------ ¡ ¡ ¡ CUIDADO ! ! ! -------\n"<<endl;
                    }
                    
                    break;
            }
            encontrado=true;       
        }
    }
    if (encontrado==false) {
        cout << "\n No se encontró un componente con ese nombre.\n";
    }

}
