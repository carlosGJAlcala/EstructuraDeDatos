#ifndef STACK_HPP
#define STACK_HPP
#include "../ds/Element.hpp"
#include <string.h>
class Stack
{
private:
    Element* top;
public:
    Stack();
    void push(char* n_data);
    char* pop();
    bool empty();
    char* getTop();
    Element* getTopPointer();
    void makeNull();
    ~Stack();

};

#endif // STACK_HPP
