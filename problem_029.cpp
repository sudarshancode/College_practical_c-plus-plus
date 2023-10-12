//Write a program in c++ to demonstrate defult constructor.Create a class 
//having two data members in the private section.Define a defult constructor to initialize these
//data members to initial value and display these values with the help of members
//function
#include<iostream>
using namespace std;
class Student{
    private:
        int age;
        float marks;
    public:
        Student(int age,float marks);
        void dispaly();
};
Student::Student(int age,float marks)
{
    this->age=age;
    this->marks=marks;
}
void Student::dispaly()
{
    cout<<"Age:"<<age<<endl;
    cout<<"Marks:"<<marks<<endl;
}
int main()
{
    Student Rakesh(14,540.67);
    Rakesh.dispaly();

    Student Bimol(40,670.64);
    Bimol.dispaly();

    return 0;
}

