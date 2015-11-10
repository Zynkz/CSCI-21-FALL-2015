#include"magicitem.h"

//default constructor
//sets name to "magicitem" :: value to 0 :: description to "no description" :: manaRequired to 0
//calls item constructor
MagicItem::MagicItem(string nName, int nValue, string nDes, int nManaReq) : Item(nName, nValue){
    description=nDes;
    manaRequired=nManaReq;
}

//default deconstructor
//does nothing
MagicItem::~MagicItem(){}

//sets description to nDes
void MagicItem::setDescription(string nDes){
    description=nDes;
}

//sets manaRequired to nManaReq
void MagicItem::setManaRequired(int nManaReq){
    manaRequired=nManaReq;
}

//returns string::description;
string MagicItem::getDescription(){
    return description;
}

//returns manaRequired
int MagicItem::getManaRequired(){
    return manaRequired;
}

//converts name, value, description, manaRquires to string
//returns::string
//format::"NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana"
string MagicItem::toString(){
    ostringstream oss;
    oss<<name<<", $"<<value<<", "<<description<<", requires "<<manaRequired<<" mana";
    return oss.str();
}