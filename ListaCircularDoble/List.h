#include <iostream>
#include "Nodo.h"

class List
{
private:
    Nodo* head;

public:
    void setHead();
    Nodo* getHead();
    void add(int idStudent, string name);
    void delete_nodo(int idStudent);
    void get(int idStudent);
    void print();
};