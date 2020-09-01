
#include <iostream>
#include "ArbolB.h"
int main()
{
    ArbolB* arbol = new ArbolB();
    arbol->insert(10);
    arbol->insert(5);
    arbol->insert(15);
    arbol->insert(1);
    arbol->insert(7);
    arbol->insert(18);

    //arbol->delete_nodo(5);
    arbol->preOrden();
    cout << " " << endl;
    arbol->inOrden();
    cout << " " << endl;
    arbol->postOrden();
    arbol->Delete();
    delete arbol;
    return 0;
}
