#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "Component.h"

class InventoryManager : public Component {
    public:
        int alerta;
        void agregar(Component &inv);
        void eliminar(Component &inv);
        void modificar(Component &inv);
};

#endif