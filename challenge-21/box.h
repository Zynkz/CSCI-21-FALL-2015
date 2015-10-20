#include <iostream>
using namespace std;

/*
Define a "header only" template class named Box with:

- one data member -- contents (data type templated)
- overloaded constructor -- one parameter newContents to be assigned to contents
- getter (getContents) and setter (setContents)
- friend overloaded operator<<
*/

template <class b_type> 
class Box {
    public:
        Box();
        Box(b_type newContents){contents=newContents;}
        b_type getContents();
        void setContents(const b_type newContents);
        template <class s_type> 
        friend ostream& operator<<(ostream& os, Box<s_type>& box);
    private:
         b_type contents;
};

template <class b_type> 
b_type Box<b_type>::getContents(){
    return contents;
}

template <class b_type>
void Box<b_type>::setContents(b_type newContents){
    contents=newContents;
}

template <class s_type>
ostream& operator<<(ostream& os, Box<s_type>& box){
    return os<<box.getContents();
}