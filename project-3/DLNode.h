/*

    data members: contents (int), pointer to previous node, pointer to next node
    DLNode () : initialize contents to zero, next and previous to NULL
    DLNode (int newContents) : initialize contents to newContents, next and previous to NULL
    virtual ~DLNode () : nothing to be done
    void setContents (int newContents)
    void setNext (DLNode* newNext)
    void setPrevious (DLNode* newPrevious)
    int getContents () const
    DLNode* getNext () const
    DLNode* getPrevious () const

*/

#include<iostream>
using namespace std;

class DLNode{
  public:
    DLNode();
    DLNode(int nContents);
    virtual ~DLNode();
    
    void setContents(int nContents);
    void setNext(DLNode* nNext);
    void setPrev(DLNode* nPrev);
    
    int getContents();
    DLNode* getNext();
    DLNode* getPrev();
  private:
    int contents;
    DLNode* next;
    DLNode* prev;
};