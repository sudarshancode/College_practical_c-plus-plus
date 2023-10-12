//Write a C++ program to display Names, Roll No., and grades of 3 students who have appeared in the examnation.
//Declare the class of name, Roll No. and grade. Create an array of class objects. Read and display the contents of the 
//array.

#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		int rollNumber;
		float grade;
		void putData(string s,int r,float g);
		void printData();
};
void Student::putData(string s,int r,float g){
	name=s;
	rollNumber=r;
	grade=g;
}
void Student::printData(){
	cout<<"Name:"<<name<<endl;
	cout<<"Roll number:"<<rollNumber<<endl;
	cout<<"Grade:"<<grade<<endl;
	cout<<"------------------"<<endl;
}
int main()
{
	string n;
	float grade;
	int roll;
	Student s[3];

	for(int i=0;i<3;i++){
		cout<<"Student->"<<i+1<<endl;
		cout<<"Enter Name:";
		cin>>n;
		cout<<"Enter Roll Number:";
		cin>>roll;
		cout<<"Enter Grade:";
		cin>>grade;
		s[i].putData(n,roll,grade);
	}
	cout<<"-----------------------------"<<endl;
	cout<<"|"<<"     STUDENT DETIALS       "<<"|"<<endl;
	cout<<"-----------------------------"<<endl;
	for(int k=0;k<3;k++)
	{
		s[k].printData();
	}
	
	return 0;
}
