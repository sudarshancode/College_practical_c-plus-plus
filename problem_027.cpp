//Write a C++ program to allocate memory using new operator
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter size of row:";
    cin>>row;
    cout<<"Enter size of coloum:";
    cin>>col;

    int **ptr=new int*[row];
    for(int i=0;i<row;i++)
    {
       ptr[i]=new int[col];
    }
    for(int j=0;j<row;j++)
    {
        for(int k=0;k<col;k++){
            cout<<"Enter value of position["<<j<<","<<k<<"]:";
            cin>>ptr[j][k];
        }
    }
    cout<<"Output:"<<endl;
    for(int j=0;j<row;j++)
    {
        for(int k=0;k<col;k++){
            cout<<ptr[j][k]<<"  ";
        }
        cout<<endl;
    }

}