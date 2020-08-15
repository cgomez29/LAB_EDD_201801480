#include "List.h"
#include <ostream>

List::List()
{
    head = nullptr;
}

void List::add(int idStudent, string name)
{
    Student student;
    student.setIdStudent(idStudent);
    student.setName(name);

    Nodo* newNodo = new Nodo(student);

    if (this->head == nullptr) 
    {
        newNodo->setLeft(newNodo);
        newNodo->setRigth(newNodo);
        this->head = newNodo;
    } 
    else 
    {   
        Nodo* ant = this->head->getLeft();
        newNodo->setRigth(this->head);
        newNodo->setLeft(ant);
        ant->setRigth(newNodo);
        this->head->setLeft(newNodo);   
    }

}

void List::print()
{
    Nodo* aux = this->head;
    do
    {
        cout << "-----------------------------" << endl;
        cout << "Carnet: " << aux->getStudent().getIdStudent() << endl;
        cout << "Nombre: " << aux->getStudent().getName() << endl;
        cout << "-----------------------------" << endl;
        aux = aux->getRigth();
    } while(aux != this->head);

}

List::~List()
{
    Nodo* aux = this->head;
    Nodo* temp = nullptr;
    do
    {
        temp = aux->getLeft();
        delete aux;
        aux = temp;
    } while(aux != this->head);

}

void List::graficar()
{
    ostringstream cadena;

    cadena << "digraph G {" << endl << "node[shape=\"record\"];" << endl;
    cadena << "rankdir=LR;"<< endl;
    Nodo* aux = this->head;
    do 
    {
        cadena << graficar(aux) << endl;
        aux = aux->getRigth();
    } while(aux!=head);
    cadena << "}" << endl;
    ofstream file("salida.dot");
    file<<cadena.str();
    file.close();

    system("circo -Tpng salida.dot -o grafico.png");
    cout << cadena.str() << endl;
}

string List::graficar(Nodo* aux)
{
    ostringstream cadena;
    cadena << "nodo" << &(*aux) << "[label=\"" << aux->getStudent().getIdStudent()<<"\"];"<<endl;
    cadena << "nodo"<<&(*aux->getRigth())<<"->nodo"<<&(*aux)<<"[color=\"green\"]"<<";"<<endl;
    cadena<<"nodo"<<&(*aux)<<"->nodo"<<&(*aux->getRigth())<<"[color=\"green\"]"<<";"<<endl; 
    return cadena.str();
}