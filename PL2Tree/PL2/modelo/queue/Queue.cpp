#include "Queue.hpp"
#include <iostream>
//#include "../ds/Element.hpp"
using namespace std;
Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

 
Queue::~Queue() {
    delete[] arr;
}
 
int Queue::dequeue()
{

    int x = arr[front];
 //miro que no exceda la capacidad
    front = (front + 1) % capacity;
    count--;
 
    return x;
}
 
void Queue::enqueue(int item)
{
 //miro que no exceda la capacidad
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
// DEVUELVE ELEMENTO FRONT
int Queue::peek()
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
int Queue::size() {
    return count;
}
 
// MIRA SI ESTÁ VACIA
bool Queue::isEmpty() {
    return (size() == 0);
}
 
//mira si está llena
bool Queue::isFull() {
    return (size() == capacity);
}
