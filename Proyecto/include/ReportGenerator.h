#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include "Inventario.h"
using namespace std;

class ReportGenerator {
public:
    void generarCSV(Inventario &inv);
};

#endif
