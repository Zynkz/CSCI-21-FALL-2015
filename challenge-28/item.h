/*
BASE class name: Item

private data members:

	name, string containing the name of the item
	value, unsigned int containing the value of the item
	
public function interface:

	one constructor, default arguments for name("item") and value(0)
	
	virtual destructor, does nothing
	
	setName
	setValue
	
	getName
	getValue
	
	toString, returns string with name and value
			  format --  NAME, $VALUE
	          EXAMPLE -- shoes, $25
*/
#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Item{
  public:
    //default constructor
    //name set to "item"
    //value set it 0
    Item(string nName="item", int nValue=0);
    
    //virtual deconstructor
    //functionless
    virtual ~Item();
    
    //set name equal to string::name
    void setName(string newStr);
    
    //set value equal to int::value
    void setValue(int newInt);
    
    //returns class variable string::name
    string getName();
    
    //return class variable int::value
    int getValue();
    
    //converts name and int to formatted string
    //format:: "NAME, $Value"
    string toString();
  protected:
    string name;
    unsigned int value;
};