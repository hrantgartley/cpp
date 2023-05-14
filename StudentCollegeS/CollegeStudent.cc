#include "CollegeStudent.h"

CollegeStudent::CollegeStudent(string First, string Last, int Age, int* Grades, string Major, int Year) : Student(First, Last, Age, Grades) {
    this->Major = Major;
    this->Year = Year;
}

CollegeStudent::~CollegeStudent() {
    cout << "College student destructor called" << endl;
}

string CollegeStudent::YearToString(int year) const {
    switch (year) {
        case 1:
            return "Freshman";
        case 2:
            return "Sophomore";
        case 3:
            return "Junior";
        case 4:
            return "Senior";
        default:
            return "Unknown";
    }
}

ostream& operator<<(ostream& os, const CollegeStudent& cs) {
    os << "Student Name: " << cs.FirstName << " " << cs.LastName << endl;
    os << "Student Age: " << cs.Age << endl;
    os << "Major: " << cs.Major << endl;
    os << "Year: " << cs.YearToString(cs.Year) << endl;
    os << "GPA: " << cs.CalculateGpa() << endl;
    return os;
}
