//Write a c++ program to create multilevel inheritance
#include<iostream>
using namespace std;
class A1{
	public:
		int x=10;
		virtual void print(){
			cout<<x<<endl;
			cout<<"I am function of class A1"<<endl;
		}
};
class A2:public A1{
	public:
		int y=20;
		void print(){
			cout<<x<<"  "<<y<<endl;
			cout<<"I am function of class A2"<<endl;
		}
};
class A3:public A2{
	public:
		int z=30;
		void print(){
			cout<<x<<"  "<<y<<"  "<<z<<endl;
			cout<<"I am function of class A3"<<endl;
		}
};
int main()
{
	A1* a=new A1();
	A1* b=new A2();
	A1* c=new A3();

	a->print();
	b->print();
	c->print();
	return 0;
}
