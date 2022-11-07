#include "List.hpp"
#include <iostream>
#include <string.h>
using namespace std;

List::List()
{
    lenght = 0;
    Element* inicial = nullptr;
    Element* final =nullptr;
}

void List::insert(char* dato)
{
    char* nuevoinsert = new char[strlen(dato)];
    // para hacer una copia de char to char
    for(int i = 0; i < strlen(dato); i++) {
        nuevoinsert[i] = dato[i];
    }
    nuevoinsert[strlen(dato)] = '\0';
    Element* nuevo = new Element(nuevoinsert, nullptr);
    if(lenght == 0) {

        inicial = nuevo;
        final = inicial;
    } else {
        final->siguiente = nuevo;
        final = final->siguiente;
    }
    lenght++;
}

void List::positionInsert(char* dato, Element* pos)
{
    Element* nuevo = new Element(dato, nullptr);
    nuevo->siguiente = pos->siguiente;
    pos->siguiente = nuevo;
    lenght++;
}

void List::deleteposition(Element* pos)
{
    Element* actual = inicial;

    while(actual->siguiente != pos && actual->siguiente != NULL) {
        actual = actual->siguiente;
    }

    if(actual->siguiente != nullptr) {
        actual->siguiente = pos->siguiente;

    } else {
        actual->siguiente = nullptr;
    }
    lenght--;
    delete(pos);
}
void List::makenull()
{
    Element* actual = inicial;
    Element* pos = actual;

    while(actual->siguiente != nullptr) {
        pos = actual;
        actual = actual->siguiente;
        delete(pos);
    }
    lenght = 0;
}
int List::getLenght()
{
    return lenght;
}
bool List::isEmpty()
{
    return (lenght == 0);
}

List::~List()
{
    makenull();
}
Element* List::getFinal()
{
    return final;
}
Element* List::getInicial()
{
    return inicial;
}
char* List::next(int position)
{
    Element* actual= inicial;
    if(position<lenght){
        int iterador=0;
        while(iterador<position){
            actual=actual->siguiente;
            
        }
        return actual->getElementData();
    }else{
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    
}