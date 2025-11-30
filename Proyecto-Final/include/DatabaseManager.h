#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include "InventoryManager.h"
#include <string>
using namespace std;

class DatabaseManager {
public:
    void buscarNombre(Component &inv, string nombre);
    void buscarTipo(Component &inv, string tipo);
};

#endif