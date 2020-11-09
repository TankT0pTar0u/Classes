////////////////////////////////////////////////
/// Author   : Kevin Balmores
/// Date     : 11 - 6 - 2020
/// App Name : DOG | STUDENT APP
////////////////////////////////////////////////

#include <iostream>
#include "Student.h"
//#include "Dog.h"

using namespace std;

int main()
{
    Student student("Kevin Balmores", "Philippines", "Male", "Hikikomori", 26);
    student.setCourse("Bachelor of Science in Computer Science");
    student.setUniversity("AMA Online University");
    student.setCollegeYear(1);
    string year;
    if (student.getCollegeYear() == 1) {
        year = "Freshman";
    }
    else if (student.getCollegeYear() == 2) {
        year = "Sophomore";
    }
    else if (student.getCollegeYear() == 3) {
        year = "Junior";
    }
    else if (student.getCollegeYear() == 4 || student.getCollegeYear() == 5) {
        year = "Senior";
    }
    cout << "\t--STUDENT INFO--" << endl;
    cout << student.getPerson();
    cout << endl;
    cout << " Course\t\t: " << student.getCourse() << endl;
    cout << " Year\t\t: " << year << endl;
    cout << " University\t: " << student.getUniversity() << endl;
    cout << endl;
    //Dog petDog("Inu", "Fluffy", 4, true);
    //petDog.setBreed("Shiba Inu");
    //petDog.setSize("Medium");
    //petDog.setIsRegister(true);
    //cout << petDog.getLeggedMammal();
    //cout << "Breed: " << petDog.getBreed() << endl;
    //cout << "Size: " << petDog.getSize() << endl;
    //string yes = (petDog.getIsRegister() == true) ? "Yes" : "No";
    //cout << "Is Registered: " << yes << endl;
    //cout << endl;
    return EXIT_SUCCESS;
}

