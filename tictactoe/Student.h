#pragma once
#include <iostream>
using namespace std;

const int MAX = 4;
class Student{
    protected:
        string FirstName;
        string LastName;
        int Age;
        int Grades[MAX];
    public:
        Student(string, string, int, int*);
        ~Student();
        void PrintStudentInfo();
        double CalculateGpa();
        int ConvertGrade(int);
        void InputGrades();
        friend ostream& operator<<(ostream& os, const Student& stu);
};