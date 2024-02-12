//
// Created by Esteban on 2/11/2024.
//

#include "Raza.h"

Raza::Raza(std::string nombre, std::string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

string Raza::getNombre() {
    return nombre;
}

string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setNombre(string nombre) {
    this->nombre = nombre;
}

void Raza::setPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}

