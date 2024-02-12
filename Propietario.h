//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
using namespace std;
class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre);
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(string name, string doc, int age);
    string mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    string mostrarInfo(Propietario p);
    int getEdad();
    string getDocIdentidad();
    void setEdad(int age);
    void setDocIdentidad(string doc);


};


#endif //PROPIETARIO_H
