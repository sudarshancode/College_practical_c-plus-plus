//Write a c++ program to use pointer for both base and derived classes and call the member function.
//use virtual keyword
#include<iostream>
using namespace std;
class Base{
	public:
		virtual void print(){
			cout<<"I am function of base class"<<endl;
		}	
};
class Derived:public Base{
	public:
		void print(){
			cout<<"I am function of derived class"<<endl;
		}
};
int main()
{
	Base* b=new Base();
	Base* d=new Derived();
	b->print();
	d->print();
	return 0;
}
