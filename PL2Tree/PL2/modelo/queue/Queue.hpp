#ifndef QUEUE_HPP
#define QUEUE_HPP
//#include "..\ds\Element.hpp"
using namespace std;
 
#define SIZE 1000
 
class Queue
{
    int *arr;    
    int capacity;  
    int front;      
    int rear;       
    int count;      
 
public:
    Queue(int size = SIZE);     
    ~Queue();                   
    Queue(); 
    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

#endif // QUEUE_HPP
