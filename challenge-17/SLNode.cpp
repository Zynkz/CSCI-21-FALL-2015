#ifndef SLNode_H
#define SLNode_H

#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;

/*default constructor, sets values nextNode(NULL) and contents(0)
	overloaded constructor, int parameter assigned to contents
	
	destructor, sets nextNode to NULL
	
	void setContents (int)
	int getContents () const
	
	void setNextNode (SLNode*)
	
	SLNode* getNextNode () const
*/
class SLNode{
	public:
	    //default constructor
	    //Initialize: nextNode to NULL :: contents to 0
		SLNode();
		
		//overloaded constructor
		//Initializes: contents to parameters
		SLNode(int parameter);
		
		//deconstructor
		//Deletes/Deconstructs: SLNode*
		~SLNode();
		
		//mutator
		//sets contents to newContents
		//Param: int :: new contents of node
		void setContents(int newContents);
		
		//accessor
		//gets contents of node
		//Return: int :: contents of node
		int getContents();
		
		//mutator
		//sets next node after this node
		//Param: SLNode* :: pointer to new next node
		void setNextNode(SLNode* newNextNode);
		
		//accessor
		//gets next node pointer after this node
		//Return: SLNode* :: pointer of next node after current one
		SLNode* getNextNode();
	private:
		SLNode* nextNode;
		int contents;
};

#endif

//default constructor
//Initialize: nextNode to NULL :: contents to 0
SLNode::SLNode(){
    nextNode=NULL;
    contents=0;
}

//overloaded constructor
//Initializes: contents to parameters
SLNode::SLNode(int parameter){
    nextNode=NULL;
    contents=parameter;
}

//deconstructor
//Deletes/Deconstructs: SLNode*
SLNode::~SLNode(){
    nextNode=NULL;
}

//mutator
//sets contents to newContents
//Param: int :: new contents of node
void SLNode::setContents(int newContents){
    contents=newContents;
}

//accessor
//gets contents of node
//Return: int :: contents of node
int SLNode::getContents(){
    return contents;
}

//mutator
//sets next node after this node
//Param: SLNode* :: pointer to new next node
void SLNode::setNextNode(SLNode* newNextNode){
    nextNode=newNextNode;
}

//accessor
//gets next node pointer after this node
//Return: SLNode* :: pointer of next node after current one
SLNode* SLNode::getNextNode(){
    return nextNode;
}