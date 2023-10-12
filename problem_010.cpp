//Write a c++ program to calculate factorial of a number using recursion
//using iteration
#include<iostream>
using namespace std;
int factorialRecur(int n)
{
    if(n<=0 || n==1)
    {
       return 1; 
    }else{
        return n * factorialRecur(n-1);
    }
}
int factorialIter(int n)
{
    if(n<=0 || n==1)
    {
        return 1;
    }else{
        int result=1;
        for(int i=1;i<=n;i++)
        {
            result=result*i;
        }
        return result;
    }
}
int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    cout<<"(Using Recursion)Factorial of "<<n<<" is:"<<factorialRecur(n)<<endl;
    cout<<"(Using Iteration)Factorial of "<<n<<" is:"<<factorialIter(n)<<endl;
    return 0;
}
