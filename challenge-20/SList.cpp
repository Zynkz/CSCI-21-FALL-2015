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

void SList::insertTail(int nodeVal){
    if(head==NULL){
        head=new SLNode(nodeVal);
    }else{
        SLNode* tail=head;
        while(tail->getNextNode()!=NULL){
            tail=tail->getNextNode();
        }
        tail->setNextNode(new SLNode(nodeVal));
    }
    size++;
}

//deletes head node replacing it with the next node
void SList::removeHead(){
    if(head!=NULL){
        SLNode* remHead=head;
        head=head->getNextNode();
        delete remHead;
        size--;
    }
}

void SList::removeTail(){
    if(head!=NULL){
        SLNode* tail=head;
        SLNode* prev=tail;
        while(tail->getNextNode()!=NULL){
            prev=tail;
            tail=tail->getNextNode();
        }
        if(prev->getNextNode()==NULL)
            head=NULL;
        prev->setNextNode(NULL);
        delete tail;
        size--;
    }
}

//insert at first instance
//Param: int :: node to be inserted
void SList::insert (int node){
    if(head==NULL){
        head=new SLNode(node);
    }else{
        SLNode *newNode(new SLNode(node)), *current=head, *prev=NULL;
        while(newNode!=NULL){
            if(current==NULL){
                prev->setNextNode(newNode);
                newNode=NULL;
            }else if(newNode->getContents()<current->getContents()){
                if(prev==NULL){
                    head=newNode;
                }else{
                    prev->setNextNode(newNode);
                }
                newNode->setNextNode(current);
                newNode=NULL;
            }else{
                prev=current;
                current=prev->getNextNode();
            }
        }
    }
    size++;
}

//remove the first appearance of the parameter value;
//Param: int :: content to be found;
//Return: bool :: true on success or false if the value is not in the list
bool SList::removeFirst (int first){
    SLNode* prev=NULL;
    SLNode* current=head;
    while(current!=NULL){
        if(current->getContents()==first){
            if(prev==NULL){
                head=head->getNextNode();
                delete current;
            }else{
                prev->setNextNode(current->getNextNode());
            }
            size--;
            return true;
        }
        prev=current;
        current=current->getNextNode();
    }
    return false;
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
    while(current!=NULL){
        oss<<current->getContents();
        if(current->getNextNode()!=NULL)
            oss<<",";
        current=current->getNextNode();
    }
    cout<<oss.str()<<endl;
    return oss.str();
}