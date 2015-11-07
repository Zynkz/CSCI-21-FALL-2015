/*

    data members: count of nodes, pointer to head node, pointer to tail node
    DLList () : initialize count to zero, head and tail to NULL
    ~DLList () : call clear function
    unsigned int getSize () const : return count
    void pushFront (int newContents) : create new DLNode with newContents and attach at head; *should not be called in conjunction with insert
    void pushBack (int newContents) : create new DLNode with newContents and attach at tail; *should not be called in conjunction with insert
    void insert (int newContents) : create new DLNode with newContents and insert in ascending (based on newContents) order; *should not be called in conjunction with pushFront or pushBack
    int getFront () const: return the value of the contents of the head node; throw an exception (throw "LIST EMPTY") if the list is empty
    int getBack () const : return the value of the contents of the tail node; throw an exception (throw "LIST EMPTY") if the list is empty
    bool get (int target) const : return true if target is in list, else return false
    void popFront () : remove current head node; do nothing if list is empty
    void popBack () : remove current tail node; do nothing if list is empty
    bool removeFirst (int target) : remove the first instance of a DLNode containing target; do nothing if target is not found
    bool removeAll (int target) : remove all instances of DLNode containing target; do nothing if target is not found
    void clear () : clear all nodes from list, reset count to zero, set head and tail to NULL
    friend ostream& operator<< (ostream& out, const DLList& src) : display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out

*/

#pragma once
#include"DLNode.h"

class DLList{
    public:
    
        //default constructor
        //sets count to 0, head and tail to NULL
        DLList();
        
        //deconstructor
        //calls clear function
        ~DLList();
        
        //returns int::count
        unsigned int getSize();
        
        //sets front equal to new node
        //sets next node equal to old front
        void pushFront(int nContents);
        
        //sets back equal to new node
        //sets previous node of old back node to new node back node
        void pushBack(int nContents);
        
        //creats new node and inserts it in ascending order
        void insert(int nContents);
        
        //return int::contents of DLNode::head
        int getFront() const;
        
        //retruns int::contents of DLNode::tail
        int getBack() const;
        
        //search DLList for target integer
        //returns true if in list :: false if not
        bool get(int target) const;
        
        //removes front node and sets head equal to the next node
        void popFront();
        
        //removes back node and sets tail equal to the previous node
        void popBack();
        
        //removes first instace of target integer
        //returns true if removed :: false if not
        bool removeFirst(int target);
        
        //removes all instances of target integer
        //returnd true if removed :: false if not
        bool removeAll(int target);
        
        //removes all nodes from list
        void clear();
        
        //display contents of the list to output stream
        //format :: NUM1,NUM2,NUM3,...,NUMX
        friend ostream& operator<< (ostream& out, const DLList& src);
        
    private:
        int count;
        DLNode* head;
        DLNode* tail;
};