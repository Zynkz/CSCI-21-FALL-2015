#pragma once
#include"item.h"

/*
DERIVED class name: FoodItem (base Item)

private data members:

	calories, unsigned int
	unitOfMeasure, string (such as "ounces")
	units, float
	
public function interface:

	one constructor, default arguments for name("FoodItem"), value(0), calories(0),
	                 unitOfMeasure("nounits"), units(0); calls Item constructor
	                 in its initialization section with name and value
	virtual destructor, does nothing
	
	setCalories
	setUnitOfMeasure
	setUnits
	
	getCalories
	getUnitOfMeasure
	getUnits
	
	toString, returns string with name, value, units and unit of measure, calories; 
				 units formatted to exactly two decimal places
	          (uses Item::toString in its implementation)
			  format -- NAME, $VALUE, UNITS UNITOFMEASURE, CALORIES calories
			  EXAMPLE -- cookie, 1, 2.50 cookie(s), 250 calories
*/

class FoodItem:public Item{
    public:
        //default constructor
        //sets name to "FoodItem" :: value to 0 :: calories to 0 :: unitOfMeasure to "nounits" :: units to 0
        FoodItem(string nName="fooditem", int nValue=0, int nCal=0, string nUOM="nounits", float nUnits=0);
        
        //virtual deconstructor
        //does nothing;w
        virtual ~FoodItem();
        
        //sets calories to nCal
        void setCalories(int nCal);
        
        //sets unitOfMeasurement to new nUOM
        void setUnitOfMeasure(string nUOMeas);
        
        //sets units to nUnit
        void setUnits(float nUnits);
        
        //returns calories
        int getCalories();
        
        //returns UnitOfMeasurement
        string getUnitOfMeasure();
        
        //returns units
        float getUnits();
        
        //converts name, value, units and UoM into a string
        //float :: units :: 2 decimal places
        //format :: "NAME, $VALUE, UNITS UNITSOFMEASUREMENT, CALORIES calories"
        string toString();
    private:
        unsigned int calories;
        string unitOfMeasure;
        float units;
};