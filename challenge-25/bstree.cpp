#include "bstree.h"

//default constructor
BSTree::BSTree(){
    root=NULL;
    size=0;
}

//deconstructor
BSTree::~BSTree(){
    clear();
}

//calls private function insert(int toInstert, BSTNode* root)
bool BSTree::insert(int toContents){
    return insert(toContents, root);
}

//calls private function clear(root)
void BSTree::clear(){
    clear(root);
}

//returns: int contents
unsigned int BSTree::getSize() const{
    return size;
}

//calls private function inOrder(root, ostream&)
void BSTree::inOrder(ostream& oss){
    inOrder(root, oss);
}

//creates new node with contents set to toContents
//
//return: true if inserted :: false if already exists
bool BSTree::insert(int toContents, BSTNode*& current){
    if(current==NULL){
        current=new BSTNode(toContents);
        size++;
        return true;
    }
    if(toContents<current->getContents()){
        return insert(toContents, current->getLeftChild());
    }else if(toContents>current->getContents()){
        return insert(toContents, current->getRightChild());
    }else{
        return false;
    }
}

//clears all contents of tree
void BSTree::clear(BSTNode*& root){
    if(root==NULL){
        return;
    }
    if(root->getLeftChild()!=NULL){
        clear(root->getLeftChild());
    }
    if(root->getRightChild()!=NULL){
        clear(root->getRightChild());
    }
    delete root;
    root=NULL;
    size--;
}

//Inserts contents of tree to output stream inascending order, separated by spaces
void BSTree::inOrder(BSTNode* root, ostream& oss){
    if(root==NULL){
        return;
    }
    if(root->getLeftChild()!=NULL){
        inOrder(root->getLeftChild(), oss);
    }
    oss<<root->getContents()<<" ";
    if(root->getRightChild()!=NULL){
        inOrder(root->getRightChild(), oss);
    }
}