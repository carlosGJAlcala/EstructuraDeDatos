#include "Queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue()
{   
    front = nullptr;
    rear = nullptr;
}

bool Queue::Qempty(){
    
    return front==nullptr && rear==nullptr;
    }

void Queue::Enqueue(int _Qdata)
{
    if(Qempty()){
    Element* temp;

    temp = new Element(_Qdata, nullptr);
    rear = temp;
    front = temp;
    }
    else
    {
        Element* temp;
        temp = new Element(_Qdata, nullptr);
        rear->setPointer(temp);
        rear = temp;
        }
    }

int Queue::Dequeue()
{
    Element* temp;
    int Qdata;
    if(rear==front)
        {
        temp = front;
        Qdata = front->getElementData().getData();
        front = front->getElementPointer();
        rear = rear->getElementPointer();
        delete temp;
    } 
    else{
        temp = front;
        front = front->getElementPointer();
        Qdata = temp->getElementData().getData();  
        delete temp;
    }
        return Qdata;
    }


int Queue::Front()
{
    return front->getElementData().getData();
    }

void Queue::makenull()
{
    while(!Qempty()){
        Element* temp;
        temp = front;
        front = front->getElementPointer();
        delete front;      
        }
    front = nullptr;
    rear = nullptr;
    
    }
    
  
    
    
void Queue::QueueDelete(int _Qdata){
        Queue *help = new Queue();
        int counter = 0;
        
        while(front->getElementData().getData()!= _Qdata && front!=nullptr){
            help->Enqueue(Dequeue());
            //cout<<help->Front()<<"\n";
            //temp = temp->getElementPointer();
            }
        if(front==nullptr){
            cout<<"Number in not found in queue\n";
                        while(!help->Qempty()){
            Enqueue(help->Dequeue());
                        }
                }
        else{
            Element* temp = front;
            front = front->getElementPointer();
            delete temp;
            cout<<"Number delete in queue\n";
            while(!help->Qempty()){
            Enqueue(help->Dequeue());
            }
            }
            
            }     
Queue::~Queue()
{
}

