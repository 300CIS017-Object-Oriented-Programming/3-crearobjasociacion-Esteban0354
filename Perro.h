//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"
using namespace std;
class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;
public:
    Perro(int age, string name, string breed, string size, string color);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para....... relacionar un propietario con un objeto de la clase perro, llama al
    // constructor de la clase Propietario y le asigna ese nuevo objeto al atributo pPropietario de la clase Perro
    void agregarPropietario(std::string nombre, std::string docIdentidad, int edad);
    void agregarRaza(string nombre, string paisOrigen);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    void agregarVeterinario(string nombre, int aniosExperiencia);
    Veterinario* getVeterinario();
    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
    Raza* getPRaza();
    void setPRaza(Raza *pRaza);
};
#endif
