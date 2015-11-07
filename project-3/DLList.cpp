#include"DLList.h"

//default constructor
//sets count to 0, head and tail to NULL
DLList::DLList(){
    count=0;
    head=NULL;
    tail=NULL;
}

//deconstructor
//calls clear function
DLList::~DLList(){
    clear();
}

//returns int::count
unsigned int DLList::getSize(){
    return count;
}

//sets front equal to new node
//sets next node equal to old front
void DLList::pushFront(int nContents){
    if(head==NULL){
        head=new DLNode(nContents);
        tail=head;
    }else{
        head->setPrev(new DLNode(nContents));
        head->getPrev()->setNext(head);
        head=head->getPrev();
    }
    count++;
}

//sets back equal to new node
//sets previous node of old back node to new node back node
void DLList::pushBack(int nContents){
    if(head==NULL){
        head=new DLNode(nContents);
        tail=head;
    }else{
        tail->setNext(new DLNode(nContents));
        tail->getNext()->setPrev(tail);
        tail=tail->getNext();
    }
    count++;
}

//creates new node and inserts it in ascending order
void DLList::insert(int nContents){
    DLNode* current=head;
    if(head==NULL){
        head=new DLNode(nContents);
        tail=head;
    }else{
        while(current!=NULL){
            if(nContents<=current->getContents()){
                if(current->getPrev()==NULL){
                    current->setPrev(new DLNode(nContents));
                    current->getPrev()->setNext(current);
                    head=current->getPrev();
                }else{
                    current->getPrev()->setNext(new DLNode(nContents));
                    current->setPrev(current->getPrev()->getNext());
                }
                count++;
                return;
            }else if(current->getNext()==NULL){
                current->setNext(new DLNode(nContents));
                tail=current->getNext();
                count++;
                return;
            }else{
                current=current->getNext();
            }
        }
    }
    
}

//return int::contents of DLNode::head
int DLList::getFront() const{
    return head->getContents();
}

//retruns int::contents of DLNode::tail
int DLList::getBack() const{
    return tail->getContents();
}

//search DLList for target integer
//returns true if in list :: false if not
bool DLList::get(int target) const{
    DLNode* current=head;
    while(current!=NULL){
        if(current->getContents()==target){
            return true;
        }
        current=current->getNext();
    }
    return false;
}

//removes front node and sets head equal to the next node
void DLList::popFront(){
    if(head!=NULL){
        DLNode* toDel=head;
        head=head->getNext();
        delete toDel;
        if(head!=NULL){
            head->setPrev(NULL);
        }else{
            tail=NULL;
        }
        count--;
    }
}

//removes back node and sets tail equal to the previous node
void DLList::popBack(){
    if(tail!=NULL){
        DLNode* toDel=tail;
        tail=tail->getPrev();
        delete toDel;
        if(tail!=NULL){
            tail->setNext(NULL);
        }else{
            head=NULL;
        }
        count--;
    }
}

//removes first instace of target integer
//returns true if removed :: false if not
bool DLList::removeFirst(int target){
    DLNode* current=head;
    while(current!=NULL){
        if(current->getContents()==target){
            if(current->getPrev()!=NULL){
                current->getPrev()->setNext(current->getNext());
            }
            if(current->getNext()!=NULL){
                current->getNext()->setPrev(current->getPrev());
            }
            delete current;
            count--;
            return true;
        }
        current=current->getNext();
    }
    return false;
}

//removes all instances of target integer
//returnd true if removed :: false if not
bool DLList::removeAll(int target){
    DLNode* current=head;
    bool rmvd=false;
    while(current!=NULL){
        if(current->getContents()==target){
            if(current!=head){
                current->getPrev()->setNext(current->getNext());
            }
            if(current!=tail){
                current->getNext()->setPrev(current->getPrev());
            }
            if(current==head){
                head=current->getNext();
            }
            if(current==tail){
                tail=current->getPrev();
            }
            DLNode* toDel=current;
            current=current->getNext();
            delete toDel;
            count--;
            rmvd=true;
        }else{
            current=current->getNext();
        }
    }
    return rmvd;
}

//removes all nodes from list
void DLList::clear(){
    if(this!=NULL){
        while(tail!=head){
            tail=tail->getPrev();
            delete tail->getNext();
        }
        delete head;
        count=0;
        head=NULL;
        tail=NULL;
    }
}

//display contents of the list to output stream
//format :: NUM1,NUM2,NUM3,...,NUMX
ostream& operator<< (ostream& out, const DLList& src){
    DLNode* current=src.head;
    if(src.head==NULL){
        out<<"LIST EMPTY";
    }else{
        while(current!=NULL){
            out<<current->getContents();
            if(current->getNext()!=NULL){
                out<<",";
            }
            current=current->getNext();
        }
    }
    return out;
}