//Write a C++ program to compute the sum of the first n terms of the following
//series s=1+1/2+1/3+1/4+....
#include<iostream>
using namespace std;
float sum(int  n)
{
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+(1.0/i);
	}
	return s;
}
int main()
{
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	
	cout<<"Sum of this series:"<<sum(n)<<endl;

	return 0;
}
