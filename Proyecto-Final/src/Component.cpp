#include "Component.h"
#include <string>
using namespace std;

void Component::setNombre(const string& a) {
    nombre = a;
}
void Component::setTipo(const string& b) {
    tipo = b;
}
void Component::setCantidad(const string& c) {
    cantidad = c;
}
void Component::setUbicacion(const string& d) {
    ubicacion = d;
}
void Component::setFecha_adquisicion(const string& e) {
    fecha_adquisicion = e;
}


string Component::getNombre() const {
    return nombre;
}
string Component::getTipo() const {
    return tipo;
}
string Component::getCantidad() const {
    return cantidad;
}
string Component::getUbicacion() const {
    return ubicacion;
}
string Component::getFecha_adquisicion() const {
    return fecha_adquisicion;
}