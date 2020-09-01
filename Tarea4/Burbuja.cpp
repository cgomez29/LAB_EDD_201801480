#include "Burbuja.h"


int Burbuja::valorAscii(string cadena)
{
	int valor = 0;
	char caracter;
	for (int i = 0; i <= cadena.length(); i++)
	{
		caracter = cadena[i];

		valor = valor + caracter;
	}

	//cout << "valor ascii: " << valor << endl;
	return valor;
}


void Burbuja::order(string* array, int length)
{
	string aux;
	for (int i = 0; i < length - 1 ; i++)
	{	
		for (int j = 0; j < length-i-1; j++)
		{
			if (valorAscii(array[j+1]) < valorAscii(array[j]))
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
			}
		}

	}
}

void Burbuja::print(string* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}