#include "CollegeStudent.h"

CollegeStudent::CollegeStudent(string First, string Last, int Age, int* Grades, string Major, int Year): Student(First, Last, Age, Grades) {
    this->Major = Major;
    this->Year = Year;
}

CollegeStudent::~CollegeStudent() {
    cout << "College student destructor called" << endl;
}

string CollegeStudent::YearToString(int year) {
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

void CollegeStudent::PrintStudentInfo() {
    Student::PrintStudentInfo();
    cout << "Major: " << Major << endl; 
    cout << "Year: " << YearToString(Year) << endl;
}

double CollegeStudent::CalculateGpa() {
    double sum{};
    int i{};
    for (i = 0; i < MAX; i++) {
        sum += Grades[i];
    }
    return sum / i;
}

int CollegeStudent::ConvertGrade(int grade) {
    if (grade >= 90)
        return 4;
    else if (grade >= 80)
        return 3;
    else if (grade >= 70)
        return 2;
    else if (grade >= 60)
        return 1;
    else
        return 0;
}

void CollegeStudent::InputGrades() {
    cout << "Enter your grades for the semester\n";
    for (int i = 0; i < MAX; i++) {
        cin >> Grades[i];
        Grades[i] = ConvertGrade(Grades[i]);
    }
}