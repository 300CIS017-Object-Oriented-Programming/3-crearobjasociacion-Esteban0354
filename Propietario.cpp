//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
using namespace std;
//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(string nombre) {
    this->nombre = nombre;
}
Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario::Propietario(string name, string doc, int age) {
    this->nombre = name;
    this->docIdentidad = doc;
    this->edad=age;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

int Propietario::getEdad(){
    return edad;
}
string Propietario::getDocIdentidad(){
    return docIdentidad;
}
string Propietario::mostrarInfo() {
    return nombre+", "+docIdentidad +", "+to_string(edad);
}

void Propietario::setEdad(int age) {
    this->edad = age;
}

void Propietario::setDocIdentidad(std::string doc) {
    this->docIdentidad = doc;
}