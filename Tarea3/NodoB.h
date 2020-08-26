#ifndef NODOB_H
#define NODOB_H

class NodoB
{
private:
	int dato;
	NodoB* left;
	NodoB* rigth;

public: 
	NodoB(int dato);
	void setObjeto(int dato);
	void setLeft(NodoB* left);
	void setRigth(NodoB* rigth);
	NodoB* getLeft();
	NodoB* getRigth();
	int getDato();
};

#endif // NODOB_H

