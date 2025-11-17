#include "InventoryManager.h"
#include <vector>

 void InventoryManager::agregar(){

    int r;
    int i=0
    cout<<"Cuantos electrodomesticos deseas agregar: ";
    cin>>r;
    vector<Inventory> Inventory(r);
    while(i<r){
        cout<<"Ingresa el nombre: "<<endl;
        cin>>aa;
        cout<<"El tipo: "<<endl;
        cin>>bb;
        cout<<"La cantidad: "<<endl;
        cin>>cc;
        cout<<"Su ubicación: "<<endl;
        cin>>dd;
        cout<<"Que fecha lo adquiriste: "<<endl;
        cin>>ee;
        Inventory[i].setNombre(aa);
        Inventory[i].setTipo(bb);
        Inventory[i].setCantidad(cc);
        Inventory[i].setUbicacion(dd);
        Inventory[i].setFecha_adquisicion(ee);

        i++;
    }
}

void InventoryManager::eliminar(){
    
}
