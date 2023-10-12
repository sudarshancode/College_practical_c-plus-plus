//Write a C++ program to write a given number in word
#include <iostream>
using namespace std;

string ones[]={" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
string teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nienteen"};
string tens[]={" ","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Nienty"};

string numberToWordConvert(int num){
	if(num<10)
	{
		return ones[num];
	}else if(num<20){
		return teens[num-10];
	}
	else if(num<100){
		return tens[num/10]+" "+ones[num%10];
	}else{
		return ones[num/100]+" hundred "+numberToWordConvert(num%100);
	}
}

int main()
{
	int number;
	cout<<"Enter numbers(0-999):";
	cin>>number;
	if(number<0 || number>999){
		cout<<"Number out of range!!"<<endl;
	}else{
		string words=numberToWordConvert(number);
		cout<<"Words:"<<words<<endl;
	}
	return 0;
}
