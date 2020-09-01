
#include <iostream>
#include "Burbuja.h"

using namespace std;

int main()
{
    string array[] = { "Cristian", "Gomez", "201801480", "USAC", "Ingenieria", "Developer" };
    int length = sizeof(array) / sizeof(array[0]);
        
    Burbuja* burbuja = new Burbuja();
    burbuja->order(array, length);
    burbuja->print(array, length);

    delete burbuja;
    return 0;
}
