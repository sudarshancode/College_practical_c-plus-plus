//Write a C++ program to read the data of N employee and compute Net salary
//of each employee(DA=52% of basic and Income Tax(IT)=30% of the gross salary)
#include<iostream>
using namespace std;
float DA(float basic){
    return 0.52* basic;
}
float gross(float basic){
    return basic + DA(basic);
}
float incomeTax(float basic)
{
    return 0.30 * gross(basic);
}
float netSalary(float basic)
{
    return gross(basic)-incomeTax(basic);
}
int main()
{
    int N;
    cout<<"Enter number of employees:";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        float basic_salary;
        cout<<"Enter the basic salary for employee "<<i+1<<":";
        cin>>basic_salary;
        cout<<"Net salary for employee "<<i+1<<": "<<netSalary(basic_salary)<<endl;
    }
    return 0;
}