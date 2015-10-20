// Dylan Hall
// September 22 2015

#pragma once

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include "SLNode.h"
using namespace std;

template <typename sl>
class SList{
    public:
        //default constructor
        //Initializes: head ot NULL :: size to 0
        SList(){
            head=NULL;
            size=0;
        }
        
        //decontructor
        //calls clear function
        ~SList(){
            clear();
        }
        
        //creates node and points head to it
        //Param: int :: value of created node
        void insertHead(sl nodeVal){
            SLNode<sl>* oldHead = head;
            head=new  SLNode<sl>(nodeVal);
            head->setNextNode(oldHead);
            size++;
        }
        
        void insertTail(sl nodeVal){
            if(head==NULL){
                head=new SLNode<sl>(nodeVal);
            }else{
                SLNode<sl>* tail=head;
                while(tail->getNextNode()!=NULL){
                    tail=tail->getNextNode();
                }
                tail->setNextNode(new SLNode<sl>(nodeVal));
            }
            size++;
        }
        
        //deletes head node replacing it with the next node
        void removeHead(){
            if(head!=NULL){
                SLNode<sl>* remHead=head;
                head=head->getNextNode();
                delete remHead;
                size--;
            }
        }
        
        void removeTail(){
            if(head!=NULL){
                SLNode<sl>* tail=head;
                SLNode<sl>* prev=tail;
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
        void insert (sl node){
            if(head==NULL){
                head=new SLNode<sl>(node);
            }else{
                SLNode<sl> *newNode(new SLNode<sl>(node)), *current=head, *prev=NULL;
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
        bool removeFirst (sl first){
            SLNode<sl>* prev=NULL;
            SLNode<sl>* current=head;
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
        
        bool removeAll(sl value){
            bool rmvd=false;
            SLNode<sl>* prev=NULL;
            SLNode<sl>* current=head;
            while(current!=NULL){
                if(current->getContents()==value){
                    if(current==head){
                        prev=head;
                        current=current->getNextNode();
                        head=current;
                        delete prev;
                    }else{
                        prev->setNextNode(current->getNextNode());
                        delete current;
                        current=prev->getNextNode();
                    }
                    size--;
                    rmvd=true;
                }else{
                    prev=current;
                    current=current->getNextNode();
                }
            }
            cout<<"[1]"<<toString();
            return rmvd;
        }
        
        //deallocates memory and clear every node in list
        void clear(){
            while(head!=NULL){
                removeHead();
            }
        }
        
        //accessor
        //gets size of linked list
        //Return: unsigned int :: size of linked list
        unsigned int getSize() const{
            return size;
        }
        
        //converst all values, in order, into a single string
        //NUM1,NUM2,...,LASTNUM;
        //Return: string :: string containing all node values in order
        string toString() const{
            if(head==NULL)
                return "";
            SLNode<sl>* current=head;
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
        
    private:
        SLNode<sl>* head;
        unsigned int size;
};