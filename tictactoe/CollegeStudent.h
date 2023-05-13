#pragma once
#include "Student.h"

class CollegeStudent: public Student {
    private:
        string Major;
        int Year;
    public:
        CollegeStudent(string, string, int, int*, string, int);
        ~CollegeStudent();
        void PrintStudentInfo();
        double CalculateGpa();
        int ConvertGrade(int);
        string YearToString(int);
        void InputGrades();
};