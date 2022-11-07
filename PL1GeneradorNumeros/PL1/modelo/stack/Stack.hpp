#ifndef STACK_HPP
#define STACK_HPP
#include "..\elements\Element.hpp"
class Stack
{
private:
    Element* top;
public:
    Stack();
    void push(int n_data);
    int pop();
    bool empty();
    int getTop();
    Element* getTopPointer();
    void makeNull();
    void DeleteStack(int _Sdata);
    ~Stack();

};

#endif // STACK_HPP
