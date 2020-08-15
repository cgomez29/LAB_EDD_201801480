#include <iostream>
#include "List.h"


using namespace std;

int main()
{
    List* list = new List();
    list->add(201801480, "Cristian Gomez");
    list->add(201801481, "Alexander Gomez");
    list->add(201801482, "Guzman");
    list->add(201801482, "Alex");

    list->print();
    list->graficar();
    delete list;
    return 0;
}