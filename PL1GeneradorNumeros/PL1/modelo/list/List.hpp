#ifndef LIST_HPP
#define LIST_HPP
#include "..\elements\Element.hpp"
class List
{
private:
    Element* LHeader;
    Element* LNext;
    
public:
    List();
    ~List();
    
    void Insert(int _LData);
    void Concatenate(List _lista);
    void PositionInsert(int _LData, int _Position);
    int ListLenght();
    void ListDelete(int _LData);
    void ListDeletePosition(int position);
    Element* Locate(int _LData);
    int Retrieve(Element* _LPointer);
    int Retrieveint(int position);
    Element* Next();
    bool HasNext();
   // int Previous(Element* _LPointer);
    void Makenull();
    bool Lempty();


};

#endif // LIST_HPP

