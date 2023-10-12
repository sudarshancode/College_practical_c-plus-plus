//Write a C++ program to create an array of pointers.
//Invoke functions using array objects.
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class Student{
        string name;
        float marks;
    public:
        void getStudentInfo(int i){
            cout<<endl<<"Student "<<i<<" detials"<<endl;
            cout<<"Enter name:";
            cin.ignore(); // Consume the newline character left by the previous input
            getline(cin,name);
            cout<<"Enter marks:";
            cin>>marks;
        }
        void displayStudentInfo(int i){
            cout<<endl<<"Student "<<i<<" detials"<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Marks:"<<marks<<endl;
        }
};
int main()
{
    Student st[MAX],*ptr;
    ptr=st;
    int class_size;
    cout<<"Enter the number of students in the class:";
    cin>>class_size;

    for(int i=1;i<=class_size;i++)
    {
        (ptr+i)->getStudentInfo(i);
    }
    cout<<endl<<"--------------Display---------------"<<endl;
    for(int i=1;i<=class_size;i++)
    {
        (ptr+i)->displayStudentInfo(i);
    }
    return 0;
}