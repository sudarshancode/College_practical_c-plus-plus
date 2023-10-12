//Write a c++ program to implement the concept of binary operator overloading
#include<iostream>
using namespace std;
class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r,double i):real(r),imag(i){}
        Complex operator+(Complex& c3)
        {
            Complex c(0,0);
            c.real=this->real+c3.real;
            c.imag=this->imag+c3.imag;
            return c;
        }
        Complex operator-(Complex& c3)
        {
            Complex c(0,0);
            c.real=this->real-c3.real;
            c.imag=this->imag-c3.imag;
            return c;
        }
        void display()
        {
            if(imag>=0)
            {
                cout<<real<<"+"<<imag<<"i"<<endl;
            }else{
                cout<<real<<imag<<"i"<<endl;
            }
        }
};
int main()
{
    Complex c1(10,3);
    Complex c2(20,5);
    Complex c4(0,0);
    c4=c1+c2;
    c4.display();
    c4=c1-c2;
    c4.display();

}