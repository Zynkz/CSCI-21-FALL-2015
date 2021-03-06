#ifndef SLNode_H
#define SLNode_H

#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;
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