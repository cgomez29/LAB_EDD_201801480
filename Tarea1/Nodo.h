#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    struct Nodo* left;
    struct Nodo* rigth;
    int val;
} Nodo;

Nodo* newNodo(int val);
void setLeft(Nodo* aux, Nodo* nuevo);
void setRigth(Nodo* aux, Nodo* nuevo);