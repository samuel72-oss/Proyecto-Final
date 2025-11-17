#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
#include <string>
using namespace std;

class Component{
    protected:
        string nombre;
        string tipo;
        int cantidad;
        string ubicacion;
        string fecha_adquisicion;
    public:
        void setNombre(const string& a);
        void setTipo(const string& b);
        void setCantidad(int c);
        void setUbicacion(const string& d);
        void setFecha_adquisicion(const string& e);

        string getNombre() const;
        string getTipo() const;
        int getCantidad() const;
        string getUbicacion() const;
        srting getFecha_adquisicion() const;

};

#endif