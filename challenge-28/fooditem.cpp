#include"fooditem.h"

//default constructor
//sets name to "FoodItem" :: value to 0 :: calories to 0
FoodItem::FoodItem(string nName, int nValue, int nCal, string nUOM, float nUnits) : Item(nName, nValue){
    calories=nCal;
    unitOfMeasure=nUOM;
    units=nUnits;
}

//virtual deconstructor
//does nothing;w
FoodItem::~FoodItem(){}

//sets calories to nCal
void FoodItem::setCalories(int nCal){
    calories=nCal;
}

//sets unitOfMeasurement to new nUOM
void FoodItem::setUnitOfMeasure(string nUOMeas){
    unitOfMeasure=nUOMeas;
}

//sets units to nUnit
void FoodItem::setUnits(float nUnits){
    units=nUnits;
}

//returns calories
int FoodItem::getCalories(){
    return calories;
}

//returns UnitOfMeasurement
string FoodItem::getUnitOfMeasure(){
    return unitOfMeasure;
}

//returns units
float FoodItem::getUnits(){
    return units;
}

//converts name, value, units and UoM into a string
//float :: units :: 2 decimal places
//format :: "NAME, $VALUE, UNITS UNITSOFMEASUREMENT, CALORIES calories"
string FoodItem::toString(){
    ostringstream oss;
    oss.setf(ios::fixed);
    oss.setf(ios::showpoint);
    oss.precision(2);
    oss<<name<<", $"<<value<<", "<<units<<" "<<unitOfMeasure<<", "<<calories<<" calories";
    return oss.str();
}