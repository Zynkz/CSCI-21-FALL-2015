// Dylan Hall
// September 22 2015

#pragma once

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include "SLNode.h"
using namespace std;

class SList{
    public:
        //default constructor
        //Initializes: head ot NULL :: size to 0
        SList();
        
        //decontructor
        //calls clear function
        ~SList();
        
        //creates node and points head to it
        //Param: int :: value of created node
        void insertHead(int nodeVal);
        
        //points last SLNode in SList to new SLNode
        //Param: int :: value of new SLNode
        void insertTail(int nodeVal);
        
        //deletes head node replacing it with the next node
        void removeHead();
        
        //deletes last SLNode in SList
        void removeTail();
        
        //insert at position
        //Param: int :: position to be inserted at
        void insert (int pos);
	
        //remove the first appearance of the parameter value;
        //Param: int :: content to be found;
        //Return: bool :: true on success or false if the value is not in the list
        bool removeFirst (int first);
        
        //deallocates memory and clear every node in list
        void clear();
        
        //accessor
        //gets size of linked list
        //Return: unsigned int :: size of linked list
        unsigned int getSize() const;
        
        //converst all values, in order, into a single string
        //Return: string :: string containing all node values in order
        string toString() const;
    private:
        SLNode* head;
        unsigned int size;
};