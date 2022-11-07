#include "Element.hpp"

Element::Element()
{
    siguiente = nullptr;
    elementdata = nullptr;
}

Element::Element(char* _elementdata, Element* _pointer)
{
    elementdata = new Data(_elementdata);
    siguiente = _pointer;
}

Element* Element::getElementPointer()
{
    return siguiente;
}
char* Element::getElementData()
{
    return elementdata->getData();
}

void Element::setPointer(Element* _pointer)
{

    siguiente = _pointer;
}

Element::~Element()
{
}
