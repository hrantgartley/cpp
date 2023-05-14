#pragma once
#include "Student.h"

class CollegeStudent: public Student {
    private:
        string Major;
        int Year;
    public:
        CollegeStudent(string, string, int, int*, string, int);
        ~CollegeStudent();
        int ConvertGrade(int);
        string YearToString(int) const;
        void InputGrades();
        friend ostream& operator<<(ostream& os, const CollegeStudent& cs);
};