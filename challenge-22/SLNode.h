#ifndef SLNode_H
#define SLNode_H

#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename sln>
class SLNode{
	public:
	    //default constructor
	    //Initialize: nextNode to NULL :: contents to 0
		SLNode(){
			nextNode=NULL;
			contents=0;
		}
		
		//overloaded constructor
		//Initializes: contents to parameters
		SLNode(sln parameter){
		    nextNode=NULL;
		    contents=parameter;
		}
		
		//deconstructor
		//Deletes/Deconstructs: SLNode*
		~SLNode(){
		    nextNode=NULL;
		}
		
		//mutator
		//sets contents to newContents
		//Param: int :: new contents of node
		void setContents(sln newContents){
		    contents=newContents;
		}
		
		//accessor
		//gets contents of node
		//Return: int :: contents of node
		 sln getContents(){
		    return contents;
		}
		
		//mutator
		//sets next node after this node
		//Param: SLNode* :: pointer to new next node
		void setNextNode(SLNode* newNextNode){
		    nextNode=newNextNode;
		}
		
		//accessor
		//gets next node pointer after this node
		//Return: SLNode* :: pointer of next node after current one
		SLNode* getNextNode(){
		    return nextNode;
		}
		
	private:
		SLNode* nextNode;
		sln contents;
};

#endif