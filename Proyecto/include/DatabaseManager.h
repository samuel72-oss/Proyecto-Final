#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include "Inventario.h"

class DatabaseManager {
public:
    void buscarNombre(Inventario &inv, string nombre);
    void buscarTipo(Inventario &inv, string tipo);
};

#endif
