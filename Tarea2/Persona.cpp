#include "Persona.h"

Persona::Persona()
{   
    this->edad = 0;
    this->nombre = "";
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

int Persona::getEdad()
{
    return this->edad;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::getNombre()
{
    return this->nombre;
}