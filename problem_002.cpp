//Write a C++ program to illustreate the operator overloading concept using matrix addition
//as an example.
#include<iostream>
using namespace std;

class Matrix{
    int row,col;
    public:
        int** arr;
        Matrix(int r,int cl);
        void getValue();
        void print(); 
        Matrix operator+(Matrix& m2);

};
Matrix::Matrix(int r,int cl)
{
    row=r;
    col=cl;
    arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
}
void Matrix::getValue()
{
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++)
        {
            cout<<"Enter value :";
            cin>>arr[j][k];
        }
    }
}
void Matrix::print()
{
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++)
        {
            cout<<arr[j][k]<<"  ";
        }
        cout<<endl;
    }
}
Matrix Matrix::operator+(Matrix& m2)
{
    Matrix m(row,col);
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            m.arr[i][j]= arr[i][j]+m2.arr[i][j];
        }
    }
    return m;
}

int main()
{
    Matrix m1(3,3);
    m1.getValue();
    m1.print();
    Matrix m2(3,3);
    m2.getValue();
    m2.print();

    Matrix sum(3,3);
    sum=m1+m2;
    cout<<"Sum of Matrix:\n";
    sum.print();

}