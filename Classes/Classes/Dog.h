////////////////////////////////////////////////
/// Author   : Kevin Balmores
/// Date     : 11 - 6 - 2020
/// App Name : DOG APP
////////////////////////////////////////////////

#pragma once
#include "LeggedMammal.h"

class Dog :
    public LeggedMammal
{
private:
    string mBreed, mSize;
    bool mIsRegister = false;
public:
    Dog(string _name, string _fur, short _legs, bool _hasTail) :
        LeggedMammal(_name, _fur, _legs, _hasTail) {}
    
    void setBreed(string _breed) { this->mBreed = _breed; }

    void setSize(string _size) { this->mSize = _size; }

    void setIsRegister(bool _isRegister) { this->mIsRegister = _isRegister; }

    string getBreed() { return mBreed; }

    string getSize() { return mSize; }

    bool getIsRegister() { return mIsRegister; }
};

