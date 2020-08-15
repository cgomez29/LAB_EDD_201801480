#pragma once
#include <iostream>
#include "Student.h"

using namespace std;

class Nodo
{
private:
    Nodo* rigth;
    Nodo* left;
    Student student;

public:
    Nodo(Student student);
    void setRigth(Nodo* rigth);
    Nodo* getRigth();
    void setLeft(Nodo* left);
    Nodo* getLeft();
    Student getStudent();
};