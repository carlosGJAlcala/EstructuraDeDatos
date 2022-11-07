#include "Stack.hpp"
#include <iostream>
using namespace std;
Stack::Stack()
{
    top = nullptr;
}
void Stack::push(int n_data){
    
    Element* temp; 
    temp = new Element(n_data, top); 
    top = temp;
    
    }
    
int Stack::pop(){
    Element* temp;
    temp = top;
    top = top->getElementPointer();
    int datar = temp->getElementData().getData();
    delete temp; 
    return datar; 
    
    }
bool Stack::empty(){
    
    return top == nullptr;
    
    }
int Stack::getTop(){
        
    return top->getElementData().getData();
    
    }
    
void Stack::makeNull(){
    
    while(top!=nullptr){
        Element* temp;
        temp = top;
        top = top->getElementPointer();
        delete temp;
        }
    }

Element* Stack::getTopPointer(){
    
    return top;
    }    
    
void Stack::DeleteStack(int _Sdata){
    
    Stack *help = new Stack();
    
    while(top->getElementData().getData() != _Sdata && top!=nullptr){
        help->push(pop());
        cout<<top<<"\n";
        }
        if(top==nullptr){
          cout<<"Number not found in stack\n";
            while(!help->empty()){
                push(help->pop());
                }
            }
        else{
            Element * temp = top;
            top = top->getElementPointer();
            delete temp;
            while(!help->empty()){
                push(help->pop());
                
                }
            }
    } 

    
Stack::~Stack()
{
}



