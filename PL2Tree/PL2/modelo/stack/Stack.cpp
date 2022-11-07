#include "Stack.hpp"

Stack::Stack()
{
    top = nullptr;
}
void Stack::push(char* n_data)
{
    char* nuevoinsert = new char[strlen(n_data)];
    for(int i = 0; i < strlen(n_data); i++) {
        nuevoinsert[i] = n_data[i];
    }
    nuevoinsert[strlen(n_data)] = '\0';

    Element* temp;
    temp = new Element(nuevoinsert, top);
    top = temp;
}

char* Stack::pop()
{
    Element* temp;
    temp = top;
    top = top->getElementPointer();
    char* datar = temp->getElementData();
    delete temp;
    return datar;
}
bool Stack::empty()
{

    return top == nullptr;
}
char* Stack::getTop()
{

    return top->getElementData();
}

void Stack::makeNull()
{

    while(top != nullptr) {
        Element* temp;
        temp = top;
        top = top->getElementPointer();
        delete temp;
    }
}

Element* Stack::getTopPointer()
{

    return top;
}

Stack::~Stack()
{
}
