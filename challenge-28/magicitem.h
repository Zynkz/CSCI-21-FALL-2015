/*
DERIVED class name: MagicItem (base Item)

private data members:

	description, string
	manaRequired, unsigned int
	
public function interface:

	one constructor, default arguments for name("magicitem"), value(0),
	                 description("no description"), manaRequired(0); 
						  calls Item constructor in its initialization section 
						  with name and value
	virtual destructor, does nothing
	
	setDescription
	setManaRequired

	getDescription
	getManaRequired
	
	toString, returns string with name, value, description, mana required
	          (uses Item::toString in its implementation)
			  format -- NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana
			  EXAMPLE -- hat, 10, made of felt, requires 2 mana
*/
#pragma once
#include"item.h"

class MagicItem:public Item{
    public:
        //default constructor
        //sets name to "magicitem" :: value to 0 :: description to "no description" :: manaRequired to 0
        //calls item constructor
        MagicItem(string nName="magicitem", int nValue=0, string nDes="no description", int nManaReq=0);
        
        //default deconstructor
        //does nothing
        virtual ~MagicItem();
        
        //sets description to nDes
        void setDescription(string nDes);
        
        //sets manaRequired to nManaReq
        void setManaRequired(int nManaReq);
        
        //returns string::description;
        string getDescription();
        
        //returns manaRequired
        int getManaRequired();
        
        //converts name, value, description, manaRquires to string
        //returns::string
        //format::"NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana"
        string toString();
        
    private:
        string description;
        unsigned int manaRequired;
};