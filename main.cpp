#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {
    /*
    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
    */

    Perro* Horacio = new Perro(3,"Horacio","Labrador","Grande","Blanco");
    Horacio->ladrar();
    Propietario* propietario1 = new Propietario("Roberto","12345",23);
    string mostrarInfo = propietario1->mostrarInfo();
    cout << mostrarInfo <<endl;
    //Propietario* propietario2 = new Propietario("Esteban","1108333564",18);
    //Horacio->setPropietario(propietario2);
    Horacio->agregarPropietario("Esteban","1108333564",18);
    cout<< "El documento del pPropietario del perro "<<Horacio->getNombre() << " es "<< Horacio->getPropietario()->getDocIdentidad()<<endl;
    cout<< "El edad del pPropietario del perro "<<Horacio->getNombre() << " es "<< Horacio->getPropietario()->getEdad()<<endl;
    Horacio->agregarVeterinario("Pedro",10);
    cout << "El veterinario de "<<Horacio->getNombre()<<" es "<<Horacio->getVeterinario()->getNombre()<<" y tiene "<<Horacio->getVeterinario()->getAniosExperiencia()<<" anios de experiencia"<<endl;
    Raza* raza1 = new Raza("Mastin Napolitano","Italia");
    Raza* raza2 = new Raza("Maltes","Italia");
    Horacio->setPRaza(raza1);
    cout << "La raza de "<<Horacio->getNombre()<< " es "<< Horacio->getPRaza()->getNombre()<<" y es del pais "<< Horacio->getPRaza()->getPaisOrigen()<<endl;
    return 0;
}
