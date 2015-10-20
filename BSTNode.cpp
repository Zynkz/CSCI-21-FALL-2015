#include "BSTNode.h"

//default constructor
    //initialize: leftChild to NULL :: rightChild to NUll :: contents to 0
    BSTNode(){
        leftChild=NULL;
        rightChild=NULL;
        contents=0;
    }
    
    //overloaded constructor
    //initializes: leftChild to NULL :: rightChild to NUll :: contents to parameter
    BSTNode::BSTNode(int parameter){
        leftChild=NULL;
        rightChlid=NULL;
        contents=parameter;
    }
    
    //deconstructor
    //sets rightChlid, leftChild to NULL
    BSTNode::~BSTNode(){
        leftChild=NULL
        rightChlid=NULL
    }
    
    //mutator
    //sets contents to newContents
    void BSTNode::setContents(int newContents){
        contents=newContents;
    }
    
    //accessor
    // gets contents
    int BSTNode::getContents() const{
        return contents;
    }
    
    int BSTNode::&getContents(){
        return contents;
    }
    
    //mutator
    //sets leftChild to newLeft
    void BSTNode::setLeftChild(BSTNode* newLeft){
        leftChild=newLeft;
    }
    
    //mutator
    //sets rightChild to newRight
    void BSTNode::(BSTNode* newRight){
        rightChild=newRight;
    }
    
    //accessor
    //gets leftChild
    BSTNode* BSTNode::getLeftChild() const{
        return leftChild
    }
    
    BSTNode*& BSTNode::getLeftChild(){
        return leftChild;
    }
    
    //accessor
    //gets rightChild
    BSTNode* BSTNode::getRightChild() const{
        return rightChild;
    }
    
    BSTNode*& BSTNode::getRightChild(){
        return leftChild;
    }