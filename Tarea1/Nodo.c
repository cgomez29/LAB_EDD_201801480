#include "Nodo.h"

void setRigth(Nodo* aux, Nodo* nuevo)
{
    aux->rigth=nuevo;
}
void setLeft(Nodo* aux, Nodo* nuevo)
{
    aux->left= nuevo;
}

Nodo* newNodo(int val)
{
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
    nuevo->rigth = NULL;
    nuevo->left = NULL;
    nuevo->val = val;
    return nuevo;
}