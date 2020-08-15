#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;
class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona();
    void setEdad(int edad);
    int getEdad();
    void setNombre(string nombre);
    string getNombre();
};


#endif //PERSONA_H