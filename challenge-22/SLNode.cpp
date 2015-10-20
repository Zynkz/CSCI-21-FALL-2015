//#include "SLNode.h"

SLNode::SLNode(){
    nextNode=NULL;
    contents=0;
}

SLNode::SLNode(int parameter){
    nextNode=NULL;
    contents=parameter;
}

SLNode::~SLNode(){
    nextNode=NULL;
}

void SLNode::setContents(int newContents){
    contents=newContents;
}

int SLNode::getContents(){
    return contents;
}

void SLNode::setNextNode(SLNode* newNextNode){
    nextNode=newNextNode;
}

SLNode<sln>* SLNode::getNextNode(){
    return nextNode;
}