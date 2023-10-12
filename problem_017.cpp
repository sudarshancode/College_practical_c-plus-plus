//Write a c++ to illustrate the concepts of console I/O operations
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    cout << "Hello, World!" << endl;

    cout << "Please enter your name: ";
    string name;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    return 0;
}

