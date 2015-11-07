#include"DLNode.h"

DLNode::DLNode(){
    contents=0;
    next=NULL;
    prev=NULL;
}

DLNode::DLNode(int nContents){
    contents=nContents;
    next=NULL;
    prev=NULL;
}

DLNode::~DLNode(){}

void DLNode::setContents(int nContents){
    contents=nContents;
}

void DLNode::setNext(DLNode* nNext){
    next=nNext;
}

void DLNode::setPrev(DLNode* nPrev){
    prev=nPrev;
}

int DLNode::getContents(){
    return contents;
}

DLNode* DLNode::getNext(){
    return next;
}

DLNode* DLNode::getPrev(){
    return prev;
}