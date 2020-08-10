#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "List.h"
#include "Nodo.h"

int main()
{
    Nodo* a = newNodo(1);
    Nodo* b = newNodo(2);
    Nodo* c = newNodo(3);
    Nodo* d = newNodo(4);
    Nodo* e = newNodo(5);
    Nodo* f = newNodo(6);
    Nodo* g = newNodo(7);

    List* list = newList();
    add(list, a);
    add(list, b);
    add(list, c);
    add(list, d);
    add(list, e);
    add(list, f);
    add(list, g);
    //get(list, 1);
    delete_nodo(list, 0);
    imprimir(list);
    generar(list);
    liberar(list);
    free(list);
    return 0;
}