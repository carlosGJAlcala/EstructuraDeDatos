#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "..\elements\Element.hpp"

class Queue
{
private:
    Element* rear;
    Element* front;
public:
    Queue();
    void Enqueue(int _Qdata);
    int Dequeue();
    int Front();
    bool Qempty();
    void makenull();
    void QueueDelete(int _Qdata);
    ~Queue();

};

#endif // QUEUE_HPP
