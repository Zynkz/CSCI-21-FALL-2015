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

bool BSTree::remove(int targ){
    if(root==NULL){
        return false;
    }
    return remove(targ, root);
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

//find node containing target integer
//if deleted, return true
//else, return false
bool BSTree::remove(int targ, BSTNode*& root){
    if(root->getContents()==targ){
        removeMax(targ, root);
        return true;
    }
    if(root->getRightChild()!=NULL&&remove(targ, root->getLeftChild())){
        return true;
    }
    if(root->getRightChild()!=NULL&&remove(targ, root->getRightChild())){
        return true;
    }
    return false;
    
}
    
//helper function for private remove function
void BSTree::removeMax(int& targ, BSTNode*& root){
    if(root->getRightChild()!=NULL){
        if(root->getRightChild()->getLeftChild()!=NULL){
            root->setContents(root->getRightChild()->getLeftChild()->getContents());
            removeMax(targ, root->getRightChild()->getLeftChild());
        }else{
            BSTNode* temp=root;
            root=root->getRightChild();
            if(temp->getLeftChild()!=NULL){
                root->setLeftChild(temp->getLeftChild());
            }
            delete temp;
        }
    }else if(root->getLeftChild()!=NULL){
        BSTNode* temp=root;
        root=root->getLeftChild();
        delete temp;
        
    }else{
        delete root;
        root=NULL;
    }
    --size;
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