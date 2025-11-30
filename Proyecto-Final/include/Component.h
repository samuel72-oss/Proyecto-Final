#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Component{
    public:
        vector<Component> lista;
        string nombre;
        string tipo;
        string cantidad;
        string ubicacion;
        string fecha_adquisicion;
        void setNombre(const string& a);
        void setTipo(const string& b);
        void setCantidad(const string& c);
        void setUbicacion(const string& d);
        void setFecha_adquisicion(const string& e);

        string getNombre() const;
        string getTipo() const;
        string getCantidad() const;
        string getUbicacion() const;
        string getFecha_adquisicion() const;

};

#endif