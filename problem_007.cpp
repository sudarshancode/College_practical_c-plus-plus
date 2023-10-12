//Write a c++ program illustrating class declarations, 
//defination, and accessing class members
#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    double marks;
    void print();
};
void Student::print()
{
    cout<<"Roll:"<<roll<<endl<<"Marks:"<<marks<<endl;
}
int main()
{
    Student rakesh;
    rakesh.roll=20;
    rakesh.marks=432.23;
    rakesh.print();
    return 0;
}