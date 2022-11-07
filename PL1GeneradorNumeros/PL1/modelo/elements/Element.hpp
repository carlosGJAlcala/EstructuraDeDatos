#ifndef ELEMENT_HPP
#define ELEMENT_HPP
#include "Data.hpp"
class Element
{
private: 
    Data elementdata;
    Element* pointer;

public:
    Element();
    Element(Element* _pointer);
    Element(Data _elementdata, Element* _pointer);
    Data getElementData();
    void setPointer(Element* _pointer);
    Element* getElementPointer();
    ~Element();

};

#endif // ELEMENT_HPP
