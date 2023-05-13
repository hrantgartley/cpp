#include "CollegeStudent.h"

int main() {
    string First, Last, Major;
    int Age, Year;
    cout << "Enter your first name: ";
    cin >> First;
    cout << "Enter your last name: ";
    cin >> Last;
    cout << "Enter your age: ";
    cin >> Age;
    cout << "Enter your major: ";
    cin.ignore();
    getline(cin, Major);
    cout << "Enter your year: ";
    cin >> Year;
    int* Grades = new int[MAX];
    CollegeStudent Grant{CollegeStudent(First, Last, Age, Grades, Major, Year)};
    Grant.InputGrades();
    Grant.PrintStudentInfo();
    return 0;
}
