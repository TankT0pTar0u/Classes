////////////////////////////////////////////////
/// Author   : Kevin Balmores
/// Date     : 11 - 6 - 2020
/// App Name : DOG APP
////////////////////////////////////////////////

#include <string>
#include <sstream>
using namespace std;

class LeggedMammal
{
private:
	string mName, mFur;
	short mLegs;
	bool mHasTail;
public:
	LeggedMammal(string _name, string _fur, short _legs, bool _hasTail);
	string getLeggedMammal();
};

LeggedMammal::LeggedMammal(string _name, string _fur, short _legs, bool _hasTail) 
{
	this->mName = _name;
	this->mFur = _fur;
	this->mLegs = _legs;
	this->mHasTail = _hasTail;
}

string LeggedMammal::getLeggedMammal()
{
	ostringstream s;
	s << "Name: " << mName << endl;
	s << "Fur: " << mFur << endl;
	s << "Legs: " << mLegs << endl;
	string yes = (mHasTail == true) ? "Yes" : "No";
	s << "Has Tail: " << yes << endl;
	return s.str();
}

