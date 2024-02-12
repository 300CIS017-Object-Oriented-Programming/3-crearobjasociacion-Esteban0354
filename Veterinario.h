//
// Created by Esteban on 2/11/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H

#include <string>
#include <iostream>
using namespace std;
class Veterinario{
private:
    string nombre;
    int aniosExperiencia;
public:
    Veterinario(string nombre, int aniosExperiencia);
    string getNombre();
    void setNombre(string nombre);
    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);


};

#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
