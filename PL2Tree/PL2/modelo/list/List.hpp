#ifndef LIST_HPP
#define LIST_HPP
#include "../ds/Element.hpp"
class List
{
private:
    Element* final;
    Element* inicial;


public:
    List();
    ~List();

    int lenght;
    int getLenght();
    void positionInsert(char* _LData, Element* pos);
    void deleteposition(Element* pos);
    void insert(char* dato);
    void makenull();
    char* next(int position);

    Element* getFinal();
    Element* getInicial();
    bool isEmpty();
};


#endif // LIST_HPP