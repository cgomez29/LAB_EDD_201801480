#include "NodoB.h"

NodoB::NodoB(int dato)
{
	this->dato = dato;
	this->left = nullptr;
	this->rigth = nullptr;
} 

void NodoB::setObjeto(int dato)
{
	this->dato = dato;
}

void NodoB::setLeft(NodoB* left)
{
	this->left = left;
}

void NodoB::setRigth(NodoB* rigth)
{
	this->rigth = rigth;
}

NodoB* NodoB::getLeft()
{
	return this->left;
}

NodoB* NodoB::getRigth()
{
	return this->rigth;
}

int NodoB::getDato()
{
	return this->dato;
}
