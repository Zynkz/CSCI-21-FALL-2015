#include "SList.h"
//default constructor
//Initializes: head ot NULL :: size to 0
SList::SList(){
    head=NULL;
    size=0;
}

//decontructor
//calls clear function
SList::~SList(){
    clear();
}

//creates node and points head to it
//Param: int :: value of created node
void SList::insertHead(int nodeVal){
    SLNode* oldHead = head;
    head=new SLNode(nodeVal);
    head->setNextNode(oldHead);
    size++;
}

//deletes head node replacing it with the next node
void SList::removeHead(){
    if(head==NULL)
        return;
    SLNode* remHead=head;
    head=head->getNextNode();
    delete remHead;
    size--;
}

//deallocates memory and clear every node in list
void SList::clear(){
    while(head!=NULL){
        removeHead();
    }
}

//accessor
//gets size of linked list
//Return: unsigned int :: size of linked list
unsigned int SList::getSize() const{
    return size;
}

//converst all values, in order, into a single string
//NUM1,NUM2,...,LASTNUM;
//Return: string :: string containing all node values in order
string SList::toString() const{
    if(head==NULL)
        return "";
    SLNode* current=head;
    ostringstream oss;
    for(unsigned int i=0;i<size;i++){
        if(i>0)
            oss<<",";
        oss<<current->getContents();
        current=current->getNextNode();
    }
    return oss.str();
}