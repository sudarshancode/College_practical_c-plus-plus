//Write a C++ program to operator overloading
#include<iostream>
using namespace std;
class Base{
	private:
		int x;
		int y;
	public:
		Base(int x,int y){
			this->x=x;
			this->y=y;
		}
		Base operator+(Base& b){
			Base temp(0,0);
			temp.x=x+b.x;
			temp.y=y+b.y;
			return temp;
		}
		void print(){
			cout<<"Complex number:"<<x<<"+"<<y<<"i"<<endl;
		}
};
int main()
{
	Base b1(5,2);
	Base b2(3,1);
	Base b3(0,0);
	b3=b1+b2;

	b3.print();

	return 0;
}
