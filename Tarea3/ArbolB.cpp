#include "ArbolB.h"

ArbolB::ArbolB()
{
	this->raiz = nullptr;
}

ArbolB::~ArbolB()
{
	Delete(this->raiz);
}

void ArbolB::Delete()
{
	Delete(this->raiz);
}

void ArbolB::Delete(NodoB* raiz)
{
	if (this->raiz) { return; }
	Delete(raiz->getLeft());
	Delete(raiz->getRigth());
	delete this->raiz;
}

void ArbolB::insert(int valor)
{
	this->raiz = insert(this->raiz, valor);
}


NodoB* ArbolB::insert(NodoB* raiz, int dato)
{
	if (raiz == nullptr)
	{
		raiz = new NodoB(dato);
	}
	else
	{
		if (dato < raiz->getDato())
		{
			NodoB* izq = insert(raiz->getLeft(), dato);
			raiz->setLeft(izq);
		}
		else if (dato > raiz->getDato())
		{
			NodoB* der = insert(raiz->getRigth(), dato);
			raiz->setRigth(der);
		}
	}

	return raiz;
}

void ArbolB::delete_nodo(int valor) 
{
	this->raiz = delete_nodo(this->raiz, valor);
}

NodoB* ArbolB::delete_nodo(NodoB* raiz, int valor)
{
	if (raiz == nullptr)
	{
		return nullptr;
	}
	if (valor == raiz->getDato())
	{
		//cuando no tiene ningun hijo
		if(raiz->getLeft() == nullptr && raiz->getRigth() == nullptr)
		{
			return nullptr;
		}
		//cuando tiene un solo hijo
		if (raiz->getRigth() == nullptr)
		{
			return raiz->getLeft();
		}
		if (raiz->getLeft() == nullptr)
		{
			return raiz->getRigth();
		}
		//cuando tiene dos hijos
		int smallValue = findNodo(raiz->getRigth());
		raiz->setObjeto(smallValue);
		raiz->setRigth(delete_nodo(raiz->getRigth(), smallValue));
		return raiz;
	}

	if (valor < raiz->getDato())
	{
		raiz->setLeft(delete_nodo(raiz->getLeft(), valor));
		return raiz;
	}
	raiz->setRigth(delete_nodo(raiz->getRigth(), valor));
	return raiz;
}

int ArbolB::findNodo(NodoB* raiz)
{
	// buscando el valor mas pequeño
	if (raiz->getLeft() == nullptr)
	{
		return raiz->getDato();
	}
	else
	{
		return findNodo(raiz->getLeft());
	}
}

void ArbolB::preOrden(NodoB* nodo)
{
	//raiz, izquierda, derecha
	if (nodo != nullptr)
	{
		cout << nodo->getDato() << " ";
		preOrden(nodo->getLeft());
		preOrden(nodo->getRigth());
	}
}
void ArbolB::inOrden(NodoB* nodo)
{
	//izquierdo, raiz, derecha
	if (nodo != nullptr)
	{
		inOrden(nodo->getLeft());
		cout << nodo->getDato() << " ";
		inOrden(nodo->getRigth());
	}
}
void ArbolB::postOrden(NodoB* nodo) 
{
	//izquierda, derecha, raiz
	if (nodo != nullptr)
	{
		postOrden(nodo->getLeft());
		postOrden(nodo->getRigth());
		cout << nodo->getDato() << " ";
	}
}

void ArbolB::preOrden()
{
	preOrden(this->raiz);
}
void ArbolB::inOrden()
{
	inOrden(this->raiz);
}
void ArbolB::postOrden()
{
	postOrden(this->raiz);
}