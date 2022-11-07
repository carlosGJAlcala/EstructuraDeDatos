#include "Core.hpp"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <chrono>
#include <unordered_set>

using namespace std;

Stack *stack;
Queue *queue;
List *list;
bool sortedList;
bool sortedQueue;
bool sortedStack;
int size;
Core::Core()
{
size=0;
stack= new Stack();
queue= new Queue();
list= new  List();

sortedList=false;
sortedQueue=false;
sortedStack=false;

}

Core::~Core()
{
}
/*
void Core::Generation(Stack *_stack, Queue *_queue, List *_list){
    unordered_set<int> numeros;
   
    ofstream Guardar;
    Guardar.open("NumberGeneration.txt", ios::trunc);
    int A;
    int FB= FBcalculator();
    srand(time(NULL));
    do{
    cout<<"Choose the second natural number(between 1-100): \n";
    cin>>A;
    }
    while(A<1 || A>100);
    
    while(FB<100000){
        FB = FB*2;
        }
    for(int i = 0; i<FB; i++ ){
        ::size++;
        int n = A+(1000*i)-(1000*i*(rand()%2));
        
        numeros.insert(n);

    }
    for( int numero : numeros ){
      
        Guardar<<numero<<endl;
        _stack->push(numero);
        _queue->Enqueue(numero);
        _list->Insert(numero);
    }
    }   
*/
 
void Core::Generation(Stack *_stack, Queue *_queue, List *_list){
    int numeros;
   
    ofstream Guardar;
    Guardar.open("NumberGeneration.txt", ios::trunc);
    int A;
    int FB= FBcalculator();
    srand(time(NULL));
    do{
    cout<<"Choose the second natural number(between 1-100): \n";
    cin>>A;
    }
    while(A<1 || A>100);
    
    while(FB<100000){
        FB = FB*2;
        }
    for(int i = 0; i<FB; i++ ){
        int n = A+(1000*i)-(1000*i*(rand()%2));
        ::size++;
        //numeros.insert(n);
         Guardar<<n<<endl;
        _stack->push(n);
        _queue->Enqueue(n);
        _list->Insert(n);
    }
  
    } 

int Core::FBcalculator(){
    int B;
    int FB;
    srand(time(NULL));
   do{

    cout<<"Choose the first natural number(between 1-100): \n";
    cin>>B;
    }
   while(B<1 || B>100);
    FB =abs(B*500*(rand()%2)+4000*(rand()%2)-6000*(rand()%2));
    
    return FB; 
}
void Core::SortStack(Stack *_stack){
    
 
    Stack *help = new Stack();
    while(!_stack->empty()){
        int element = _stack->pop();
        while(!help->empty() && help->getTop()<element){
            _stack->push(help->pop());
            }if(help->getTop()>element){
            help->push(element);
            }
            
            help->push(element);
        }
    while(!help->empty()){
    
        _stack->push(help->pop());
        }
    }
    
void Core::IntroduceNumber(int _data,Stack *_stack,Queue *_queue,List *_list){
    
    _list->Insert(_data);
    _queue->Enqueue(_data);
    _stack->push(_data); 
    ::size++;
    }    
Stack Core::QuicksortStack(Stack _stack){
    Stack stack1,stack2;
    stack1 = *new Stack();
    
    Element top = _stack.getTopPointer();
    Element* pivote = _stack.getTopPointer();
    Element* aux=pivote->getElementPointer();
    Element anterior,aux2;
    
    int a = pivote->getElementData().getData();
    cout<<"el numero es pivote"<<a;
    while(aux->getElementPointer() != nullptr){
        int b = aux->getElementData().getData();
        if(a <= b){
            aux=aux->getElementPointer();
            cout<<"el numero es"<<b;
        }else{
             //cambio orden de elemento
            
            ::swap(a,b);
            anterior=aux;
            aux=aux->getElementPointer();  
        cout<<"el numero es"<<b;
        }
   
    }
    
    // repito el proceso varias veces
        if(pivote->getElementPointer()!=nullptr){
            //creo un stack con valor que no me sirve
            stack1.push(1);
            //consigo el top y machaco la posición de memoria con el nuevo head;
            Element top1= *stack1.getTopPointer(); 
            top1=pivote;
            QuicksortStack(stack1);
            
        }
        else if(top.getElementPointer()!= pivote){
        //creo otra stack
        stack2= *new Stack();
        stack2.push(1);
        Element top2= *stack2.getTopPointer(); 
        top2=top;
        //consigo el item anterior
        anterior=top2;
        aux2=anterior.getElementPointer();
        anterior.setPointer(nullptr);
        QuicksortStack(stack2);
        anterior.setPointer(pivote);
         
    }
  
    
    return _stack;
}
void swap(int* a,int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int Core::sizeQueue(Queue queue){
    Queue* q2=new Queue();
    int j;
    while(!queue.Qempty()){
       j++;
       q2->Enqueue(queue.Dequeue());
 
        }
    queue=*q2;
    
    return j;
}
void Core::BublesortQueue(Queue queue){
    Queue* q2=new Queue();
    //int size=sizeQueue(queue);
    int s= ::size;
    cout<<"\n size: "<<size;

    int i=0;
    int front=queue.Front();
    
    
    int a,b,j;
    
    for(int i=0; i<s ;i++){
        int l= queue.Dequeue();
        for(int j=1; i<s ;i++){
            int temp=queue.Dequeue();
            cout<<"\n largest: "<<l<<" temp:"<<temp;
            if(temp> l){
                queue.Enqueue(l);
                l=temp;
            }if(temp<l){
               queue.Enqueue(temp);
                
            }
            
        }
    }
    
    
}
    


List* Core::QuicksortList(List* list){

    int s=::size;
      cout<<" \n the size is  "<< s;
    if(list->ListLenght()<=3) return list;
    //cogemos como pivote uno que este en la posicion del medio
    int pivoteposicion = 0;
    int valuepivote= 0;
    pivoteposicion =s/2;
    //su valor será
    valuepivote= list->Retrieveint(pivoteposicion);

   list->ListDeletePosition(pivoteposicion);

   List* small = new List();
   List* big = new List();
   List* sortedB  =new List();
   List* sortedS =new List();
   //<<" \n recorre la lista";
    for(int j=0;j<(s-1);j++){
        Element* item=list->Next();
        int i=item->getElementData().getData();
        cout<<"\n value pivote is: "<<valuepivote <<" and  value node is "<< i;
        try{
            if(valuepivote >i){
            small->Insert(i);
        }if(valuepivote <i){
            big->Insert(i);
        }
        }catch (std::exception& e){
            
        }
    
       
    }
   sortedS= QuicksortList(small);
    sortedS->Insert(valuepivote);
    sortedB = QuicksortList(big);
 
    sortedS->Concatenate(*sortedB);
    
    
    
    
    return sortedS;
}


Stack* Core::getStack(){
return stack;
}
Queue* Core::getQueue(){
return queue;
}
List*  Core::getList(){
    return list;
}

   void Core::setStack(Stack* _stack){
       stack=_stack;
       }
   void Core::setQueue(Queue* _queue){
       queue=_queue;
}
   void Core::setList(List* _list ){
       list=_list;
}
   


void Core::watchStack(Stack *_stack){
     Stack* s2 = new Stack();
     int contador=0;
     while(!_stack->empty()){
         contador++;
         int i=_stack->pop();
        s2->push(i);
        cout<<"\nPosition: "<< contador<<" Value: "<< i;
     }
    while(!s2->empty()){
        int i=s2->pop();
        _stack->push(i);
     }
}
void Core::watchQueue(Queue *_queue){
    
    int s= ::size;
    for(int i=0; i<s ;i++){
        int l= queue->Dequeue();
        cout<<"\n position : " << i <<" value  is :"<< l;
        queue->Enqueue(l);
  
    }
  
}
void Core::watchList(List *_list){
    
    int size=list->ListLenght();
    cout<<" \n the size is  "<< size;



    for(int j=0;j<(size-1);j++){
        Element* item=list->Next();
        int i=item->getElementData().getData();
        cout<<"\n position : " << j <<" value  is :"<< i;
  
    
       
    }
    
}
   int Core::sequentiaSearchStackHigherNumber(Stack *_stack){
    Stack* s2 = new Stack();
     int a = 0;
     while(!_stack->empty()){
         int i=_stack->pop();
         s2->push(i);
           if(i >a){
            a=i;
            }
     }
    while(!_stack->empty()){
        int i=s2->pop();
        _stack->push(i);
     }
     cout<<"\nThe largest is: "<<a;
      return a; 
}
   int Core::sequentiaSearchQueueHigherNumber(Queue *_queue){
    int a = 0;
    
    Queue* q2 =new Queue();
    while(!_queue->Qempty()){
        int i=_queue->Dequeue();
     
        q2->Enqueue(i);
           if(i >a){
            a=i;
            }
        }
    while(!_queue->Qempty()){
        int i=q2->Dequeue();
        _queue->Enqueue(i);
        
        }
    cout<<"\nThe largest is: "<<a;
   return a; 
       
}

   int Core::sequentiaSearchListHigherNumber(List *_list){

    int size=list->ListLenght();
    
    int i = 0;

    for(int j=0;j<(size-1);j++){
        Element* item=list->Next();
        int a=item->getElementData().getData();
   
            if(a >i){
            i=a;
            }
    
    }   
    cout<<"\nThe largest is: "<<i;
    return i;
}

bool Core::getsortedList(){
return sortedList;
}
bool Core::getsortedQueue(){
return sortedQueue;
}
bool Core::getsortedStack(){
return sortedStack;
}
    
void Core::setsortedList(bool sort){
 sortedList=sort;
}
void Core::setsortedQueue(bool sort){
     sortedQueue=sort;
    }
void Core::setsortedStack(bool sort){
 sortedStack=sort;
}

void Core::sequentiaSearchStack100Number(Stack *_stack){
    Stack* s2=new Stack();
    int contador=0;
    if(!::sortedStack) SortStack(_stack);
    while(!_stack->empty()){
        int i=_stack->pop();
        s2->push(i);
        
    }
    while(!s2->empty()){
        int i=_stack->pop();
        _stack->push(i);
        
        if(contador<100){
            cout<<"\nPosition: "<<contador<<"value: "<<i;
           
        }
         contador++;
    }
    for(int j=0;j<100;j++){
       int i=_stack->pop();
         _stack->push(i);
         cout<<i;
    }
    setsortedStack(false);
    



}
void Core::sequentiaSearchQueue100Number(Queue *_queue){
    Stack* s3= new Stack(); 
    int contador=0;
    if(!::sortedQueue) BublesortQueue(*_queue);

    
    Queue* q2 =new Queue();
    while(!_queue->Qempty()){
        int i=_queue->Dequeue();
        s3->push(i);
        }
    while(!_queue->Qempty()){
        int i=s3->pop();
        contador++;
        if(contador<100){
            cout<<"\nPosition: "<<contador<<" value: "<<i;
            
        }
        _queue->Enqueue(i);
        
        }
        setsortedQueue(false);
        
    


}
void Core::sequentiaSearchList100Number(List *_list){
if(!::sortedList) QuicksortList(_list);
   
   for(int i=0;i<100;i++){
       int j=_list->Next()->getElementData().getData();
        cout<<"\nPosition: "<<i<<" value: "<<j;
    }


  }
  
void  Core::saveFileStack(Stack *_stack){
    ofstream Guardar;
    Guardar.open("SortedNumbersStack.txt", ios::trunc);
    Stack* s2 = new Stack();
     int contador=0;
     while(!_stack->empty()){
         contador++;
         int i=_stack->pop();
        s2->push(i);
        Guardar<<i<<endl;
     }
    while(!s2->empty()){
        int i=s2->pop();
        _stack->push(i);
     }
    
    
    }
void  Core::saveFileQueue(Queue *_queue){
    ofstream Guardar;
    Guardar.open("SortedNumbersQueue.txt", ios::trunc);
    int s= ::size;
    for(int i=0; i<s ;i++){
        int l= queue->Dequeue();
        Guardar<<l<<endl;
        queue->Enqueue(l);
  
    }
    
    
    
}
void Core::saveFileList(List *_list){
    ofstream Guardar;
    Guardar.open("SortedNumbersList.txt", ios::trunc);
    
    int s=::size;
    cout<<" \n the size is  "<< size;

    for(int j=0;j<s;j++){
        Element* item=list->Next();
        int i=item->getElementData().getData();
        Guardar<<i<<endl;
    
       
    }
}


