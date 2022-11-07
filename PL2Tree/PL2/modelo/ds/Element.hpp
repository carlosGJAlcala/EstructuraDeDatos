#ifndef ELEMENT_HPP
#define ELEMENT_HPP
#include "Data.hpp"
class Element
{
private: 
    Data* elementdata;


public:
    Element* siguiente;
    Element();
    Element(char* _elementdata,Element* _pointer);
    char* getElementData();
    void setPointer(Element* _pointer);
    Element* getElementPointer();
    ~Element();
int getduplicate();
};

#endif // ELEMENT_HPP
