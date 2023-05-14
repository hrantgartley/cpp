#pragma once
#include "Student.h"

class CollegeStudent: public Student {
    private:
        string Major;
        int Year;
    public:
        CollegeStudent(string, string, int, int*, string, int);
        ~CollegeStudent();
        string YearToString(int) const;
        friend ostream& operator<<(ostream& os, const CollegeStudent& cs);
};