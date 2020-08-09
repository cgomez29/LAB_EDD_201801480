#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "Nodo.h"

typedef struct List
{
    Nodo* head;

}List;

List* newList();
void add(List* list, Nodo* nuevo);
void imprimir(List* list);
void delete_nodo(int index);
void get(int index);
void generar(List* list);

void liberar(List* list);