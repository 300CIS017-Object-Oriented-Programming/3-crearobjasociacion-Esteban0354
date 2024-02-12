#include "Perro.h"
#include <iostream>
using namespace std;

// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro(int age, string name, string breed, string size, string color) {
    this->edad = age;
    this->nombre = name;
    this->raza = breed;
    this->tamanio = size;
    this->color = color;

}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad,int edad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad, edad);
}

void Perro::agregarVeterinario(string nombre, int aniosExperiencia){
    this->pVeterinario = new Veterinario(nombre,aniosExperiencia);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

Veterinario* Perro::getVeterinario(){
    return this->pVeterinario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
    delete pVeterinario;
}

void Perro::agregarRaza(string nombre, string paisOrigen) {
    this->pRaza = new Raza (nombre,paisOrigen);
}

void Perro::setPRaza(Raza* pRaza){
    this->pRaza = pRaza;
}

Raza* Perro::getPRaza() {
    return pRaza;
}




