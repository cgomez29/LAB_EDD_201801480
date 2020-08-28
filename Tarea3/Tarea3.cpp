
#include <iostream>
#include "ArbolB.h"
int main()
{
    ArbolB* arbol = new ArbolB();
    arbol->insert(10);
    arbol->insert(1);
    arbol->insert(20);
    arbol->insert(15);
    arbol->insert(8);
    arbol->insert(96);
    arbol->insert(23);
    arbol->insert(4);
    arbol->insert(7);
    arbol->insert(32);

    //arbol->delete_nodo(5);
    arbol->preOrden();
    cout << " " << endl;
    arbol->inOrden();
    cout << " " << endl;
    arbol->postOrden();

    delete arbol;
    return 0;
}
