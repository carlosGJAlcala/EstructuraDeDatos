#include "List.hpp"
#include <iostream>
using namespace std;

List::List()
{
    LHeader = nullptr;
    LNext=new Element();
}
void List::Concatenate(List _lista){
    int length=_lista.ListLenght();
    for(int i=0;i<(length-1);i++){
        Insert(_lista.Next()->getElementData().getData());
    }
}
bool List::HasNext(){
    return true;
}
void List::Insert(int _LData){
    Element* temp;
    temp = new Element(_LData, LHeader);
    LHeader = temp;
    LNext->setPointer(LHeader);
    }

bool List::Lempty(){
    
    return LHeader->getElementPointer()==nullptr;    
    }
    
void List::PositionInsert(int _LData, int _Position) {
        Element* temp;
        Element* temp1;
        int counter = 0;
        if(ListLenght()<_Position){
  
        cout<<"Error: pistion bigger than list lenght\n";   
            }
        else{
            temp = LHeader;
            while(counter!=(_Position-2)){
                counter ++;
                temp = temp->getElementPointer();
                }

            temp1 = new Element(_LData, temp->getElementPointer());
            temp->setPointer(temp1);
            
            }
    } 
int List::Retrieveint(int _intposition){
        Element* temp=LHeader;

        int counter=0;
        cout<<"\n  "<<_intposition;

        while(counter!=(_intposition-2)){
          
                counter ++;
                temp = temp->getElementPointer();
                }
        int dato=  temp->getElementData().getData();
                cout<<"\n pivote is: "<<dato ;

    return dato;
            
            
    }
    
Element* List::Next(){
    

        LNext=LNext->getElementPointer();
    
    return LNext;
    
}


void List::ListDelete(int _LData){
    Element *temp = LHeader;
    Element *temp1 = nullptr;
    while((temp!=nullptr) && (temp->getElementData().getData()!=_LData)){
        
        temp1 = temp;
        temp = temp->getElementPointer();
        }
    if(temp==nullptr){
        
        cout<<"Number not found";
        }
    else if (temp1==nullptr){
        LHeader = LHeader->getElementPointer();
        delete(temp);
        }
    else{
        temp1->setPointer(temp->getElementPointer());
        
        delete(temp);
        }
    }
void List::ListDeletePosition(int position){
        Element* temp=LHeader;
        Element* ante=LHeader;


        for(int i=0;i<position;i++){
                ante=temp;
                temp = temp->getElementPointer();
        }

        ante->setPointer(temp->getElementPointer());
     
       delete(temp);
            
                

}

int List::ListLenght(){
    Element* temp = LHeader;
    int counter = 0;
    while(temp!=nullptr){
        counter++;
        temp = temp->getElementPointer();
        }
    return counter;
    
    } 
    
List::~List()
{
}

