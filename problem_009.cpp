//Write a C++ program that copy the contents of one text 
//file to another file,after removing all white space
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inp;
    inp.open("inputfile.txt");
    if(!inp.is_open())
    {
        cout<<"Input file doesn't open!!";
    }
    ofstream ost;
    ost.open("Outputfile.txt");
    if(!ost.is_open())
    {
        cout<<"Output file doesn't create!!";
    }
    char ch;
    while(inp.get(ch))
    {
        if(!isspace(ch))
        {
            ost<<ch;
        }
        
    }
    inp.close();
    ost.close();
    return 0;
}
