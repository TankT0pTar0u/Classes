////////////////////////////////////////////////
/// Author   : Kevin Balmores
/// Date     : 11 - 6 - 2020
/// App Name : STUDENT APP
////////////////////////////////////////////////

#pragma once
#include "Person.h"

class Student :
    public Person
{
private:
    string mCourse, mUniversity;
    short mCollegeYear = 0;
public:
    Student(string _name, string _address, string _gender, string _occupation, short _age) :
        Person(_name, _address, _gender, _occupation, _age) {}
    
    void setCourse(string _course) { this->mCourse = _course; }

    void setUniversity(string _university) { this->mUniversity = _university; }

    void setCollegeYear(short _collegeYear) { this->mCollegeYear = _collegeYear; }

    string getCourse() { return mCourse; }

    string getUniversity() { return mUniversity; }
    
    short getCollegeYear() { return mCollegeYear; }
};

