/*Declare and implement a class that provides the following interface EXACTLY.

class name: BSTree

private data members:

	root, BSTNode* that points to the root node of a binary search tree
	size, unsigned int the number of nodes in the tree

public function interface:

	default constructor, sets values root(NULL) and size(0)
	
	destructor, calls the clear function
	
	bool insert (int), calls private function insert(int, root)
	
	void clear (), call private function clear(root)
	
	unsigned int getSize () const
	
	void inOrder (ostream&), call private function inOrder(root, ostream&)
	
private function interface:

	bool insert (int, BSTNode*&), create a new BSTNode and insert it into the tree, returns 
	               true; if integer is already in the true, does not insert, returns false
	
	void clear (BSTNode*&), clear the entire contents of the tree, freeing all memory
	               associated with all nodes
	
	void inOrder (BSTNode*, ostream&), insert onto an output stream the data in all nodes in 
					the tree, in ascending order, separated by spaces (there should be a space 
					after the last output value)
*/

#include<iostream>
#include"BSTNode.h"
using namespace std;

class BSTree{
  public:
    BSTree();
    ~BSTree();
    
    //calls private function insert(int toInstert, BSTNode* root)
        //creates new node with contents set to toContents
    bool insert(int toContents);
    
    //calls private function clear(root)
        //clears all contents of tree
    void clear();
    
    //returns: int contents
    unsigned int getSize() const;
    
    //calls private function inOrder(root, ostream&)
        //Inserts contents of tree to output stream inascending order, separated by spaces
    void inOrder (ostream& oss);
  private:
    BSTNode* root;
    unsigned int size;
    
    bool insert(int toContents, BSTNode*& toRoot);
    void clear(BSTNode*& current);
    void inOrder(BSTNode* toRoot, ostream& oss);
};