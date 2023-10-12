//Write a program in c++ to display student's information using friend function
#include <iostream>
#include <string>
using namespace std;
class Student; 
class StudentInfo {
public:
    static void displayStudentInfo(const Student& student);  // Friend function declaration
};
class Student {
private:
    string name;
    int rollNumber;
    float marks;
public:
    Student(const string& n, int roll, float m) : name(n), rollNumber(roll), marks(m) {}
    friend void StudentInfo::displayStudentInfo(const Student& student);
};
void StudentInfo::displayStudentInfo(const Student& student) {
    cout << "Student Information:" <<endl;
    cout << "Name: " << student.name <<endl;
    cout << "Roll Number: " << student.rollNumber <<endl;
    cout << "Marks: " << student.marks <<endl;
}
int main() {
    Student student("John", 12345, 95.5);
    StudentInfo::displayStudentInfo(student);
    return 0;
}
