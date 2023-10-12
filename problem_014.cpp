//Write a C++ program to generate a Fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any number:";
	cin>>n;
	int first=0,second=1,next=0;
	for(int i=0;i<n;i++){
		if(i==0)
		{
			cout<<i<<" ";
		}else{
			cout<<second<<" ";
			next=first+second;
			first=second;
			second=next;
			
		}
	}
	cout<<endl;
	return 0;
}
