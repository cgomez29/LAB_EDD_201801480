#include <iostream>
#include "Student.h"
class Nodo
{

private:
    Nodo* rigth;
    Nodo* left;
    Student student;

public:
    Nodo(Student student);
    ~Nodo();
    void setRigth(Nodo* rigth);
    Nodo* getRigth();
    void setLeft(Nodo* left);
    Nodo* getLeft();
    Student getStudent()


};