#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();
void testPrizeConstr();
void testBoxConstr();
void testPrizeAM();
void testBoxAM();

class Prize {
    public:
    
        //default Constructor
        //initialize: prizeName to "NO NAME" :: prizeValue to 0
        Prize();
        
        //Overloaded constructor
        //Param: string itemName  :: desired name of prize
        //Param: int itemValue  :: desired value of prize
        //initializes: prizeName to itemName :: prizeValue to itemValue
        Prize(string itemName, int itemValue);
        
        //default Deconstructor
        ~Prize();
        
        //overload operator
        //allows comparison between Prize objects
        //Param: const Prize reference 
        //Param: const Prize reference
        //Return: bool :: true if same -- false if different
        friend bool operator==(const Prize & a,const Prize & b);
        
        //sets name of prize
        //Param: string newPrizeName :: desired new name of prize
        void setPrizeName(string newPrizeName);
        
        //gets name of prize
        //Return: string :: name of prize
        string getPrizeName();
        
        //sets value of prize
        //Param: int :: new value of prize
        void setPrizeValue(int newPrizeValue);
        
        //gets value of prize
        //Return: int :: value of prize
        int getPrizeValue();

    private:
        string prizeName;
        unsigned int prizeValue;
        
};

Prize::Prize(){
    prizeName="NO NAME";
    prizeValue=0;
}

Prize::Prize(string itemName, int itemValue){
    prizeName=itemName;
    prizeValue=itemValue;
}

Prize::~Prize(){}

void Prize::setPrizeName(string newPrizeName){
    prizeName=newPrizeName;
}

string Prize::getPrizeName(){
    return prizeName;
}

void Prize::setPrizeValue(int newPrizeValue){
    prizeValue=newPrizeValue;
}

int Prize::getPrizeValue(){
    return prizeValue;
}

bool operator==(const Prize& a,const Prize& b){
    if(a.prizeName==b.prizeName){
        if(a.prizeValue==b.prizeValue){
            return true;
        }
    }
    return false;
}

class Box {
    public:
    
        //default constructor
        //Initialize: boxNumber to 0 :: boxColor to "NO COLOR" :: prizeCapacity to 0 :: prizes[] to size prizeCapacity
        Box();
        
        //overloaded constructor
        //Param: int :: box number
        //Param: string :: color of box
        //Param: int :: maximum capacity of box
        //Initialize: boxNumber to num :: boxColor to color :: prizeCapacity to cap :: prizes[] to size prizeCapacity
        Box(int num, string color, int cap);
        
        //default deconstructor
        //Delete/Deallocate: prizes 
        ~Box();
        
        //mutator
        //Param: int :: new number of box
        void setBoxNumber(int num);
        
        //accessor
        //Return: int : number of box
        int getBoxNumber();
        
        //mutator
        //Param: string :: new color of box
        void setBoxColor(string color);
        
        //accessor
        //Return: string color of box
        string getBoxColor();
        
        //accessor
        //Return: int :: number of prizes that can be stored in the Prize array "prizes"
        int getPrizeCapacity();
        
        //accessor
        //Return: int :: amount of prizes currently stored in Prize array "prizes"
        int getPrizeCount();
        
        //adds prize or Prize array "prizes"
        //Param: Prize :: prize to be added to prize array "prizes"
        //Return: bool :: successful/unsuccessful
        bool addPrize(Prize prize);
        
        //accessor
        //Param: unsigned int :: position in Prize array "prizes"
        //Return: Prize reference :: reference of prize at index of Prize array "prizes"
        Prize& getPrize(unsigned int index);
        
        //removes Prize from Prize array "prizes" and defrags array
        //Return: Prize :: Prize at index of Prize array "prizes"
        Prize removePrize(unsigned int index);

    private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};

Box::Box(){
    boxNumber=0;
    boxColor="NO COLOR";
    prizeCapacity=5;
    prizes=new Prize[prizeCapacity];
}

Box::Box(int num, string color, int cap){
    boxNumber=num;
    boxColor=color;
    prizeCapacity=cap;
    prizes=new Prize[prizeCapacity];
}

Box::~Box(){
    delete[] prizes;
    prizes=NULL;
}

void Box::setBoxNumber(int num){
    boxNumber=num;
}

int Box::getBoxNumber(){
    return boxNumber;
}

void Box::setBoxColor(string color){
    boxColor=color;
}

string Box::getBoxColor(){
    return boxColor;
}

int Box::getPrizeCapacity(){
    return prizeCapacity;
}

int Box::getPrizeCount(){
    return prizeCount;
}

bool Box::addPrize(Prize prize){
    if(prizeCount<prizeCapacity){
        prizes[prizeCount]=prize;
        prizeCount++;
        return true;
    }
    return false;
}

Prize& Box::getPrize(unsigned int index){
    if(index<prizeCount){
        return prizes[index];
    }
    return scratch;
}

Prize Box::removePrize(unsigned int index){
    if(index<prizeCount){
        Prize atIndex=prizes[index];
        prizeCount--;
        prizes[index]=prizes[prizeCount];
        return atIndex;
    }
    return scratch;
}

int main (int argc, char* argv[]) {
	// CODE HERE -- INTERACTIVE TEST
    // add additional functions as needed to support interactive test
    int test;
    cout<<"Interactive Unit Test\n"
        <<"(1)Prize Construction\n"
        <<"(2)Box Construction\n"
        <<"(3)Prize accessors/mutators\n"
        <<"(4)Box accessors/mutators\n"
        <<"(5)Automated Unit Test\n";
    cin>>test;
    switch(test){
        case 1: testPrizeConstr();
        case 2: testBoxConstr();
        case 3: testPrizeAM();
        case 4: testBoxAM();
        case 5: unittest();
    }
    return 0;
}

void testPrizeConstr(){
    cout<<"Enter "
}

void testBoxConstr{
    
}

void testPrizeAM{
    
}

void testBoxAM{
    
}

/*
 * Unit testing functionb1. Do not alter.
 */

void unittest () {

    unsigned short utCount = 35;
    unsigned short utPassed = 0;

    cout << "\nSTARTING UNIT TEST\n\n";
	
    Box b1;
    Box b2(42, "blue", 3);
	
    cout << "** TESTING DEFAULT BOX **\n\n";
	
    try {
        btassert<bool>(b1.getBoxNumber() == 0);
        cout << "Passed TEST 1: Box getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 1 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b1.getBoxColor() == "NO COLOR");
        cout << "Passed TEST 2: Box getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 2 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b1.getPrizeCapacity() == 5);
        cout << "Passed TEST 3: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 3 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b1.getPrizeCount() == 0);
        cout << "Passed TEST 4: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 4 Box getPrizeCount() #\n";
    }
	
    b1.setBoxNumber(99);
    try {
        btassert<bool>(b1.getBoxNumber() == 99);
        cout << "Passed TEST 5: Box setBoxNumber()/getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 5 Box setBoxNumber()/getBoxNumber() #\n";
    }
	
    b1.setBoxColor("red");
    try {
        btassert<bool>(b1.getBoxColor() == "red");
        cout << "Passed TEST 6: Box setBoxColor()/getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 6 Box setBoxColor()/getBoxColor() #\n";
    }
    
    cout << "\n** TESTING CUSTOM BOX **\n\n";
	
    try {
        btassert<bool>(b2.getBoxNumber() == 42);
        cout << "Passed TEST 7: Box getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 7 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b2.getBoxColor() == "blue");
        cout << "Passed TEST 8: Box getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 8 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 9: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 9 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCount() == 0);
        cout << "Passed TEST 10: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 10 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(0) == Prize());
        cout << "Passed TEST 11: Box getPrize(0)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 11 Box getPrize(0) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(0) == Prize());
        cout << "Passed TEST 12: Box removePrize(0)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 12 Box removePrize(0) #\n";
    }
    
    b2.addPrize(Prize("BRONZE PRIZE", 1));
    try {
        btassert<bool>(b2.getPrizeCount() == 1);
        cout << "Passed TEST 13: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 13 Box addPrize()/getPrizeCount() #\n";
    }
    
    b2.addPrize(Prize("SILVER PRIZE", 100));
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 14: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 14 Box addPrize()/getPrizeCount() #\n";
    }
        
    b2.addPrize(Prize("GOLD PRIZE", 1000));
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 15: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 15 Box addPrize()/getPrizeCount() #\n";
    }
    
    try {
        btassert<bool>(b2.addPrize(Prize("DIAMOND PRIZE", 999)) == false);
        cout << "Passed TEST 16: Box addPrize(ARRAY FULL)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 16 Box addPrize(ARRAY FULL) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(1) == Prize("SILVER PRIZE", 100));
        cout << "Passed TEST 17: Box getPrize(1)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 17 Box getPrize(1) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize("GOLD PRIZE", 1000));
        cout << "Passed TEST 18: Box removePrize(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 18 Box removePrize(2) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 19: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 19 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize());
        cout << "Passed TEST 20: Box removeCargo(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 20 Box removeCargo(2) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(2) == Prize());
        cout << "Passed TEST 21: Box getPrize(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 21 Box getPrize(2) #\n";
    }
	
    try {
        btassert<bool>(b2.addPrize(Prize("RUBY PRIZE", 9999)) == true);
        cout << "Passed TEST 22: Box addPrize(\"RUBY PRIZE\", 9999)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 22 Box addPrize(\"RUBY PRIZE\", 9999) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 23: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 23 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 24: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 24 Box getPrizeCapacity() #\n";
    }
	
    cout << "\n** TESTING PRIZE **\n\n";
	
    Prize p1;
	
    try {
        btassert<bool>(p1.getPrizeName() == "NO NAME");
        cout << "Passed TEST 25: Prize getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 25 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p1.getPrizeValue() == 0);
        cout << "Passed TEST 26: Prize getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 26 Prize getPrizeValue() #\n";
    }
	
    p1.setPrizeName("FOOD PRIZE");
    try {
        btassert<bool>(p1.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 27: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 27 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p1.setPrizeValue(17);
    try {
        btassert<bool>(p1.getPrizeValue() == 17);
        cout << "Passed TEST 28: Prize setPrizeValue(17)/getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 28 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
	
    Prize p2("HAT PRIZE", 50);
	
    try {
        btassert<bool>(p2.getPrizeName() == "HAT PRIZE");
        cout << "Passed TEST 29: Prize getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 29 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p2.getPrizeValue() == 50);
        cout << "Passed TEST 30: Prize getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 30 Prize getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 31: !(Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 31 !(Prize == Prize) #\n";
    }
    
    p2.setPrizeName("FOOD PRIZE");
    try {
        btassert<bool>(p2.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 32: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 32 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p2.setPrizeValue(17);
    try {
        btassert<bool>(p2.getPrizeValue() == 17);
        cout << "Passed TEST 33: Prize setPrizeValue(17)/getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 33 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(p1 == p2);
        cout << "Passed TEST 34: (Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 34 (Prize == Prize) #\n";
    }
    
    p2.setPrizeValue(1);
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 35: !(Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 35 !(Prize == Prize) #\n";
    }
	
    cout << "\nUNIT TEST COMPLETE\n\n";
    
    cout << "PASSED " << utPassed << " OF " << utCount << " UNIT TEST";
    if (utCount > 1) {
        cout << "S";
    }
    cout << "\n\n";
}

template <typename X, typename A>
void btassert (A assertion) {
    if (!assertion)
        throw X();
}
