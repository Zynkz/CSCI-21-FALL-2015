/*
Declare and implement a class that provides the following interface EXACTLY.

class name: BSTNode

private data members:

	leftChild, BSTNode*
	rightChild, BSTNode*
	contents, int used to store the data contents of this BSTNode

public function interface:

	default constructor, sets values leftChild(NULL), rightChild(NULL), and contents(0)
	overloaded constructor, int parameter assigned to contents
	
	destructor, sets leftChild and rightChild to NULL
	
	void setContents (int)
	
	int getContents () const
	int& getContents ()
	
	void setLeftChild (BSTNode*)
	void setRightChild (BSTNode*)
	
	BSTNode* getLeftChild () const
	BSTNode*& getLeftChild ()
	
	BSTNode* getRightChild () const
	BSTNode*& getRightChild ()
*/

#include <iostream>
#include <string>

class BSTNode{
  public:
    //default constructor
    //initialize: leftChild to NULL :: rightChild to NUll :: contents to 0
    BSTNode();
    
    //overloaded constructor
    //initializes: leftChild to NULL :: rightChild to NUll :: contents to parameter
    BSTNode(int parameter);
    
    //deconstructor
    //sets rightChlid, leftChild to NULL
    ~BSTNode();
    
    //mutator
    //sets contents to newContents
    void setContents(int newContents);
    
    //accessor
    // gets contents
    int getContents() const;
    int &getContents();
    
    //mutator
    //sets leftChild to newLeft
    void setLeftChild(BSTNode* newLeft);
    
    //mutator
    //sets rightChild to newRight
    void setRightChild(BSTNode* newRight);
    
    //accessor
    //gets leftChild
    BSTNode* getLeftChild() const;
    BSTNode*& getLeftChild();
    
    //accessor
    //gets rightChild
    BSTNode* getRightChild() const;
    BSTNode*& getRightChild();
    
  private:
    BSTNode* leftChild;
    BSTNode* rightChild;
    int contents;
};