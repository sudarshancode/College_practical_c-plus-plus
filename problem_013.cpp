//Write a c++ program to find weather a number is aramstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,count=0,r=0,sum=0;
	cout<<"Enter any number:";
	cin>>n;
	int var=n;
	while(var!=0)
	{
		
		var=var/10;
		count++;
	}
	var=n;
	cout<<count<<endl;
	while(var!=0)
	{
		r=var%10;
		sum=sum+pow(r,count);
		var=var/10;
	}
	if(n==sum)
	{
		cout<<"The number is armastrong"<<endl;
	}else{
		cout<<"The number is not aramstrong"<<endl;
	}
	return 0;
}

