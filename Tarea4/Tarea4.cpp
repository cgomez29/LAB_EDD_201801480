
#include <iostream>
#include "Burbuja.h"

using namespace std;

int main()
{
   string array[]={"Hola como estas","Yo bien gracias","ESTE ES UN MENSAJE","Vamos a ganar EDD todos juntos","!!!!Vamos a sacar 100","$$$$$$$$$#$$$$$","Este es el ultimo mensaje del dia de hoy*45"};
    int length = sizeof(array) / sizeof(array[0]);
        
    Burbuja* burbuja = new Burbuja();
    burbuja->order(array, length);
    burbuja->print(array, length);

    delete burbuja;
    return 0;
}
