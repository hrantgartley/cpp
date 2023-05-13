/* Program Name : TicTacToe.c*/
#include "Student.h"

Student::Student(string first, string last, int age, int* grades) {
    FirstName = first;
    LastName = last;
    Age = age;
    for (int i = 0; i < MAX; i++)
        Grades[i] = grades[i];
}

Student::~Student() {

}

double Student::CalculateGpa() {
    double sum{};
    int i{};
    for (i = 0; i < MAX; i++) {
        sum += Grades[i];
    }
    return sum / i;
}

int Student::ConvertGrade(int grade) {
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

void Student::InputGrades() {
    cout << "Enter your grades for the semester\n";
    for (int i = 0; i < MAX; i++) {
        cin >> Grades[i];
        Grades[i] = ConvertGrade(Grades[i]);
    }
}

void Student::PrintStudentInfo() {
    cout << "Student Name: " << FirstName << " " << LastName << endl;
    cout << "Age: " << Age << endl;
    cout << "GPA: " << CalculateGpa() << endl;
}