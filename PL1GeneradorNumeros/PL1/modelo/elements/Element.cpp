#include "Element.hpp"


Element::Element()
{
}

Element::Element(Element* _Pointer)
{
    pointer = _Pointer;
}


Element::Element(Data _elementdata, Element* _pointer){
    elementdata = _elementdata;
    pointer = _pointer;
    }
    
Element* Element::getElementPointer(){
    return pointer;    
    }
Data Element::getElementData(){
    return elementdata;
    
    }    
    
void Element::setPointer(Element* _pointer){
    
    pointer = _pointer;
}
    
Element::~Element()
{
}


