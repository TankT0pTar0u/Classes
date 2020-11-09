////////////////////////////////////////////////
/// Author   : Kevin Balmores
/// Date     : 11 - 6 - 2020
/// App Name : STUDENT APP
////////////////////////////////////////////////

#include <string>
#include <sstream>
using namespace std;

class Person
{
private:
	string mName, mAddress, mGender, mOccupation;
	short mAge;
public:
	Person(string _name, string _address, string _gender, string _occupation, short _age);
	string getPerson();
};

Person::Person(string _name, string _address, string _gender, string _occupation, short _age) {
	this->mName = _name;
	this->mAddress = _address;
	this->mGender = _gender;
	this->mOccupation = _occupation;
	this->mAge = _age;
}

string Person::getPerson() {
	ostringstream s;
	s << " Name\t\t: " << mName << endl;
	s << " Address\t: " << mAddress << endl;
	s << " Gender\t\t: " <<mGender << endl;
	s << " Age\t\t: " << mAge << endl;
	s << " Occupation\t: " << mOccupation << endl;
	return s.str();
}


