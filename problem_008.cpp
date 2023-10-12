//Write a C++ program that reverse the elements of an array in place.
//The function must accept only one pointer value and return void
#include<iostream>
using namespace std;
class Reverse{
    public:
    void revrseArray(int* arr,int size);
};
void Reverse::revrseArray(int* arr,int size)
{
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    Reverse r1;
    int arr[5]={10,20,23,10,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    r1.revrseArray(arr,size);

}