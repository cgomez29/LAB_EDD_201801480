#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Nodo.h"

using namespace std;

class List
{
public:
    List();
    ~List();
    
    void add(int idStudent, string name);
    void delete_nodo(int idStudent);
    void get(int idStudent);
    void print();
    void graficar();

private:
    string graficar(Nodo* aux);
    Nodo* head;
};