#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "Component.h"

class InventoryManager : public Component {
    public:
        int alerta;
        void agregar();
        void eliminar();
}