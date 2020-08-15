#include <iostream>
#include "Queue.h"
#include "Queue.cpp"
#include "Persona.h"
using namespace std;


int main()
{
    Queue<Persona>* cola = new Queue<Persona>();
    
    Persona p0;
    p0.setEdad(50);
    p0.setNombre("Alex");
    Persona p1;
    p1.setEdad(18);
    p1.setNombre("Cristian");
    Persona p2;
    p2.setEdad(25);
    p2.setNombre("Gomez");
    Persona p3;
    p3.setEdad(69);
    p3.setNombre("Alexander");

    cola->enqueue(p0);
    cola->enqueue(p1);
    cola->enqueue(p2);
    cola->enqueue(p3);

    Persona p;
    p = cola->dequeue()->getValue();
    cout << "---------------------------------------------" << endl;
    cout << "Edad: " << p.getEdad() << " Nombre: " << p.getNombre() << endl;
    cout << "---------------------------------------------" << endl;
    p = cola->dequeue()->getValue();
    cout << "---------------------------------------------" << endl;
    cout << "Edad: " << p.getEdad() << " Nombre: " << p.getNombre() << endl;
    cout << "---------------------------------------------" << endl;
    p = cola->dequeue()->getValue();
    cout << "---------------------------------------------" << endl;
    cout << "Edad: " << p.getEdad() << " Nombre: " << p.getNombre() << endl;
    cout << "---------------------------------------------" << endl;


    cola->vaciar();
    delete cola;
    return 0;
}