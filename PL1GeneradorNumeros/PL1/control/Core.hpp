#ifndef CORE_HPP
#define CORE_HPP
#include "modelo/queue/Queue.hpp"
#include "modelo/list/List.hpp"
#include "modelo/stack/Stack.hpp"
class Core
{
public:
    

    Core();
    ~Core();
    
    int sizeQueue(Queue queue);
    void Generation(Stack *_stack, Queue *_queue, List *_list);
    int FBcalculator();
    
    void IntroduceNumber(int _data,Stack *_stack,Queue *_queue,List *_list);
    void swap(Element* a,Element* b);
    Stack QuicksortStack(Stack _stack);
    
    
    void BublesortQueue(Queue queue);
    List* QuicksortList(List* list);
    void SortStack(Stack *_stack);
    
    void watchStack(Stack *_stack);
    void watchQueue(Queue *_queue);
    void watchList(List *_list);
    
    Stack* getStack();
    Queue* getQueue();
    List*  getList();
    
    bool sortedList;
    bool sortedQueue;
    bool sortedStack;
    
    bool getsortedList();
    bool getsortedQueue();
    bool getsortedStack();
    
    void setsortedList(bool sort);
    void setsortedQueue(bool sort);
    void setsortedStack(bool sort);
        
   void setStack(Stack* _stack);
   void setQueue(Queue* _queue);
   void setList(List* _list );
   
    
    Queue CopyQueue(Queue *_queue);
    Stack CopyStack(Stack *_stack);
    
   int sequentiaSearchStackHigherNumber(Stack *_stack);
   int sequentiaSearchQueueHigherNumber(Queue *_queue);
   int sequentiaSearchListHigherNumber(List *_list);
   
   void  sequentiaSearchStack100Number(Stack *_stack);
   void sequentiaSearchQueue100Number(Queue *_queue);
   void  sequentiaSearchList100Number(List *_list);
   
   void  saveFileStack(Stack *_stack);
   void  saveFileQueue(Queue *_queue);
   void  saveFileList(List *_list);

};

#endif // CORE_HPP
