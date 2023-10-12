//Write a C++ program which takes the radius of a circle as input from the user,
//passes it to another function that computes the area and the circumference of the
//circle and displays the value of area and circumference from the main()

#include <iostream>
using namespace std;
float area(float r)
{
	return (3.141*r*r);
}
float circum(float r)
{
	return (2*3.141*r);
}
int main()
{
	float rad;
	cout<<"Enter radius:";
	cin>>rad;
	cout<<"Area of the circle:"<<area(rad)<<endl;
	cout<<"Circunference of the circle:"<<circum(rad);
	return 0;
}
