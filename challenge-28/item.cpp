#include"item.h"

//default constructor
//name set to "item"
//value set it 0
Item::Item(string nName, int nValue){
    name=nName;
    value=nValue;
}

//virtual deconstructor
//functionless
Item::~Item(){}

//set name equal to string::name
void Item::setName(string newStr){
    name=newStr;
}

//set value equal to int::value
void Item::setValue(int newInt){
    value=newInt;
}

//returns class variable string::name
string Item::getName(){
    return name;
}

//return class variable int::value
int Item::getValue(){
    return value;
}

//converts name and int to formatted string
//format:: "NAME, $Value"
string Item::toString(){
    ostringstream oss;
    oss<<name<<", $"<<value;
    return oss.str();
}