#ifndef BURBUJA_H
#define BURBUJA_H
#include <iostream>

using namespace std;

class Burbuja
{
private:
	int valorAscii(string cadena);
	
public:
	void order(string* array, int length);
	void print(string* array, int length);
};

#endif // BURBUJA_H


