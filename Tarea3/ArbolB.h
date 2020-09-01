#ifndef ARBOLB_H
#define ARBOLB_H

#include "NodoB.h"
#include <iostream>

using namespace std;

class ArbolB
{
private:
	NodoB* raiz;
	NodoB* insert(NodoB* raiz, int dato);
	NodoB* delete_nodo(NodoB* raiz, int valor);
	int findNodo(NodoB* raiz);
	void preOrden(NodoB* nodo);
	void inOrden(NodoB* nodo);
	void postOrden(NodoB* nodo);
	void Delete(NodoB* raiz);

public:
	ArbolB();
	~ArbolB();
	NodoB* getRaiz();
	void insert(int valor);
	void preOrden();
	void inOrden();
	void postOrden();
	void delete_nodo(int valor);
	void Delete();
	
};
#endif // ARBOLB_H