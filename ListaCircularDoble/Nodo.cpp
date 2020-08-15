#include "Nodo.h"

Nodo::Nodo(Student student)
{
    this->left = nullptr;
    this->rigth = nullptr;
    this->student = student;
}

void Nodo::setRigth(Nodo* rigth)
{
    this->rigth = rigth;
}

Nodo* Nodo::getRigth()
{
    return this->rigth;
}

void Nodo::setLeft(Nodo* left)
{
    this->left = left;
}

Nodo* Nodo::getLeft()
{
    return this-> left;
}

Student Nodo::getStudent()
{
    return this->student;
}